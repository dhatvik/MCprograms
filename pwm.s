#include<lpc214x.h>

void PWM_init() {
	PINSEL0 = 0x000A800A;
	PINSEL1 = 0x00000400;
	PWMPR = 0x2;
	PWMPCR = 0x00007E00;
	PWMMR0 = 0x3E8;
	PWMTCR = 0x9;
	PWMMCR = 0x2;
	}

int main(){
	PWM_init();
	while(1){
		PWMMR1 = 0x64;
		PWMMR2 = 0xc8;
		PWMMR3 = 0x12c;
		PWMMR4 = 0x190;
		PWMMR5 = 0x1f4;
		PWMMR6 = 0x2bc;
		PWMLER = 0x7f;
	}
	}
