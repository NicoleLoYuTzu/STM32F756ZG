#ifndef RETARGET_H
#define RETARGET_H

#include <stdio.h>
#include "usart.h"

#ifdef __cplusplus
extern "C" {
#endif

//void RetargetInit();
//int _write(int file, char *ptr, int len);
//int _read(int file, char *ptr, int len);
int __io_putchar(int ch);

#ifdef __cplusplus
}
#endif

#endif /* RETARGET_H */
