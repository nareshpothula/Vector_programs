#include<stdio.h>
main(int argc,char**argv)
{
FILE *fp,*fp1;
char ch;
int i,op,q;

if(argc>100)
{
printf("Usage:./a.out filenames.....\n");
return;
}
fp=fopen(argv[1],"r");
if(fp==NULL)
{
printf("file is not present....\n");
return;
}
printf("hai\n");
for(i=2;i<argc;i++)
{
fp1=fopen(argv[i],"r");
if(fp1==NULL)
{
a:

fp1=fopen(argv[i],"w");
while((ch=fgetc(fp))!=EOF)
fputc(ch,fp1);
rewind(fp);
}
else
{
printf("file is present \n Do u want replace data....???\n1)Yes\n2)No\n");
scanf("%d",&op);
if(op==1)
goto a;
if(op==2)
printf("Thanks for using my app\n");
}
}
}
#include<stdio.h>
main(int argc,char**argv)
{
FILE *fp,*fp1;
char ch;
int i,op,q;

if(argc>100)
{
printf("Usage:./a.out filenames.....\n");
return;
}
fp=fopen(argv[1],"r");
if(fp==NULL)
{
printf("file is not present....\n");
return;
}
printf("hai\n");
for(i=2;i<argc;i++)
{
fp1=fopen(argv[i],"r");
if(fp1==NULL)
{
a:

fp1=fopen(argv[i],"w");
while((ch=fgetc(fp))!=EOF)
fputc(ch,fp1);
rewind(fp);
}
else
{
printf("file is present \n Do u want replace data....???\n1)Yes\n2)No\n");
scanf("%d",&op);
if(op==1)
goto a;
if(op==2)
printf("Thanks for using my app\n");
}
}
}
#include<stdio.h>
main(int argc,char**argv)
{
FILE *fp,*fp1;
char ch;
int i,op,q;

if(argc>100)
{
printf("Usage:./a.out filenames.....\n");
return;
}
fp=fopen(argv[1],"r");
if(fp==NULL)
{
printf("file is not present....\n");
return;
}
printf("hai\n");
for(i=2;i<argc;i++)
{
fp1=fopen(argv[i],"r");
if(fp1==NULL)
{
a:

fp1=fopen(argv[i],"w");
while((ch=fgetc(fp))!=EOF)
fputc(ch,fp1);
rewind(fp);
}
else
{
printf("file is present \n Do u want replace data....???\n1)Yes\n2)No\n");
scanf("%d",&op);
if(op==1)
goto a;
if(op==2)
printf("Thanks for using my app\n");
}
}
}
