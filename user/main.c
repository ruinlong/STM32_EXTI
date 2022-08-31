#include <stm32f10x.h>
#include "EXIT_Config.h"
#include "bsp_RccClkConfig.h"



void LED_Config(void)
{
		GPIO_InitTypeDef GPIO_InitStruture;
		RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA,ENABLE);
	
		GPIO_InitStruture.GPIO_Pin = GPIO_Pin_8;
		GPIO_InitStruture.GPIO_Mode = GPIO_Mode_Out_PP;
		GPIO_InitStruture.GPIO_Speed = GPIO_Speed_50MHz;
		GPIO_Init(GPIOA,&GPIO_InitStruture);
}




int main()
{		
		Key0_Exit_Config();
		Key1_Exit_Config();
		LED_Config();
	while(1)
	{						


	}
}




