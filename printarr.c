#include<stdio.h>
int main()
{
int a[100],n,i;
printf("enter the size");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
printf("%d\t",a[i]);
}
return 0;
}
