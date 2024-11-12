/*
 * normal_run.c
 *
 *  Created on: Oct 22, 2024
 *      Author: 84868
 */

#include "glo_vari.h"
void normal_run_1()
{
	switch(led_current_1)
	{
	case INIT:
			changeState(CLEAR);
			led_current_1 = RED_LIGHT;
			setTimer1(2000);
	break;
	case RED_LIGHT:
		if(isBut1press() == 1)
		{
			clear_all_led();
			clearTimer();
			changeState(current_mode);
			setTimer4(250);
		}
		if(isBut2press() == 1)
		{

		}
		if(isBut3press() == 1)
		{
			clearTimer();
		}
		if(timer4_flag == 1)
		{
			changeState(current_mode);
			setTimer4(250);
		}

		if(timer1_flag == 1)
		{
			//mode = 1;
			led_current_1 = GREEN_LIGHT;
			count_led = RED_TIME + red_add;
			if(count_led > 99) count_led = 99;

			led1 = count_led;
			strcpy(str1, "RED");
			//strncpy(str1, "RED", sizeof(str1) - 1);
			//str1[sizeof(str1) - 1] = '\0';

			HAL_GPIO_WritePin(D5_GPIO_Port, D5_Pin, 1);
			HAL_GPIO_WritePin(D6_GPIO_Port, D6_Pin, 1);

			setTimer1(count_led*1000);

			//LCD_display(mode);
			setTimer3(1000); //time for led display
		}
		if(timer3_flag == 1)
		{
			count_led--;
			led1 = count_led;
			//LCD_display(mode);
			setTimer3(1000);
		}

	break;
	case GREEN_LIGHT:
		if(isBut1press())
		{
			clear_all_led();
			clearTimer();
			changeState(current_mode);
			setTimer4(250);
		}
		if(isBut2press() == 1)
		{

		}
		if(isBut3press() == 1)
		{
			clearTimer();
		}
		if(timer4_flag == 1)
		{
			changeState(current_mode);
			setTimer4(250);
		}
		if(timer1_flag == 1)
		{
			led_current_1 = YELLOW_LIGHT;
			count_led = GREEN_TIME + green_add;
			if(count_led > 99) count_led = 99;

			led1 = count_led;
			strcpy(str1, "GREEN");
			//strncpy(str1, "GREEN", sizeof(str1) - 1);
			//str1[sizeof(str1) - 1] = '\0';

			HAL_GPIO_WritePin(D5_GPIO_Port, D5_Pin, 1);
			HAL_GPIO_WritePin(D6_GPIO_Port, D6_Pin, 0);
			setTimer1(count_led*1000);

			//LCD_display(mode);
			setTimer3(1000);
		}
		if(timer3_flag == 1)
		{
			count_led--;
			led1 = count_led;
			//LCD_display(mode);
			setTimer3(1000);
		}

	break;
	case YELLOW_LIGHT:
		if(isBut1press())
		{
			clear_all_led();
			clearTimer();
			changeState(current_mode);
			setTimer4(250);
		}
		if(isBut2press() == 1)
		{
		}
		if(isBut3press() == 1)
		{
			clearTimer();
		}
		if(timer4_flag == 1)
		{
			changeState(current_mode);
			setTimer4(250);
		}
		if(timer1_flag == 1)
		{
			led_current_1 = RED_LIGHT;
			count_led = YELLOW_TIME + yellow_add;
			if(count_led > 99) count_led = 99;

			led1 = count_led;
			strcpy(str1, "YELLOW");

			//strncpy(str1, "YELLOW", sizeof(str1) - 1);
			//str1[sizeof(str1) - 1] = '\0';

			HAL_GPIO_WritePin(D5_GPIO_Port, D5_Pin, 0);
			HAL_GPIO_WritePin(D6_GPIO_Port, D6_Pin, 1);
			setTimer1(count_led*1000);

			//LCD_display(mode);
			setTimer3(1000);
		}
		if(timer3_flag == 1)
		{
			count_led--;
			led1 = count_led;
			//LCD_display(mode);
			setTimer3(1000);
		}
	}
}



void normal_run_2()
{
	switch(led_current_2)
	{
	case INIT:
			led_current_2 = GREEN_LIGHT;
			setTimer2(2000);
	break;
	case GREEN_LIGHT:
		if(timer2_flag == 1)
		{
			count_led_2 = GREEN_TIME + green_add;
			if(count_led_2 > 99) count_led_2 = 99;

			led2 = count_led_2;
			strcpy(str2,"GREEN");
			//strncpy(str2, "GREEN", sizeof(str2) - 1);
			//str2[sizeof(str2) - 1] = '\0';

			led_current_2 = YELLOW_LIGHT;
			HAL_GPIO_WritePin(D3_GPIO_Port, D3_Pin, 1);
			HAL_GPIO_WritePin(D4_GPIO_Port, D4_Pin, 0);
			setTimer2(count_led_2*1000);

			LCD_display(mode);
			setTimer5(1000);
		}
		if(timer5_flag == 1)
		{
			count_led_2--;
			led2 = count_led_2;

			LCD_display(mode);
			setTimer5(1000);
		}
	break;
	case YELLOW_LIGHT:
		if(timer2_flag == 1)
		{
			count_led_2 = YELLOW_TIME + yellow_add;
			if(count_led_2 > 99) count_led_2 = 99;

			led2 = count_led_2;
			strcpy(str2,"YELLOW");

			//strncpy(str2, "YELLOW", sizeof(str2) - 1);
			//str2[sizeof(str2) - 1] = '\0';  // Đảm bảo kết thúc chuỗi

			led_current_2 = RED_LIGHT;
			HAL_GPIO_WritePin(D3_GPIO_Port, D3_Pin, 0);
			HAL_GPIO_WritePin(D4_GPIO_Port, D4_Pin, 1);
			setTimer2(count_led_2*1000);

			LCD_display(mode);
			setTimer5(1000);
		}
		if(timer5_flag == 1)
		{
			count_led_2--;
			led2 = count_led_2;

			LCD_display(mode);
			setTimer5(1000);
		}
	break;
	case RED_LIGHT:
		if(timer2_flag == 1)
		{
			count_led_2 = RED_TIME + red_add;
			if(count_led_2 > 99) count_led_2 = 99;

			led2 = count_led_2;
			strcpy(str2,"RED");

			//strncpy(str2, "RED", sizeof(str2) - 1);
			//str2[sizeof(str2) - 1] = '\0';

			led_current_2 = GREEN_LIGHT;
			HAL_GPIO_WritePin(D3_GPIO_Port, D3_Pin, 1);
			HAL_GPIO_WritePin(D4_GPIO_Port, D4_Pin, 1);
			setTimer2(count_led_2*1000);

			LCD_display(mode);
			setTimer5(1000);
		}
		if(timer5_flag == 1)
		{
			count_led_2--;
			led2 = count_led_2;

			LCD_display(mode);
			setTimer5(1000);
		}
	}
}
