/*
 * glo_vari.h
 *
 *  Created on: Oct 22, 2024
 *      Author: 84868
 */

#ifndef INC_GLO_VARI_H_
#define INC_GLO_VARI_H_



#endif /* INC_GLO_VARI_H_ */

#include "button.h"
#include"timer.h"
#include "normal_run.h"
#include "led_controller.h"
#include "main.h"
#include "i2c-lcd.h"
#include "string.h"
#include "stdio.h"
#include "stdlib.h"


#define INIT 1
#define RED_TIME 5
#define GREEN_TIME 3
#define YELLOW_TIME 2

#define RED_LIGHT 4
#define GREEN_LIGHT 6
#define YELLOW_LIGHT 7

#define CLEAR 8
#define RED_BLINK 9
#define GREEN_BLINK 11
#define YELLOW_BLINK 10

extern int led_current_1;
extern int led_current_2;

extern int count_led;
extern int count_led_2;
extern int update_val;
extern int red_add;
extern int green_add;
extern int yellow_add;

extern int seg2_status;
extern int seg3_status;
// Timer
extern int timer1_counter;
extern int timer1_flag;
extern int timer2_counter;
extern int timer2_flag;
extern int timer3_counter;
extern int timer3_flag;
extern int timer4_counter;
extern int timer4_flag;
extern int timer5_counter;
extern int timer5_flag;
//Button
extern int button_flag1;
extern int button_flag2;
extern int button_flag3;
extern int count_press;
extern int button_press_flag;
extern int increased_val;
extern int count_press_up;
extern int current_mode;
extern int button_read1[4];
extern int button_read2[4];
extern int button_read3[4];
extern int But1haspress;

extern int led1;
extern int led2;
extern char str1[15];
extern char str2[15];
extern int mode;
