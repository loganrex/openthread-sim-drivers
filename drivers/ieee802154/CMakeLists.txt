zephyr_library()

# This hijacks the Zephyr ieee802154 driver library to insert our drivers
#set(ZEPHYR_CURRENT_LIBRARY drivers__ieee802154)

message("CONFIG_IEEE802154_SIM_UPIPE ${CONFIG_IEEE802154_SIM_UPIPE} ********************************** ")

zephyr_library_sources_ifdef(CONFIG_IEEE802154_SIM_UPIPE    ieee802154_sim_uart_pipe.c)