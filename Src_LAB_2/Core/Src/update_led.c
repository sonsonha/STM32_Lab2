/*
 * update_led.c
 *
 *  Created on: Nov 2, 2023
 *      Author: sonha
 */
#include "update_led.h"
#include "main.h"

	void display7SEG ( int num) {
			switch (num) {
				case 0:
							HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
							HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
							HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
							HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);
							HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, RESET);
							HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, RESET);
							HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, SET);
							break;
						case 1:
							HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, SET);
							HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
							HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
							HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, SET);
							HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, SET);
							HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, SET);
							HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, SET);
							break;
						case 2:
							HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
							HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
							HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, SET);
							HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);
							HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, RESET);
							HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, SET);
							HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);
							break;
						case 3:
							HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
							HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
							HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
							HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);
							HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, SET);
							HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, SET);
							HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);
							break;
						case 4:
							HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, SET);
							HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
							HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
							HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, SET);
							HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, SET);
							HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, RESET);
							HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);
							break;
						case 5:
							HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
							HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, SET);
							HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
							HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);
							HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, SET);
							HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, RESET);
							HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);
							break;
						case 6:
							HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
							HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, SET);
							HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
							HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);
							HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, RESET);
							HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, RESET);
							HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);
							break;
						case 7:
							HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
							HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
							HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
							HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, SET);
							HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, SET);
							HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, SET);
							HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, SET);
							break;
						case 8:
							HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
							HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
							HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
							HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);
							HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, RESET);
							HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, RESET);
							HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);
							break;
						case 9:
							HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
							HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
							HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
							HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);
							HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, SET);
							HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, RESET);
							HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);
							break;
			}
		}

	void clearAll_matrix () {
		HAL_GPIO_WritePin(ENM0_GPIO_Port, ENM0_Pin, SET);
		HAL_GPIO_WritePin(ENM1_GPIO_Port, ENM1_Pin, SET);
		HAL_GPIO_WritePin(ENM2_GPIO_Port, ENM2_Pin, SET);
		HAL_GPIO_WritePin(ENM3_GPIO_Port, ENM3_Pin, SET);
		HAL_GPIO_WritePin(ENM4_GPIO_Port, ENM4_Pin, SET);
		HAL_GPIO_WritePin(ENM5_GPIO_Port, ENM5_Pin, SET);
		HAL_GPIO_WritePin(ENM6_GPIO_Port, ENM6_Pin, SET);
		HAL_GPIO_WritePin(ENM7_GPIO_Port, ENM7_Pin, SET);
	}

	void clearALL_7SEG() {
		HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, SET);
		HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, SET);
		HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, SET);
		HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, SET);
	}


