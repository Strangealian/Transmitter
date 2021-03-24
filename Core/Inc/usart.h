/**
  ******************************************************************************
  * @file    usart.h
  * @brief   This file contains all the function prototypes for
  *          the usart.c file
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2021 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */
/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __USART_H__
#define __USART_H__

#ifdef __cplusplus
extern "C"
{
#endif

/* Includes ------------------------------------------------------------------*/
#include "main.h"
#include "stdio.h"
/* USER CODE BEGIN Includes */
#define RX_LEN 1024

  typedef struct
  {
    uint8_t RX_flag : 1;      //IDLE receive flag
    uint16_t RX_Size;         //receive length
    uint8_t RX_pData[RX_LEN]; //DMA receive buffer
  } USART_RECEIVETYPE;
  /* USER CODE END Includes */
  extern USART_RECEIVETYPE UsartType;
  extern UART_HandleTypeDef huart1;

  /* USER CODE BEGIN Private defines */

  /* USER CODE END Private defines */

  void MX_USART1_UART_Init(void);

  /* USER CODE BEGIN Prototypes */
  void Usart1SendData_DMA(uint8_t *pdata, uint16_t Length);
  /* USER CODE END Prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __USART_H__ */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
