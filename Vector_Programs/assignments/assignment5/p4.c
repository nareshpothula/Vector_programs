#include<stdio.h>
main()
{
static char names[5][20]={"pascal","ada","cobal","fortan","perl"};
int i;
char *t;
t=names[3];
//names[3]=names[4];
//names[4]=t;
for(i=0;i<=4;i++)
printf("%s  ",names[2]);
}
