#include <stdio.h>
#include <conio.h>
void swap1(int,int);
void swap2(int*,int*);
int main ()
{
	int a,b;
	printf ("\nENter two numbers");
	scanf("%d%d",&a,&b);
	swap1(a,b);
	printf("\na=%d & b=%d ater swap1",a,b);
 	swap2(&a,&b);
	printf("\na=%d &b=%d after swap2",a,b);
	getch();
}
void swap1(int a,int b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
	printf("\na=%d &b=%d in swap1 function",a,b);
}
void swap2(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}


