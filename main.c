/*
 * main.c
 *
 *  Created on: May 26, 2023
 *      Author: yoon
 */

#include "main.h"

int main(void)
{
  hwInit();
  apInit();

  apMain();

  return 0;
}
