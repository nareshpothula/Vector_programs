#include<stdio.h>
main()
{
int i=5,j=2;
junk(&i,&j);

printf("%d %d\n",i,j);
}


junk(int *i,int *j)
{
*i=*i * *i;
*j=*j * *j;
}
