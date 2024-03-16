#include "usermain.h"
#include "retarget.h"

#include "stdio.h"
#include "main.h"
#include "eth.h"
#include "tim.h"
#include "usart.h"
#include "usb_otg.h"
#include "gpio.h"

void usermain(void)
{
//	RCC -> GCR |= 1<<3;
//
//	HAL_TIM_Base_Start_it(&htim6);
	//RetargetInit();

//	printf("Hello NUCLE-H755ZI-Q\r\n");
//	FLASH_OBProgramInitTypeDeg optionBytes;
//	HAL_FLASHEx_OBGetConfig(&optionBytes);
//	printf("Booting address of CM7 = %0BlX");
//
	 while (1) {
		 printf("hello\r\n");
		 HAL_GPIO_TogglePin(LD3_GPIO_Port, LD3_Pin);
		 HAL_Delay(500);
	 }


}


