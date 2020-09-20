#include <stdio.h>
#include <stdlib.h>
#include "crcLib.h"

int main()
{
    uint8_t data;
    uint8_t crc;

    data = 0x34;
    crc = crc8_maxim(&data, 1);

    printf("data:%02x, crc:%02x\n", data, crc);
    return 0;
}
