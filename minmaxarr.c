#include<stdio.h>
int main()
{
int a[100],n,i,min,max;
printf("enter the size");
scanf("%d",&n);
printf("enter the elements");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
min=max=a[0];
for(i=1;i<n;i++)
{
if(min>a[i])
min=a[i];
if(max<a[i])
max=a[i];
}
printf("the minimum element is %d",min);
printf("the maximum element is %d",max);
return 0;
}
