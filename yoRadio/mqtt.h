#ifndef mqtt_h
#define mqtt_h

#if __has_include("mqttoptions.h")
#include "mqttoptions.h"
#include <AsyncMqttClient.h>


void mqttInit();
void connectToMqtt();
void onMqttConnect(bool sessionPresent);
void onMqttDisconnect(AsyncMqttClientDisconnectReason reason);
void onMqttMessage(char* topic, char* payload, AsyncMqttClientMessageProperties properties, size_t len, size_t index, size_t total);
void mqttPublishStatus();
void mqttPublishPlaylist();
void mqttPublishVolume();

#endif // if __has_include("mqttoptions.h")


#endif
