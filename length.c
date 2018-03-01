#include<stdio.h>

int count(char a[]);

void main()
{
   char a[80],c;
    int i=0,x;

printf("Enter a string:");
while(c=getchar()!='\n')
{
   a[i]=c;
i++;
}
 a[i]='\0';
x=count(a);

printf("LENGTH OF THE STRING :%d",x);
}
int count(char a[])
{
   int i,l=0;
for(i=0;a[i]!='\0';i++)
{
  l++;
}
return(l);
}
