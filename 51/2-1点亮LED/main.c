#include <REGX52.H>
#include <INTRINS.h>

void Delay500us()		//@12.000MHz
{
	unsigned char i;

	_nop_();
	i = 247;
	while (--i);
}


void mian(){
	
	Delay500us();
	P2=0xFE;
}