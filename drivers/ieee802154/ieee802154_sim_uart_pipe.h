/* ieee802154_sim_uart_pipe.h - Private header for UART PIPE fake radio driver */



#ifndef IEEE802154_SIM_UART_PIPE_H_
#define IEEE802154_SIM_UART_PIPE_H_

#define UART_PIPE_RADIO_15_4_FRAME_TYPE		0xF0
#define IEEE802154_MAX_PHY_PACKET_SIZE_  	127



struct upipe_context {
	struct net_if *iface;
	uint8_t mac_addr[8];
	bool stopped;
	/** RX specific attributes */
	uint8_t uart_pipe_buf[1];
	bool rx;
	uint8_t rx_len;
	uint8_t rx_off;
	uint8_t rx_buf[IEEE802154_MAX_PHY_PACKET_SIZE_];
};

#endif /* IEEE802154_ETC_UART_PIPE_H_ */
