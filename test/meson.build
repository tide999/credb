test_cpp_files = files(
    'Ledger.cpp',
    'Programs.cpp',
    'primitives.cpp',
    'Workload.cpp',
    'basic.cpp',
    'main.cpp',
    'Transaction.cpp',
    'BufferManager.cpp',
    'HashMap.cpp',
    'MultiMap.cpp',
    'Disk.cpp',
)

test_extra_cpp_files = files(
    '../src/enclave/RWLockable.cpp',
    '../src/enclave/Ledger.cpp',
    '../src/enclave/ObjectKeyProvider.cpp',
    '../src/enclave/ObjectListIterator.cpp',
    '../src/enclave/ObjectIterator.cpp',
    '../src/enclave/ObjectEventHandle.cpp',
    '../src/enclave/Block.cpp',
    '../src/enclave/Enclave.cpp',
    '../src/server/Disk.cpp',
    '../src/server/FakeEnclave.cpp',
    '../src/ledger/Witness.cpp',
    '../src/enclave/bindings/Collection.cpp',
    '../src/enclave/bindings/Database.cpp',
    '../src/enclave/bindings/OpContext.cpp',
    '../src/enclave/bindings/Object.cpp',
    '../src/enclave/bindings/OpInfo.cpp',
    '../src/enclave/bindings/ObjectIterator.cpp',
    '../src/enclave/Shard.cpp',
    '../src/enclave/LockHandle.cpp',
    '../src/enclave/Collection.cpp',
    '../src/common/util/Mutex.cpp',
    '../src/common/util/base64.cpp',
    '../src/common/util/IdentityDatabase.cpp',
    '../src/enclave/Index.cpp',
    '../src/enclave/MultiMap.cpp',
    '../src/enclave/HashMap.cpp',
    '../src/common/util/MurmurHash2.cpp',
    '../src/enclave/ProgramRunner.cpp',
    '../src/enclave/TaskManager.cpp',
    '../src/enclave/machineprimitives.cpp',
    '../src/enclave/machineprimitives_asm.S',
    '../src/enclave/Task.cpp',
    '../src/enclave/BufferManager.cpp',
    '../src/enclave/EncryptedIO.cpp',
    '../src/enclave/LocalEncryptedIO.cpp'
)

test_compile_args = compile_args + ['-DTEST', '-DFAKE_ENCLAVE']
