#include<stdio.h>
main()
{
int a[5]={5,1,15,20,25};
int i,j,k=1,m;
i=++a[1];
j=a[1]++;
m=a[i++];
printf("%d %d %d \n",i,j,m);


for(i=0;i<5;i++)
printf("%d  ",a[i]);
}
