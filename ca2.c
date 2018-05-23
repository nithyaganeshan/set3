#include <stdio.h>

int main() {
	int n,m,o;
	scanf("%d%d",&n,&m);
	o=n-m;
	if(o%2==0)
	{
		printf("Even");
	}
	else
	{
		printf("odd");
	}
	return 0;
}
