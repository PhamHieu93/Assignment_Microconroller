/*
 * led_controller.c
 *
 *  Created on: Oct 22, 2024
 *      Author: 84868
 */

#include "main.h"
#include "glo_vari.h"
#define ONE 1
#define TWO 2
#define THREE 3
#define FOUR 4

/*void display7SEG_val_2(int num){
	switch(num){
		case 0:
			HAL_GPIO_WritePin(GPIOA, a_val_2_Pin, 0);
			HAL_GPIO_WritePin(GPIOA, b_val_2_Pin, 0);
			HAL_GPIO_WritePin(GPIOA, c_val_2_Pin, 0);
			HAL_GPIO_WritePin(GPIOA, d_val_2_Pin, 0);
			HAL_GPIO_WritePin(GPIOA, e_val_2_Pin, 0);
			HAL_GPIO_WritePin(GPIOA, f_val_2_Pin, 0);
			HAL_GPIO_WritePin(GPIOA, g_val_2_Pin, 1);
			break;
		case 1:
			HAL_GPIO_WritePin(GPIOA, a_val_2_Pin, 1);
			HAL_GPIO_WritePin(GPIOA, b_val_2_Pin, 0);
			HAL_GPIO_WritePin(GPIOA, c_val_2_Pin, 0);
			HAL_GPIO_WritePin(GPIOA, d_val_2_Pin, 1);
			HAL_GPIO_WritePin(GPIOA, e_val_2_Pin, 1);
			HAL_GPIO_WritePin(GPIOA, f_val_2_Pin, 1);
			HAL_GPIO_WritePin(GPIOA, g_val_2_Pin, 1);
			break;
		case 2:
			HAL_GPIO_WritePin(GPIOA, a_val_2_Pin, 0);
			HAL_GPIO_WritePin(GPIOA, b_val_2_Pin, 0);
			HAL_GPIO_WritePin(GPIOA, c_val_2_Pin, 1);
			HAL_GPIO_WritePin(GPIOA, d_val_2_Pin, 0);
			HAL_GPIO_WritePin(GPIOA, e_val_2_Pin, 0);
			HAL_GPIO_WritePin(GPIOA, f_val_2_Pin, 1);
			HAL_GPIO_WritePin(GPIOA, g_val_2_Pin, 0);
			break;
		case 3:
			HAL_GPIO_WritePin(GPIOA, a_val_2_Pin, 0);
			HAL_GPIO_WritePin(GPIOA, b_val_2_Pin, 0);
			HAL_GPIO_WritePin(GPIOA, c_val_2_Pin, 0);
			HAL_GPIO_WritePin(GPIOA, d_val_2_Pin, 0);
			HAL_GPIO_WritePin(GPIOA, e_val_2_Pin, 1);
			HAL_GPIO_WritePin(GPIOA, f_val_2_Pin, 1);
			HAL_GPIO_WritePin(GPIOA, g_val_2_Pin, 0);
			break;
		case 4:
			HAL_GPIO_WritePin(GPIOA, a_val_2_Pin, 1);
			HAL_GPIO_WritePin(GPIOA, b_val_2_Pin, 0);
			HAL_GPIO_WritePin(GPIOA, c_val_2_Pin, 0);
			HAL_GPIO_WritePin(GPIOA, d_val_2_Pin, 1);
			HAL_GPIO_WritePin(GPIOA, e_val_2_Pin, 1);
			HAL_GPIO_WritePin(GPIOA, f_val_2_Pin, 0);
			HAL_GPIO_WritePin(GPIOA, g_val_2_Pin, 0);
			break;
		case 5:
			HAL_GPIO_WritePin(GPIOA, a_val_2_Pin, 0);
			HAL_GPIO_WritePin(GPIOA, b_val_2_Pin, 1);
			HAL_GPIO_WritePin(GPIOA, c_val_2_Pin, 0);
			HAL_GPIO_WritePin(GPIOA, d_val_2_Pin, 0);
			HAL_GPIO_WritePin(GPIOA, e_val_2_Pin, 1);
			HAL_GPIO_WritePin(GPIOA, f_val_2_Pin, 0);
			HAL_GPIO_WritePin(GPIOA, g_val_2_Pin, 0);
			break;
		case 6:
			HAL_GPIO_WritePin(GPIOA, a_val_2_Pin, 0);
			HAL_GPIO_WritePin(GPIOA, b_val_2_Pin, 1);
			HAL_GPIO_WritePin(GPIOA, c_val_2_Pin, 0);
			HAL_GPIO_WritePin(GPIOA, d_val_2_Pin, 0);
			HAL_GPIO_WritePin(GPIOA, e_val_2_Pin, 0);
			HAL_GPIO_WritePin(GPIOA, f_val_2_Pin, 0);
			HAL_GPIO_WritePin(GPIOA, g_val_2_Pin, 0);
			break;
		case 7:
			HAL_GPIO_WritePin(GPIOA, a_val_2_Pin, 0);
			HAL_GPIO_WritePin(GPIOA, b_val_2_Pin, 0);
			HAL_GPIO_WritePin(GPIOA, c_val_2_Pin, 0);
			HAL_GPIO_WritePin(GPIOA, d_val_2_Pin, 1);
			HAL_GPIO_WritePin(GPIOA, e_val_2_Pin, 1);
			HAL_GPIO_WritePin(GPIOA, f_val_2_Pin, 1);
			HAL_GPIO_WritePin(GPIOA, g_val_2_Pin, 1);
			break;
		case 8:
			HAL_GPIO_WritePin(GPIOA, a_val_2_Pin, 0);
			HAL_GPIO_WritePin(GPIOA, b_val_2_Pin, 0);
			HAL_GPIO_WritePin(GPIOA, c_val_2_Pin, 0);
			HAL_GPIO_WritePin(GPIOA, d_val_2_Pin, 0);
			HAL_GPIO_WritePin(GPIOA, e_val_2_Pin, 0);
			HAL_GPIO_WritePin(GPIOA, f_val_2_Pin, 0);
			HAL_GPIO_WritePin(GPIOA, g_val_2_Pin, 0);
			break;
		case 9:
			HAL_GPIO_WritePin(GPIOA, a_val_2_Pin, 0);
			HAL_GPIO_WritePin(GPIOA, b_val_2_Pin, 0);
			HAL_GPIO_WritePin(GPIOA, c_val_2_Pin, 0);
			HAL_GPIO_WritePin(GPIOA, d_val_2_Pin, 0);
			HAL_GPIO_WritePin(GPIOA, e_val_2_Pin, 1);
			HAL_GPIO_WritePin(GPIOA, f_val_2_Pin, 0);
			HAL_GPIO_WritePin(GPIOA, g_val_2_Pin, 0);
			break;
		default:
			break;
	}
}

void display7SEG_val_1(int num){
	switch(num){
		case 0:
			HAL_GPIO_WritePin(GPIOA, a_val_1_Pin, 0);
			HAL_GPIO_WritePin(GPIOA, b_val_1_Pin, 0);
			HAL_GPIO_WritePin(GPIOA, c_val_1_Pin, 0);
			HAL_GPIO_WritePin(GPIOA, d_val_1_Pin, 0);
			HAL_GPIO_WritePin(GPIOA, e_val_1_Pin, 0);
			HAL_GPIO_WritePin(GPIOA, f_val_1_Pin, 0);
			HAL_GPIO_WritePin(GPIOA, g_val_1_Pin, 1);
			break;
		case 1:
			HAL_GPIO_WritePin(GPIOA, a_val_1_Pin, 1);
			HAL_GPIO_WritePin(GPIOA, b_val_1_Pin, 0);
			HAL_GPIO_WritePin(GPIOA, c_val_1_Pin, 0);
			HAL_GPIO_WritePin(GPIOA, d_val_1_Pin, 1);
			HAL_GPIO_WritePin(GPIOA, e_val_1_Pin, 1);
			HAL_GPIO_WritePin(GPIOA, f_val_1_Pin, 1);
			HAL_GPIO_WritePin(GPIOA, g_val_1_Pin, 1);
			break;
		case 2:
			HAL_GPIO_WritePin(GPIOA, a_val_1_Pin, 0);
			HAL_GPIO_WritePin(GPIOA, b_val_1_Pin, 0);
			HAL_GPIO_WritePin(GPIOA, c_val_1_Pin, 1);
			HAL_GPIO_WritePin(GPIOA, d_val_1_Pin, 0);
			HAL_GPIO_WritePin(GPIOA, e_val_1_Pin, 0);
			HAL_GPIO_WritePin(GPIOA, f_val_1_Pin, 1);
			HAL_GPIO_WritePin(GPIOA, g_val_1_Pin, 0);
			break;
		case 3:
			HAL_GPIO_WritePin(GPIOA, a_val_1_Pin, 0);
			HAL_GPIO_WritePin(GPIOA, b_val_1_Pin, 0);
			HAL_GPIO_WritePin(GPIOA, c_val_1_Pin, 0);
			HAL_GPIO_WritePin(GPIOA, d_val_1_Pin, 0);
			HAL_GPIO_WritePin(GPIOA, e_val_1_Pin, 1);
			HAL_GPIO_WritePin(GPIOA, f_val_1_Pin, 1);
			HAL_GPIO_WritePin(GPIOA, g_val_1_Pin, 0);
			break;
		case 4:
			HAL_GPIO_WritePin(GPIOA, a_val_1_Pin, 1);
			HAL_GPIO_WritePin(GPIOA, b_val_1_Pin, 0);
			HAL_GPIO_WritePin(GPIOA, c_val_1_Pin, 0);
			HAL_GPIO_WritePin(GPIOA, d_val_1_Pin, 1);
			HAL_GPIO_WritePin(GPIOA, e_val_1_Pin, 1);
			HAL_GPIO_WritePin(GPIOA, f_val_1_Pin, 0);
			HAL_GPIO_WritePin(GPIOA, g_val_1_Pin, 0);
			break;
		case 5:
			HAL_GPIO_WritePin(GPIOA, a_val_1_Pin, 0);
			HAL_GPIO_WritePin(GPIOA, b_val_1_Pin, 1);
			HAL_GPIO_WritePin(GPIOA, c_val_1_Pin, 0);
			HAL_GPIO_WritePin(GPIOA, d_val_1_Pin, 0);
			HAL_GPIO_WritePin(GPIOA, e_val_1_Pin, 1);
			HAL_GPIO_WritePin(GPIOA, f_val_1_Pin, 0);
			HAL_GPIO_WritePin(GPIOA, g_val_1_Pin, 0);
			break;
		case 6:
			HAL_GPIO_WritePin(GPIOA, a_val_1_Pin, 0);
			HAL_GPIO_WritePin(GPIOA, b_val_1_Pin, 1);
			HAL_GPIO_WritePin(GPIOA, c_val_1_Pin, 0);
			HAL_GPIO_WritePin(GPIOA, d_val_1_Pin, 0);
			HAL_GPIO_WritePin(GPIOA, e_val_1_Pin, 0);
			HAL_GPIO_WritePin(GPIOA, f_val_1_Pin, 0);
			HAL_GPIO_WritePin(GPIOA, g_val_1_Pin, 0);
			break;
		case 7:
			HAL_GPIO_WritePin(GPIOA, a_val_1_Pin, 0);
			HAL_GPIO_WritePin(GPIOA, b_val_1_Pin, 0);
			HAL_GPIO_WritePin(GPIOA, c_val_1_Pin, 0);
			HAL_GPIO_WritePin(GPIOA, d_val_1_Pin, 1);
			HAL_GPIO_WritePin(GPIOA, e_val_1_Pin, 1);
			HAL_GPIO_WritePin(GPIOA, f_val_1_Pin, 1);
			HAL_GPIO_WritePin(GPIOA, g_val_1_Pin, 1);
			break;
		case 8:
			HAL_GPIO_WritePin(GPIOA, a_val_1_Pin, 0);
			HAL_GPIO_WritePin(GPIOA, b_val_1_Pin, 0);
			HAL_GPIO_WritePin(GPIOA, c_val_1_Pin, 0);
			HAL_GPIO_WritePin(GPIOA, d_val_1_Pin, 0);
			HAL_GPIO_WritePin(GPIOA, e_val_1_Pin, 0);
			HAL_GPIO_WritePin(GPIOA, f_val_1_Pin, 0);
			HAL_GPIO_WritePin(GPIOA, g_val_1_Pin, 0);
			break;
		case 9:
			HAL_GPIO_WritePin(GPIOA, a_val_1_Pin, 0);
			HAL_GPIO_WritePin(GPIOA, b_val_1_Pin, 0);
			HAL_GPIO_WritePin(GPIOA, c_val_1_Pin, 0);
			HAL_GPIO_WritePin(GPIOA, d_val_1_Pin, 0);
			HAL_GPIO_WritePin(GPIOA, e_val_1_Pin, 1);
			HAL_GPIO_WritePin(GPIOA, f_val_1_Pin, 0);
			HAL_GPIO_WritePin(GPIOA, g_val_1_Pin, 0);
			break;
		default:
			break;
	}
}

void display7SEG_mode(int num){
	switch(num){
		case 0:
			HAL_GPIO_WritePin(GPIOB, a_mode_Pin, 0);
			HAL_GPIO_WritePin(GPIOB, b_mode_Pin, 0);
			HAL_GPIO_WritePin(GPIOB, c_mode_Pin, 0);
			HAL_GPIO_WritePin(GPIOB, d_mode_Pin, 0);
			HAL_GPIO_WritePin(GPIOB, e_mode_Pin, 0);
			HAL_GPIO_WritePin(GPIOB, f_mode_Pin, 0);
			HAL_GPIO_WritePin(GPIOB, g_mode_Pin, 1);
			break;
		case 1:
			HAL_GPIO_WritePin(GPIOB, a_mode_Pin, 1);
			HAL_GPIO_WritePin(GPIOB, b_mode_Pin, 0);
			HAL_GPIO_WritePin(GPIOB, c_mode_Pin, 0);
			HAL_GPIO_WritePin(GPIOB, d_mode_Pin, 1);
			HAL_GPIO_WritePin(GPIOB, e_mode_Pin, 1);
			HAL_GPIO_WritePin(GPIOB, f_mode_Pin, 1);
			HAL_GPIO_WritePin(GPIOB, g_mode_Pin, 1);
			break;
		case 2:
			HAL_GPIO_WritePin(GPIOB, a_mode_Pin, 0);
			HAL_GPIO_WritePin(GPIOB, b_mode_Pin, 0);
			HAL_GPIO_WritePin(GPIOB, c_mode_Pin, 1);
			HAL_GPIO_WritePin(GPIOB, d_mode_Pin, 0);
			HAL_GPIO_WritePin(GPIOB, e_mode_Pin, 0);
			HAL_GPIO_WritePin(GPIOB, f_mode_Pin, 1);
			HAL_GPIO_WritePin(GPIOB, g_mode_Pin, 0);
			break;
		case 3:
			HAL_GPIO_WritePin(GPIOB, a_mode_Pin, 0);
			HAL_GPIO_WritePin(GPIOB, b_mode_Pin, 0);
			HAL_GPIO_WritePin(GPIOB, c_mode_Pin, 0);
			HAL_GPIO_WritePin(GPIOB, d_mode_Pin, 0);
			HAL_GPIO_WritePin(GPIOB, e_mode_Pin, 1);
			HAL_GPIO_WritePin(GPIOB, f_mode_Pin, 1);
			HAL_GPIO_WritePin(GPIOB, g_mode_Pin, 0);
			break;
		case 4:
			HAL_GPIO_WritePin(GPIOB, a_mode_Pin, 1);
			HAL_GPIO_WritePin(GPIOB, b_mode_Pin, 0);
			HAL_GPIO_WritePin(GPIOB, c_mode_Pin, 0);
			HAL_GPIO_WritePin(GPIOB, d_mode_Pin, 1);
			HAL_GPIO_WritePin(GPIOB, e_mode_Pin, 1);
			HAL_GPIO_WritePin(GPIOB, f_mode_Pin, 0);
			HAL_GPIO_WritePin(GPIOB, g_mode_Pin, 0);
			break;
		case 5:
			HAL_GPIO_WritePin(GPIOB, a_mode_Pin, 0);
			HAL_GPIO_WritePin(GPIOB, b_mode_Pin, 1);
			HAL_GPIO_WritePin(GPIOB, c_mode_Pin, 0);
			HAL_GPIO_WritePin(GPIOB, d_mode_Pin, 0);
			HAL_GPIO_WritePin(GPIOB, e_mode_Pin, 1);
			HAL_GPIO_WritePin(GPIOB, f_mode_Pin, 0);
			HAL_GPIO_WritePin(GPIOB, g_mode_Pin, 0);
			break;
		case 6:
			HAL_GPIO_WritePin(GPIOB, a_mode_Pin, 0);
			HAL_GPIO_WritePin(GPIOB, b_mode_Pin, 1);
			HAL_GPIO_WritePin(GPIOB, c_mode_Pin, 0);
			HAL_GPIO_WritePin(GPIOB, d_mode_Pin, 0);
			HAL_GPIO_WritePin(GPIOB, e_mode_Pin, 0);
			HAL_GPIO_WritePin(GPIOB, f_mode_Pin, 0);
			HAL_GPIO_WritePin(GPIOB, g_mode_Pin, 0);
			break;
		case 7:
			HAL_GPIO_WritePin(GPIOB, a_mode_Pin, 0);
			HAL_GPIO_WritePin(GPIOB, b_mode_Pin, 0);
			HAL_GPIO_WritePin(GPIOB, c_mode_Pin, 0);
			HAL_GPIO_WritePin(GPIOB, d_mode_Pin, 1);
			HAL_GPIO_WritePin(GPIOB, e_mode_Pin, 1);
			HAL_GPIO_WritePin(GPIOB, f_mode_Pin, 1);
			HAL_GPIO_WritePin(GPIOB, g_mode_Pin, 1);
			break;
		case 8:
			HAL_GPIO_WritePin(GPIOB, a_mode_Pin, 0);
			HAL_GPIO_WritePin(GPIOB, b_mode_Pin, 0);
			HAL_GPIO_WritePin(GPIOB, c_mode_Pin, 0);
			HAL_GPIO_WritePin(GPIOB, d_mode_Pin, 0);
			HAL_GPIO_WritePin(GPIOB, e_mode_Pin, 0);
			HAL_GPIO_WritePin(GPIOB, f_mode_Pin, 0);
			HAL_GPIO_WritePin(GPIOB, g_mode_Pin, 0);
			break;
		case 9:
			HAL_GPIO_WritePin(GPIOB, a_mode_Pin, 0);
			HAL_GPIO_WritePin(GPIOB, b_mode_Pin, 0);
			HAL_GPIO_WritePin(GPIOB, c_mode_Pin, 0);
			HAL_GPIO_WritePin(GPIOB, d_mode_Pin, 0);
			HAL_GPIO_WritePin(GPIOB, e_mode_Pin, 1);
			HAL_GPIO_WritePin(GPIOB, f_mode_Pin, 0);
			HAL_GPIO_WritePin(GPIOB, g_mode_Pin, 0);
			break;
		default:
			break;
	}
}*/

