
#define FIRMWARE_VERSION 1.1
#define HOSTNAME "bhpzem-mynode"
#define NODE_ID "mynode"
#define MAX_ATTEMPTS 5
#define DELAY_NOTIFICATION 5000 //5 seconds
#define TEMPERATURE_PRECISION 9

#define WIFI_SSID "VOID SOFTWARE"
#define WIFI_SECRET "blackiscool"
//     ___ ___ ___ ___  _    
//    / __| _ \_ _/ _ \( )___
//   | (_ |  _/| | (_) |/(_-<
//    \___|_| |___\___/  /__/
//     
#define DIRECTION_PIN 14
#define RX_PIN 4
#define TX_PIN 5
#define SDA_PIN 2
#define SCL_PIN 0  
#define DS18B20_PIN 12


//    ___ ___ ___ _____ _   _ ___ ___ ___ 
//   | __| __/ __|_   _| | | | _ \ __/ __|
//   | _|| _| (__  | | | |_| |   / _|\__ \
//   |_| |___\___| |_|  \___/|_|_\___|___/
// 
#define DETECT_DIRECTION false
#define PRINT_TO_SERIAL_MONITOR false

//    ___  ___  ___ _____ _    
//   | _ \/ _ \| _ \_   _( )___
//   |  _/ (_) |   / | | |/(_-<
//   |_|  \___/|_|_\ |_|   /__/
//   
#define HTTPS_PORT  443
#define HTTP_PORT  80
//    ___ __  __  ___  _  _  ___ _  _ ___ 
//   | __|  \/  |/ _ \| \| |/ __| \| / __|
//   | _|| |\/| | (_) | .` | (__| .` \__ \
//   |___|_|  |_|\___/|_|\_|\___|_|\_|___/
//   
#define EMONCMS_PROTOCOL 0 //usar 0 para HTTP ou 1 HTTPS para servidores com certificado
#define EMONCMS_HOST  ""
#define EMONCMS_URL_PREFIX  ""
#define EMONCMS_API_KEY ""

//    __  __  ___ _____ _____ 
//   |  \/  |/ _ \_   _|_   _|
//   | |\/| | (_) || |   | |  
//   |_|  |_|\__\_\|_|   |_|  
//  
#define MQTT_BROKER_IP ""
#define MQTT_BROKER_PORT 1883
#define MQTT_USERNAME ""
#define MQTT_PASSWORD ""
#define MQTT_TOPIC "/pzem/"+String(NODE_ID)+"/readings"

//    ___ ___ ___ ___ _      ___   ___    
//   |   \_ _/ __| _ \ |    /_\ \ / ( )___
//   | |) | |\__ \  _/ |__ / _ \ V /|/(_-<
//   |___/___|___/_| |____/_/ \_\_|   /__/
//
//#define D_SSD1306
String nodeId = NODE_ID;
int notificationInterval = DELAY_NOTIFICATION;
bool directionCurrentDetection = DETECT_DIRECTION;
String emoncmsApiKey = EMONCMS_API_KEY;
String emoncmsUrl = EMONCMS_HOST;
String emoncmsPrefix = EMONCMS_URL_PREFIX;
String mqttIpDns = MQTT_BROKER_IP;
String mqttUsername = MQTT_USERNAME;
String mqttPassword = MQTT_PASSWORD;
float firmwareVersion = FIRMWARE_VERSION;
bool emoncmshttp = EMONCMS_PROTOCOL ==  0;
String fileName = "/bconfig.json";
String wifiSSID = WIFI_SSID;
String wifiSecret = WIFI_SECRET;
