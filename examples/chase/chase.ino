#include "board_config.h"

void setup() {
    Serial.begin(115200);
    Serial.println(board.name);

    // Initialize all outputs
    for (uint8_t i = 0; i < board.numChannels; i++) {
        pinMode(board.channels[i], OUTPUT);
        digitalWrite(board.channels[i], LOW);
    }
}

void loop() {
    // Example: toggle all channels sequentially
    for (uint8_t i = 0; i < board.numChannels; i++) {
        digitalWrite(board.channels[i], HIGH);
        delay(500);
        digitalWrite(board.channels[i], LOW);
    }
}