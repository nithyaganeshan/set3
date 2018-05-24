include <stdio.h>
#include<conioh>
int main(void)
{
	float amt,rate,time,in;
	printf("amt,rate,time\n");
	scanf("%f%f%f",&amt,&rate,&time);
	in=(amt*rate*time)/100;
	printf("%f",in);
	
	return 0;
}
