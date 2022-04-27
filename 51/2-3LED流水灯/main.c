#include <REGX52.H>
#include <INTRINS.H>

void Delay500us()		//@11.0592MHz
{
	unsigned char i, j;

	_nop_();
	_nop_();
	i = 6;
	j = 93;
	do
	{
		while (--j);
	} while (--i);
}


void main(){
	while(1){
		P2 = 0xFE;
		Delay500us();
	}
}