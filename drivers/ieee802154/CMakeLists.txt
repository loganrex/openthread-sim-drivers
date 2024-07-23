# SPDX-License-Identifier: Apache-2.0

zephyr_library()

zephyr_library_sources_ifdef(CONFIG_IEEE802154_ETC_UPIPE		ieee802154_etc_uart_pipe.c)


