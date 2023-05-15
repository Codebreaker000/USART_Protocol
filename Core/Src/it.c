/*
 * it.c
 *
 *  Created on: May 9, 2023
 *      Author: Devil Eye
 */


void SysTick_Handler (void)
{
	HAL_IncTick();
	HAL_SYSTICK_IRQHandler();

}
