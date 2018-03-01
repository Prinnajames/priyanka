#include<stdio.h>
void main()
{
int z=1;
while(z)
{
printf("\nTemperature Conversion\n");
printf("\nEnter 1 for f->c");
printf("\nEnter 2 for c->f\n");
int ch,q,j;
float c,f,d=1.8;
scanf("%d",&ch);
if(ch==1)
{
printf("\nEnter the farenheit\nF=");
scanf("%f",&f);
c=(f-32)/d;
float k=c+273;
printf("temperature in C is %.2f\n",c);
printf("temperature in Kelvin is %.2f\n",k);
printf("\nDo you want another conversion\npress 1 to continue\npress 2 to exit");
scanf("%d",&q);
if(q==2)
{
z=0;
printf("\nGood Bye\n");
}
else if(q==1)
{
z=1;
}
else
{
printf("Wrong input error occured");
}

}
else if(ch==2)
{
printf("\nEnter the cel\nC=");
scanf("%f",&c);
f=(c*d)+32;
float k=c+273;
printf("temperature in F is %.2f\n",f);
printf("temperature in Kelvin is %.2f\n",k);
printf("\nDo you want another conversion\npress 1 to continue\npress 2 to exit");
scanf("%d",&j);
if(j==2)
{
z=0;
printf("\nGood Bye\n");
}
else if(j==1)
{
z=1;
}
else
{
printf("Wrong input error occured");
}
}
}
}
