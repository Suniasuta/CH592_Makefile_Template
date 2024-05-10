#include "CH59x_common.h"

int main(void){
	//basic internal led blink example
	SetSysClock(CLK_SOURCE_PLL_60MHz);
	GPIOA_ModeCfg(GPIO_Pin_8, GPIO_ModeOut_PP_20mA);
	while (1) {
		GPIOA_InverseBits(GPIO_Pin_8);
		DelayMs(1000);
	}
}
