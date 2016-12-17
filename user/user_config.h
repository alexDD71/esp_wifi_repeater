#ifndef _USER_CONFIG_
#define _USER_CONFIG_

typedef enum {SIG_DO_NOTHING=0, SIG_START_SERVER=1, SIG_SEND_DATA, SIG_UART0, SIG_CONSOLE_RX, SIG_CONSOLE_TX } USER_SIGNALS;

#define WIFI_SSID            "ssid"
#define WIFI_PASSWORD        "password"

#define WIFI_AP_SSID         "MyAP"
#define WIFI_AP_PASSWORD     "none"

#define MAX_CLIENTS	     10

//
// Define this if you want to have access to the config console via TCP.
// Ohterwise only local access via serial is possible
//
#define REMOTE_CONFIG      1
#define CONSOLE_SERVER_PORT  7777

//
// Define this if you want to offer monitoring access to all transmitted data between the soft AP and all STAs.
// Data is mirrored in pcap format to the given port
// CAUTION: this might be a privacy issue!!!
//
//#define REMOTE_MONITORING  1
#define MONITOR_SERVER_PORT  8888
//#define DROP_PACKET_IF_NOT_RECORDED 1

#endif
