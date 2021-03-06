#ifndef __CONFIG_H_
#define __CONFIG_H_

/**
 * Wi-Fi SSID
 */
#ifndef WIFI_SSID
#define WIFI_SSID "TEST_ESP32_CONNECTION"
#endif

/**
 * Wi-Fi password
 */
#ifndef WIFI_PASSWORD
#define WIFI_PASSWORD "testesp32" //`````````````````````````````````````````````````````````````````````````````````````````````
#endif

/**
 * MQTT broker hostname or IP
 */
#ifndef MQTT_HOSTNAME
#define MQTT_HOSTNAME "mqtt.flespi.io"
#endif

/**
 * MQTT port
 */
#ifndef MQTT_PORT
#define MQTT_PORT 1883
#endif

/**
 * MQTT token - MQTT username
 */
#ifndef MQTT_USERNAME
#define MQTT_USERNAME "FlespiToken vTsX8UaHjIoRDbemkaTkhGUHkHhNVd3eUk2Q20nbzBT2AVcJVTT0pDyx9D8SG0Wq"
#endif

/**
 * Topic name for MQTT published
 */
#ifndef MQTT_TOPIC
#define MQTT_TOPIC "crawldata"
#endif

// #ifndef MQTT_TOPIC
// #define MQTT_TOPIC "crawldata"
// #endif


/**
 * Measurement period in ms
 */
#ifndef MEASUREMENT_INTERVAL
#define MEASUREMENT_INTERVAL 50000
#endif

/**
 * Offset in ms to measurement period calculated as: sample_utc_ms % MEASUREMENT_INTERVAL
 */
#ifndef MEASUREMENT_OFFSET
#define MEASUREMENT_OFFSET 0
#endif

#endif /* MAIN_CONFIG_H_ */