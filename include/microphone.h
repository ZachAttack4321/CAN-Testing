#ifndef _MICROPHONE_H_
#define _MICROPHONE_H_

#define MIC_PIN     (1<<1)

void MIC_init();
void MIC_start();
void MIC_stop();
uint16_t MIC_get_value();







#endif