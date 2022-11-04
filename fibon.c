//fiboncii//
#include<stdio.h>
int main()
{
int n,t1=0,t2=1,t3=1,i;
printf("enter the number of series");
scanf("%d",&n);
printf("%d\n",t1);
printf("%d\n",t2);
printf("%d\n",t3);
{
for(i=0;i<=(n-2);++i)
{
t1=t2;
t2=t3;
t3=t1+t2;
printf("%d\n",t3);
}
}
return 0;
}
