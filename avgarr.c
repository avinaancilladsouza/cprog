#include<stdio.h>
int main()
{
int a[100],n,i;
double sum=0,avg;
printf("enter the size");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
sum=sum+a[i];
}
avg=sum/n;
printf("The avg of array is %lf ",avg);
return 0;
}
