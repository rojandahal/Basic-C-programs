#include<stdio.h>
#include<conio.h>
int swap(int,int);
main()
{
	int a,b,t;
	printf("\nenter the value of a,b");
	scanf("%d%d",&a,&b);
printf("the value entered %d \t %d",a,b);
swap(a,b);
printf("\nthe vaklue in side the function%d & %d",a,b);
getch();

}
swap(a,b)
{
int t;
t=a;
a=b;
b=t;
printf("\nthe value after the swap%d & %d",a,b);
}
