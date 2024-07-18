message("CONFIG_ENTROPY_GENERATOR ${CONFIG_ENTROPY_GENERATOR}  *************************** ")
message("CONFIG_IEEE802154 ${CONFIG_IEEE802154} ****************************************** ")

add_subdirectory_ifdef(CONFIG_ENTROPY_GENERATOR entropy)
add_subdirectory_ifdef(CONFIG_IEEE802154 ieee802154)

