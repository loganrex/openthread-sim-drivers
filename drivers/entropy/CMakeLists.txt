
zephyr_library()

message("CONFIG_FAKE_ENTROPY_QEMU ${CONFIG_FAKE_ENTROPY_QEMU} *************************** ")

zephyr_library_sources_ifdef(CONFIG_FAKE_ENTROPY_QEMU    fake_entropy_qemu.c)

