#include "EXIT_Config.h"





void Key0_Exit_Config(void)
{
		EXTI_InitTypeDef EXTI_InitStruct;
		GPIO_InitTypeDef GPIO_InitStruture;
		NVIC_InitTypeDef NVIC_InitStruct;
	
		RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOC,ENABLE);
		RCC_APB2PeriphClockCmd(RCC_APB2Periph_AFIO,ENABLE);
	
		GPIO_InitStruture.GPIO_Pin = GPIO_Pin_5;
		GPIO_InitStruture.GPIO_Mode = GPIO_Mode_IPU;
		GPIO_Init(GPIOC,&GPIO_InitStruture);	

		GPIO_EXTILineConfig(GPIO_PortSourceGPIOC,GPIO_PinSource5);
	
		EXTI_InitStruct.EXTI_Line = EXTI_Line5;
		EXTI_InitStruct.EXTI_Trigger = EXTI_Trigger_Rising;
		EXTI_InitStruct.EXTI_Mode = EXTI_Mode_Interrupt;
		EXTI_InitStruct.EXTI_LineCmd = ENABLE;
		EXTI_Init(&EXTI_InitStruct);
	
		NVIC_PriorityGroupConfig(NVIC_PriorityGroup_0);
		NVIC_InitStruct.NVIC_IRQChannel = EXTI9_5_IRQn;
		NVIC_InitStruct.NVIC_IRQChannelPreemptionPriority = 0;
		NVIC_InitStruct.NVIC_IRQChannelSubPriority = 0;
		NVIC_InitStruct.NVIC_IRQChannelCmd = ENABLE;
		NVIC_Init(&NVIC_InitStruct);
}


void Key1_Exit_Config(void)
{
		EXTI_InitTypeDef EXTI_InitStruct;
		GPIO_InitTypeDef GPIO_InitStruture;
		NVIC_InitTypeDef NVIC_InitStruct;
	
		RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA,ENABLE);
		RCC_APB2PeriphClockCmd(RCC_APB2Periph_AFIO,ENABLE);
		GPIO_InitStruture.GPIO_Pin = GPIO_Pin_15;
		GPIO_InitStruture.GPIO_Mode = GPIO_Mode_IPU;
		GPIO_Init(GPIOA,&GPIO_InitStruture);	

		GPIO_EXTILineConfig(GPIO_PortSourceGPIOA,GPIO_PinSource15);
	
		EXTI_InitStruct.EXTI_Line = EXTI_Line15;
		EXTI_InitStruct.EXTI_Trigger = EXTI_Trigger_Rising;
		EXTI_InitStruct.EXTI_Mode = EXTI_Mode_Interrupt;
		EXTI_InitStruct.EXTI_LineCmd = ENABLE;
		EXTI_Init(&EXTI_InitStruct);
	
		NVIC_PriorityGroupConfig(NVIC_PriorityGroup_0);
		NVIC_InitStruct.NVIC_IRQChannel = EXTI15_10_IRQn;
		NVIC_InitStruct.NVIC_IRQChannelPreemptionPriority = 0;
		NVIC_InitStruct.NVIC_IRQChannelSubPriority = 0;
		NVIC_InitStruct.NVIC_IRQChannelCmd = ENABLE;
		NVIC_Init(&NVIC_InitStruct);
}



