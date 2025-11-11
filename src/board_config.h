#pragma once
#include <cstdint>

struct BoardConfig {
    static constexpr const char* name = "VC-28";
    static constexpr const char* version = "0.1";

    static constexpr std::uint8_t numChannels = 28;
    static constexpr std::uint8_t INVALID_CH = 0xFF;

    const std::uint8_t channels[numChannels] = {
        1, 2, 42, 41, 40, 4, 5, 6, 7, 15, 16, 17, 18, 8,
        9, 10, 11, 12, 13, 14, 21, 47, 48, 35, 36, 37, 38, 39
    };

    constexpr std::uint8_t channel(std::uint8_t ch) const {
        return (ch >= 1 && ch <= numChannels)
            ? channels[ch - 1]
            : INVALID_CH;
    }
};

constexpr BoardConfig board;
