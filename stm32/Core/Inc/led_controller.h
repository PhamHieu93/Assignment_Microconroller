/*
 * led_controller.h
 *
 *  Created on: Oct 22, 2024
 *      Author: 84868
 */

#ifndef INC_LED_CONTROLLER_H_
#define INC_LED_CONTROLLER_H_



#endif /* INC_LED_CONTROLLER_H_ */

void display7SEG_val_1(int num);
void display7SEG_val_2(int num);
void display7SEG_mode(int num);
void clear_all_led();
void turn_all_led();
void clear_led(int led_current);
void led_blinky(int led_current);
void traffic_light(int led_current);
void updateValLed_1();
void updateValLed_2();
void update7SEG(int index_led);
void changeState(int state_num);
void clear_all_7SEG_1();
void clear_all_7SEG_2();
void changeBlink();
void addTime();
void LCD_display();
