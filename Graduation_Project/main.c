// All the preprocessor Libaries and Macros
#define  F_CPU 16000000
#include <util/delay.h>

#include "LED.h"

#include "Timer.h"

extern Uint8 x;
extern Uint8 y;
extern Uint8 z;


int main(void)
{	

    
	LED0_Init();
	LED1_Init();
	LED2_Init();
	
	Timer0_Init();
	Timer0_Start();
	Timer0_SetDelay(1);
		
	while (1)
	
	{		
		
		if(x==1)
		{
			LED0_Toggle();
			x=0;
		}
		if(y==1)
		{
			LED1_Toggle();
			y=0;
		}
		if(z==1)
		{
			LED2_Toggle();
			z=0;
		}
	}
}
