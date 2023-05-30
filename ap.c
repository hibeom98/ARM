/*
 * ap.c
 *
 *  Created on: May 26, 2023
 *      Author: yoon
 */


#include "ap.h"

typedef struct
{

};

void apInit(void)
{
  GPIO_InitTypeDef GPIO_InitStruct = {0};

  /* GPIO Ports Clock Enable */
  __HAL_RCC_GPIOH_CLK_ENABLE();
  __HAL_RCC_GPIOA_CLK_ENABLE();

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_5, GPIO_PIN_SET);


  /*Configure GPIO pin : PA5 */
  GPIO_InitStruct.Pin = GPIO_PIN_5;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_HIGH;
  HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);
}

void apMain(void)
{

  while(1)
   {
    if (HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_13))
       {
       ledOn(_DEF_LED1);
       ledOn(_DEF_LED2);
       ledOn(_DEF_LED3);
       ledOn(_DEF_LED4);
       ledOn(_DEF_LED5);
       ledOn(_DEF_LED6);
       ledOn(_DEF_LED7);
       ledOn(_DEF_LED8);
       }
    else
    {
      ledoff(_DEF_LED1);
      ledoff(_DEF_LED2);
      ledoff(_DEF_LED3);
      ledoff(_DEF_LED4);
      ledoff(_DEF_LED5);
      ledOff(_DEF_LED6);
      ledOff(_DEF_LED7);
      ledOff(_DEF_LED8);
    }
   }


}
