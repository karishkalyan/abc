#include<stdio.h>
void main()
{
int a[100],i,k,size;
printf("\n enter the size of the array:");
sacnf("%d",&size);
for(i=0;i<size;i++)
{
sacnf("%d",&a[i]);
}
k=size/2;
printf("\n the middle element is %d",a[k]);
getch();
}
