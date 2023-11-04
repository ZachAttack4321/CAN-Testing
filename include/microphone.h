#ifndef _MICROPHONE_H_
#define _MICROPHONE_H_

#define MIC_PIN     (1<<1)

void start_microphone();
void stop_microphone();
uint16_t get_mic_result();







#endif