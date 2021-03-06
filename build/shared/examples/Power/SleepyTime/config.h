#ifndef _PINOCCIO_CONFIG_H_
#define _PINOCCIO_CONFIG_H_

/*****************************************************************************
*****************************************************************************/
#define APP_ADDR                  1
#define APP_CHANNEL               0x1a // channel 26, at the end of the 2.4GHz spectrum
#define APP_PANID                 0x4567
#define APP_ENDPOINT              1
#define APP_SECURITY_KEY          "TestSecurityKey"
#define APP_SLEEP_INTERVAL  			5000

#define SYS_SECURITY_MODE                   0

#define NWK_BUFFERS_AMOUNT                  3
#define NWK_MAX_ENDPOINTS_AMOUNT            3
#define NWK_DUPLICATE_REJECTION_TABLE_SIZE  10
#define NWK_DUPLICATE_REJECTION_TTL         3000 // ms
#define NWK_ROUTE_TABLE_SIZE                100
#define NWK_ROUTE_DEFAULT_SCORE             3
#define NWK_ACK_WAIT_TIME                   1000 // ms

//#define PHY_ENABLE_ENERGY_DETECTION
//#define NWK_ENABLE_ROUTING
//#define NWK_ENABLE_SECURITY

#endif // _PINOCCIO_CONFIG_H_
