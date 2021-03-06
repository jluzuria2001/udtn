#ifndef __PROJECT_CONF_H__
#define __PROJECT_CONF_H__

// Set our MMEM size
#undef MMEM_CONF_SIZE
#define MMEM_CONF_SIZE 2000

// Set the PAN ID that IBR-DTN uses
#undef IEEE802154_CONF_PANID
#define IEEE802154_CONF_PANID 0x780

// Disable the CSMA retransmission buffers
#undef QUEUEBUF_CONF_NUM
#define QUEUEBUF_CONF_NUM 0

#endif /* __PROJECT_CONF_H__ */
