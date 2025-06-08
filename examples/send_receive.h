#ifndef __send_receive_H
#define __send_receive_H

uint8_t data_send[] = {0x01, 0x03, 0x00, 0x48, 0x00, 0x08, 0xC4, 0x1A};
typedef struct {
    float U;  // 电压
    float I;  // 电流
    float P;  // 功率
    float PF; // 功率因数
    float T;  // 温度
    float F;  // 频率
} IM1281B_PARAM;

extern IM1281B_PARAM IM1281B_OUT;

#endif