void clear_all_led(){
	HAL_GPIO_WritePin(D3_GPIO_Port, D3_Pin, 0);
	HAL_GPIO_WritePin(D4_GPIO_Port, D4_Pin, 0);
	HAL_GPIO_WritePin(D5_GPIO_Port, D5_Pin, 0);
	HAL_GPIO_WritePin(D6_GPIO_Port, D6_Pin, 0);
}
void turn_all_led()
{
	HAL_GPIO_WritePin(D3_GPIO_Port, D3_Pin, 1);
	HAL_GPIO_WritePin(D4_GPIO_Port, D4_Pin, 1);
	HAL_GPIO_WritePin(D5_GPIO_Port, D5_Pin, 1);
	HAL_GPIO_WritePin(D6_GPIO_Port, D6_Pin, 1);
}
/*void clear_all_7SEG_1(){
	HAL_GPIO_WritePin(GPIOA, a_val_1_Pin, 0);
	HAL_GPIO_WritePin(GPIOA, b_val_1_Pin, 0);
	HAL_GPIO_WritePin(GPIOA, c_val_1_Pin, 0);
	HAL_GPIO_WritePin(GPIOA, d_val_1_Pin, 0);
	HAL_GPIO_WritePin(GPIOA, e_val_1_Pin, 0);
	HAL_GPIO_WritePin(GPIOA, f_val_1_Pin, 0);
	HAL_GPIO_WritePin(GPIOA, g_val_1_Pin, 1);
	HAL_GPIO_WritePin(GPIOA, a_val_2_Pin, 0);
	HAL_GPIO_WritePin(GPIOA, b_val_2_Pin, 0);
	HAL_GPIO_WritePin(GPIOA, c_val_2_Pin, 0);
	HAL_GPIO_WritePin(GPIOA, d_val_2_Pin, 0);
	HAL_GPIO_WritePin(GPIOA, e_val_2_Pin, 0);
	HAL_GPIO_WritePin(GPIOA, f_val_2_Pin, 0);
	HAL_GPIO_WritePin(GPIOA, g_val_2_Pin, 1);
}

void clear_all_7SEG_mode(){
	HAL_GPIO_WritePin(GPIOB, a_mode_Pin, 0);
	HAL_GPIO_WritePin(GPIOB, b_mode_Pin, 0);
	HAL_GPIO_WritePin(GPIOB, c_mode_Pin, 0);
	HAL_GPIO_WritePin(GPIOB, d_mode_Pin, 0);
	HAL_GPIO_WritePin(GPIOB, e_mode_Pin, 0);
	HAL_GPIO_WritePin(GPIOB, f_mode_Pin, 0);
	HAL_GPIO_WritePin(GPIOB, g_mode_Pin, 1);
}*/
/*void updateValLed_1(int time_1)
{
	led_buffer[0] = time_1 / 10;
	led_buffer[1] = time_1 % 10;
}
void updateValLed_2(int time_2)
{
	led_buffer[2] = time_2 / 10;
	led_buffer[3] = time_2 % 10;
}*/
/*void update7SEG(int index_led)
{
	switch (index_led){
		case 0:
			  HAL_GPIO_WritePin(GPIOB, EN0_Pin, 0);
			  HAL_GPIO_WritePin(GPIOB, EN1_Pin, 0);
			  HAL_GPIO_WritePin(GPIOB, EN2_Pin, 1);
			  HAL_GPIO_WritePin(GPIOA, EN3_Pin, 0);
			  display7SEG_val_1(led_buffer[0]);
		// Display the first 7 SEG with led_buffer [0]
		break ;
		case 1:
			  HAL_GPIO_WritePin(GPIOB, EN0_Pin, 0);
			  HAL_GPIO_WritePin(GPIOB, EN1_Pin, 0);
			  HAL_GPIO_WritePin(GPIOB, EN2_Pin, 1);
			  HAL_GPIO_WritePin(GPIOA, EN3_Pin, 0);
			  display7SEG_val_2(led_buffer[1]);
		// Display the second 7 SEG with led_buffer [1]
		break ;
		case 2:
			  HAL_GPIO_WritePin(GPIOB, EN0_Pin, 0);
			  HAL_GPIO_WritePin(GPIOB, EN1_Pin, 0);
			  HAL_GPIO_WritePin(GPIOB, EN2_Pin, 0);
			  HAL_GPIO_WritePin(GPIOA, EN3_Pin, 1);
			  display7SEG_mode(led_buffer[2]);
			  seg2_status = 1;

		// Display the third 7 SEG with led_buffer [2]
		break ;
		case 3:
			  HAL_GPIO_WritePin(GPIOB, EN0_Pin, 0);
			  HAL_GPIO_WritePin(GPIOB, EN1_Pin, 0);
			  HAL_GPIO_WritePin(GPIOB, EN2_Pin, 1);
			  HAL_GPIO_WritePin(GPIOA, EN3_Pin, 0);
			  display7SEG_mode(led_buffer[3]);
			  seg3_status = 1;
		// Display the forth 7 SEG with led_buffer [3]
		break ;
		default :
		break ;
		}
}*/
void changeState(int num)
{
	switch(num){
	case CLEAR:
		clear_all_led();
	break;
	case RED_BLINK:
		HAL_GPIO_TogglePin(D3_GPIO_Port, D3_Pin);
		HAL_GPIO_TogglePin(D4_GPIO_Port, D4_Pin);
		HAL_GPIO_TogglePin(D5_GPIO_Port, D5_Pin);
		HAL_GPIO_TogglePin(D6_GPIO_Port, D6_Pin);

	break;
	case GREEN_BLINK:
		HAL_GPIO_TogglePin(D3_GPIO_Port, D3_Pin);
		HAL_GPIO_WritePin(D4_GPIO_Port, D4_Pin, 0);
		HAL_GPIO_TogglePin(D5_GPIO_Port, D5_Pin);
		HAL_GPIO_WritePin(D6_GPIO_Port, D6_Pin, 0);
	break;
	case YELLOW_BLINK:
		HAL_GPIO_WritePin(D3_GPIO_Port, D3_Pin, 0);
		HAL_GPIO_TogglePin(D4_GPIO_Port, D4_Pin);
		HAL_GPIO_WritePin(D5_GPIO_Port, D5_Pin, 0);
		HAL_GPIO_TogglePin(D6_GPIO_Port, D6_Pin);
	break;
	default:
		break;
	}
}
void changeBlink()
{
	switch(current_mode)
	{
	case CLEAR:
		current_mode = RED_BLINK;
		mode = 2;
	break;
	case RED_BLINK:
		current_mode = YELLOW_BLINK;
		mode = 3;
	break;
	case YELLOW_BLINK:
		current_mode = GREEN_BLINK;
		mode = 4;
	break;
	case GREEN_BLINK:
		current_mode = RED_BLINK;
		mode = 2;
	break;
	default:
	break;
	}
}
void addTime()
{
	switch(current_mode)
	{
	case RED_BLINK:
		red_add = red_add + increased_val;
		//increased_val = 0;
	break;
	case YELLOW_BLINK:
		yellow_add = yellow_add + increased_val;
		//increased_val = 0;
	break;
	case GREEN_BLINK:
		green_add = green_add + increased_val;
		//increased_val = 0;
	break;
	default:
	break;
	}
}

