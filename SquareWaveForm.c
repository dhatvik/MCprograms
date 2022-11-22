#include<LPC214x.h>
void wait()
{
T0TCR=1;
while(T0TC!=T0MR0);
}
int main()
{
T0MR0 =0x1234;
T0MCR =0x10;
while(1)
{
IODIR0=0xFFFFFFFF;
IOPIN0=~IOPIN0;
wait();
}
}
