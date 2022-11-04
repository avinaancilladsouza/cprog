#include<stdio.h>
int main()
{
int a[100],n,i,j,temp;
printf("\nenter the size\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
j=i-1;
i=0;
if(i<j)
{
while (i<j)
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
i++;
j--;
}
}
else
{
a[i]=a[i];
}
printf("the reverse of array is ");
for(i=0;i<n;i++)
{
printf("%d\t\n",a[i]);
}
return 0;
}
