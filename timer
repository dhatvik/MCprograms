#include<lpc214x.h>

void delay(int n)
{
 int i;
for(int i=0;i<n;i++);
}

int main()
{
	IODIR0=0X1;
while(1)
{
IOSET0=0X1;
delay(500);
IOCLR0=0X1;
delay(500);
}
}

