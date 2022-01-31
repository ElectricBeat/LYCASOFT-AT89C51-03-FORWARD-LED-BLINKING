#include<reg51.h>
void delay()
{
	int i,j;
	for(i=0;i<10;i++)
		for(j=0;j<1000;j++);
	
}

int K = 0X01;
void main()
{
	while(1)
	{
		P2 = K;
		delay();
		K = K<<1;
		
		if(K>0x80)
		{
			K = 0x01;
		}
	}
}