void LCD_display() {
	char dataframe1[50];
	char dataframe2[50];
	switch (mode) {
		case 0:
		lcd_clear_display();

		sprintf(dataframe2,"Mode: 1");
		lcd_goto_XY(0,0);
		lcd_send_string(dataframe2);

		break;
		case 1:
			lcd_clear_display();

			sprintf(dataframe1,"Road 1 %s:%d",str1, led1);
			lcd_goto_XY(1,0);
			lcd_send_string(dataframe1);

			sprintf(dataframe2,"Road 2 %s:%d",str2, led2);
			lcd_goto_XY(0,0);
			lcd_send_string(dataframe2);
			break;
		case 2 :
			lcd_clear_display();

			sprintf(dataframe1,"Red Time:%d",increased_val);
			lcd_goto_XY(1,0);
			lcd_send_string(dataframe1);

			sprintf(dataframe2,"Mode: %d",mode);
			lcd_goto_XY(0,0);
			lcd_send_string(dataframe2);
			break;
		case 3:
			lcd_clear_display();

			sprintf(dataframe1,"Green Time:%d",increased_val);
			lcd_goto_XY(1,0);
			lcd_send_string(dataframe1);

			sprintf(dataframe2,"Mode: %d",mode);
			lcd_goto_XY(0,0);
			lcd_send_string(dataframe2);
			break;
		case 4:
			lcd_clear_display();

			sprintf(dataframe1,"Yellow Time:%d",increased_val);
			lcd_goto_XY(1,0);
			lcd_send_string(dataframe1);

			sprintf(dataframe2,"Mode: %d",mode);
			lcd_goto_XY(0,0);
			lcd_send_string(dataframe2);
			break;
		default:
			break;
	}
}
