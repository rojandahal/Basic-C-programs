#include<stdio.h>
#include<conio.h>
int fabbo(int);
int main()
{
	int n,i,r;
	printf("enter the no of terms");
	scanf("%d",&n);
	r=fabbo(n);
	printf("no of terms %d",r);
	
 /*	for(i=0;i<n;i++)
	{
		r=fabbo(i);
		printf("%d",r);
		
	}
	getch();
	return 0; */
	
}
int fabbo(int a)
{

	if(a==1)
	 
	return 1;
	
else
{
	return(a*fabbo(a-1));
	
}
}

