#include <stdio.h>
#include<string.h>
int main() 
{
	char a[100];
	scanf("%s",a);
	int n,m,i;
	scanf("%d",&n);
	m=strlen(a);
	for(i=n;i<m;i++)
	{
		printf("%c",a[i]);
	}
	return 0;
}
