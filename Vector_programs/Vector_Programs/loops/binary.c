#include<stdio.h>
main()
{
int num,i;
printf("enter the number....");
scanf("%d",&num);
for(i=31;i>=0;i--)
if(num&1<<i)
printf("1");
else
printf("0");

printf("\n");



}
