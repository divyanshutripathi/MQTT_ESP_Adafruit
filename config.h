/************************ Adafruit IO Config *******************************/

#define IO_USERNAME    "user name of adfruit"
#define IO_KEY         "adafruit key"

/******************************* WIFI **************************************/

#define WIFI_SSID       "ssid"
#define WIFI_PASS       "password"

#include "AdafruitIO_WiFi.h"
AdafruitIO_WiFi io(IO_USERNAME, IO_KEY, WIFI_SSID, WIFI_PASS);
