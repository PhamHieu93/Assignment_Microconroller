/*
 * glo_vari.c
 *
 *  Created on: Oct 22, 2024
 *      Author: 84868
 */

#include "glo_vari.h"
int led_current_1 = 1;
int led_current_2 = 1;
int count_led = 0;
int count_led_2 = 0;
int update_val = 0;
int red_add = 0;
int green_add = 0;
int yellow_add = 0;


int But1haspress = 0;
// Timer variable
int timer1_counter=0;
int timer1_flag=0;

int timer2_counter=0;
int timer2_flag=0;

int timer3_counter=0;
int timer3_flag=0;

int timer4_counter=0;
int timer4_flag=0;

int timer5_counter = 0;
int timer5_flag = 0;

int seg2_status = 0;
int seg3_status = 0;
//Button
int button_flag1 = 0;
int button_flag2 = 0;
int button_flag3 = 0;
int count_press = 0;
int count_press_up = 0;
int increased_val = 0;
int button_press_flag = 0;
int button_read1[4] = {1,1,1,1};
int button_read2[4] = {1,1,1,1};
int button_read3[4] = {1,1,1,1};
int current_mode = 8;

int led1 = 0;
int led2 = 0;
char str1[15] = {0};
char str2[15] = {0};
int mode = 1;
