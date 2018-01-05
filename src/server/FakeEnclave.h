#pragma once

#ifdef FAKE_ENCLAVE

#include <sgx_ukey_exchange.h>
#include <stdint.h>
#include <stdlib.h>

#include "util/defines.h"
#include "util/status.h"

bool write_to_disk(const char *filename, const uint8_t *data, uint32_t length);
int32_t get_file_size(const char *filename);
bool read_from_disk(const char *filename, uint8_t *data, uint32_t length);
void send_to_remote_party(remote_party_id identifier, const uint8_t *data, uint32_t length);

void attestation_queue_groupid_result(remote_party_id identifier, bool result);
void attestation_queue_msg2(remote_party_id identifier, sgx_ra_msg2_t *p_msg2, uint32_t size);
void attestation_notify_done(remote_party_id identifier);
void attestation_tell_groupid(remote_party_id identifier);

void remote_party_lock(remote_party_id identifier);
void remote_party_unlock(remote_party_id identifier);
void remote_party_wait(remote_party_id identifier);
void remote_party_notify_all(remote_party_id identifier);

/// This will be called by enclave code
void remove_from_disk(const char *filename);
int write_to_disk(bool *res, const char *filename, const uint8_t *data, uint32_t length);
int get_file_size(int32_t *out, const char *filename);
int read_from_disk(bool *result, const char *filename, uint8_t *data, uint32_t length);

// for debug purposes
bool dump_everything(const char *filename, const uint8_t *disk_key, size_t length);
bool load_everything(const char *filename, uint8_t *disk_key, size_t length);

#endif
