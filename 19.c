#include<stdio.h>
int main()
{
    int a, b, v, c;
    a=9, v=27;
while(v>5)
{
    a=a+v;
    c=a-10;
while(c>7)
{
    	b=v+c;
	c=c-60;
}
v=v/3;
}
printf("%d %d %d",a, c ,v);
return 0;
    
}
