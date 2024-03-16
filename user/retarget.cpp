#include "retarget.h"


// UART handler
extern UART_HandleTypeDef huart3;

//void RetargetInit() {
//  // Initialize UART
//  HAL_UART_MspInit(&huart2);
//  HAL_UART_Init(&huart2);
//}

//int _write(int file, char *ptr, int len) {
//  HAL_UART_Transmit(&huart2, (uint8_t *)ptr, len, HAL_MAX_DELAY);
//  return len;
//}
//
//int _read(int file, char *ptr, int len) {
//  HAL_UART_Receive(&huart2, (uint8_t *)ptr, 1, HAL_MAX_DELAY);
//  return 1;
//}
//


int __io_putchar(int ch)
{
	HAL_UART_Transmit(&huart3, (uint8_t *)&ch, 1, 0xFFFF);
	return ch;
}
