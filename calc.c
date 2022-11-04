#include<stdio.h>
#include<math.h>
int main()
{
int a, b; 
float res;
char c;

printf("enter 2 numbers with operator");
scanf("%d %c %d",&a,&c,&b);
{
if(c=='+')
res=a+b;
else if(c=='-')
res=a-b;
else if(c=='*')
res=a*b;
else if(c=='/')
res=a/b;
else
printf("invalid");
}
printf("%f\n",res);
return 0;
}
 
