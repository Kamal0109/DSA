#include <stdio.h>
#include <stdint.h>

uint16_t crc16(uint8_t *data, uint16_t length) {
    uint16_t crc = 0xFFFF;
    uint16_t i, j;
    for (i = 0; i < length; i++) {
        crc ^= (uint16_t)data[i];
        for (j = 0; j < 8; j++) {
            if (crc & 0x0001) {
                crc = (crc >> 1) ^ 0xA001;
            } else {
                crc = (crc >> 1);
            }
        }
    }
    return crc;
}

int main() {
    uint8_t data[] = {0x01, 0x02, 0x03, 0x04};
    uint16_t crc = crc16(data, sizeof(data));
    printf("CRC: 0x%X\n", crc);
    return 0;
}



#include <iostream>
#include <cstring>

using namespace std;

const uint16_t CRC16_POLY = 0xA001; // Standard CRC16 polynomial

uint16_t crc16(uint8_t *data, uint16_t length, uint16_t crc = 0xFFFF) {
    for (uint16_t i = 0; i < length; ++i) {
        crc ^= (uint16_t)data[i]; // XOR the next byte with the CRC value
        for (uint8_t j = 0; j < 8; ++j) {
            if (crc & 0x0001) { // If the least significant bit is 1, perform XOR with the polynomial
                crc = (crc >> 1) ^ CRC16_POLY;
            } else {
                crc = (crc >> 1);
            }
        }
    }
    return crc;
}

int main() {
    uint8_t data[] = {0x01, 0x02, 0x03, 0x04};
    uint16_t crc = crc16(data, sizeof(data));
    cout << "CRC: 0x" << hex << crc << endl;
    return 0;
}

