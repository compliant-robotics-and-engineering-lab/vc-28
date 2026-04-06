/*
    Example: Chase

    Demonstrates a simple "chase" sequence across all output channels.
    Each channel is activated in order with a short delay between steps,
    then deactivated before the next channel turns on.
*/

#include "board_config.h"

void setup() {
    Serial.begin(115200);
    Serial.println(board.name);

    // Initialize all outputs
    for (uint8_t i = 1; i <= board.numChannels; i++) {
        pinMode(board.channel(i), OUTPUT);
        digitalWrite(board.channel(i), LOW);
    }
}

void loop() {
    // Toggle all channels sequentially
    for (uint8_t i = 1; i <= board.numChannels; i++) {
        digitalWrite(board.channel(i), HIGH);
        delay(500);
        digitalWrite(board.channel(i), LOW);
    }
}