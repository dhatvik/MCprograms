#include<lpc214x.h>
void init() {
	PINSEL0 = 0x05;		//0101
	U0FCR = 0x07;		//clear rx,tx and enable
	U0LCR = 0x83;		//DLAB enable, 11(LS bit) - charcter lenght
	U0DLL = 0x5D;		//to set baud rate 
	U0DLM = 0x00;		// - " -
	U0LCR = 0x03;		// make ms bit zero again for normal functioning
	}
	
void delay(){
	int i;
	for(i = 0; i < 1500; i++);
	}
	
int main(){
	unsigned char p[] = "I LOVE EMBEDDED SYSTEMS\n";
	int z;
	init();
	for(z=0;z<24;z++) {		//24 - number of characters
		U0THR = p[z];		//tranmit holding register
		while(!(U0LSR & 0x20));	//line status register bit 5 = 1, txd empty
		delay();
		}
		//while(1);
		}
