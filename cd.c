#include<stdio.h>
int main(void)
{
int i,m,n,a[10],count=0;
scanf("%d%d",&m,&n);
for(i=0;i<m;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<m;i++)
{
if((a[i]%2)!=0)
{
count++;
if(count==n)
{
printf("\n the odd number is:%d",n,count);
}
}
}
return 0;
}
