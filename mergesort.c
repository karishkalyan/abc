#include<stdio.h>
void main()
{
int a[100],i,n,size,temp,largest;
printf("\n enter the size of the array:");
sacnf("%d",&size);
for(i=0;i<size;i++)
{
scanf("%d",&a[i]);
}
largest=a[0];
for(i=0;i<size;i++)
{
if(largest<a[i])
{
largest=a[i];
}
printf("%d",&largest);
getch();
}
