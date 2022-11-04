#include<stdio.h>
int main()
{
int a[100],n,i,min;
printf("enter the size");
scanf("%d",&n);
printf("enter the elements");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
min=a[0];
for(i=1;i<n;i++)
{
if(min>a[i])
min=a[i];
}
printf("the smallest element in array is: %d\n",min);
return 0;
}
