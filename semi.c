#include<stdio.h>
int main(void)
{
char s[32];
gets(s);
if(printf("%s",s))
return 0;
}
