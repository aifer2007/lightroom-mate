#pragma once

#include <Arduino.h>

#include <BLEDevice.h>
#include <BLEServer.h>

#include "../constants.h"

#include "../services/MIDIService.h"

// Represents the Lightroom Mate server.
class LRMServer {
public:
  LRMServer();

  MIDIService *getMIDIService();

  bool isConnected();
  void setConnected(bool connected);

  void begin();
  BLEService *createBLEService(String uuid);

private:
  bool _connected = false;
  BLEServer *_bleServer;
  MIDIService *_midiService;
};
