/*
 * button.c
 *
 *  Created on: Oct 24, 2024
 *      Author: 84868
 */
#include "glo_vari.h"
int isBut1press()
{
	if(button_flag1)
	{
		return 1;
	}
	return 0;
}
int isBut2press()
{
	if(button_flag2)
	{
		//button_flag2 = 0;
		return 1;
	}
	return 0;
}
int isBut3press()
{
	if(button_flag3)
	{
		return 1;
	}
	return 0;
}
void readButton_1()
{
	 button_read1[0] = button_read1[1];
	 button_read1[1] = button_read1[2];
	 button_read1[2] = button_read1[3];
	 button_read1[3] = HAL_GPIO_ReadPin(BUTTON_1_GPIO_Port, BUTTON_1_Pin);
	 if(button_read1[0] == button_read1[1] && button_read1[1] == button_read1[2] && button_read1[2] == button_read1[3])
	 {
		if(button_read1[3] == 0 && button_flag1 == 0)
		{
			changeBlink();
			LCD_display(mode);
			button_flag1 = 1;
			increased_val = 0;
			But1haspress = 1;
		}
		else if(button_read1[3] == 1 && button_flag1 == 1)
		{
			button_flag1 = 0;
		}
	}
}

void readButton_2()
{
	 button_read2[0] = button_read2[1];
	 button_read2[1] = button_read2[2];
	 button_read2[2] = button_read2[3];
	 button_read2[3] = HAL_GPIO_ReadPin(BUTTON_2_GPIO_Port, BUTTON_2_Pin);
	 if(button_read2[0] == button_read2[1] && button_read2[1] == button_read2[2] && button_read2[2] == button_read2[3])
	 {
		if(button_read2[3] == 0 && button_flag2 == 0 && But1haspress == 1) //first time push
		{
			count_press++;
			increased_val++;
			if(increased_val == 99) increased_val = 0;

			LCD_display(mode);
			button_flag2 = 1;
			//updateValLed_1(increased_val);
			But1haspress = 1;
		}
		if(button_read2[3] == 0 && button_flag2 == 1) //second time push
		{
			count_press++;
			if(count_press >= 150)
			{
				increased_val++;
				if(increased_val == 99) increased_val = 0;
				count_press = 0;
			}
		}
		else if(button_read2[3] == 1 && button_flag2 == 1)
		{
			button_flag2 = 0;
			count_press = 0;
		}
	}
}

void readButton_3()
{
	 button_read3[0] = button_read3[1];
	 button_read3[1] = button_read3[2];
	 button_read3[2] = button_read3[3];
	 button_read3[3] = HAL_GPIO_ReadPin(BUTTON_3_GPIO_Port, BUTTON_3_Pin);
	 if(button_read3[0] == button_read3[1] && button_read3[1] == button_read3[2] && button_read3[2] == button_read3[3])
	 {
		if(button_read3[3] == 0 && button_flag3 == 0 && But1haspress == 1)
		{
			button_flag3 = 1;
			//mode = 0;
			addTime();
		}
		else if(button_read3[3] == 1 && button_flag3 == 1)
		{
			button_flag3 = 0;
			increased_val = 0;
			led_current_1 = INIT;
			led_current_2 = INIT;
			But1haspress = 0;
		}
	}
}
