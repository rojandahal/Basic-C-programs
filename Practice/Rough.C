#include<stdio.h>
#include<conio.h>
int main()
{
int x,y,sum,i,a,b;
printf("enter the starating no.");
scanf("%d",&x);
printf("enter the ending no.");
scanf("%d",&y);

for (i=x;i<y;i++)
{
a=i;
sum=0;
do{
b=a%10;
sum=sum+b*b*b;
a=a/10;
}while(a!=0);
if (sum==i)
printf("%d\t",i);
}
getch();
return 0;
}
