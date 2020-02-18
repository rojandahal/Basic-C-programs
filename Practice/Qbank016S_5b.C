#include <stdio.h>
#include <conio.h>
#include <math.h>
int fact (int );
int main ()
{
	int i=1,j=0,x,n,r,fac,cnt=0;
	float rest,sum=0;
	printf ("\n Enter the value of X?");
	scanf ("%d",&x);
	printf ("\n Enter the no of terms: ");
	scanf ("%d",&n);
	printf ("\n The sequence:\n");
	while (cnt<n)
	{
		r=pow(-1,j);
		fac=fact(i);
		rest=(float)(r*pow(x,i))/fac;
		printf ("%.4f  ",rest);
		sum=sum+rest;
		i=i+2;
		j=j+1;
		cnt++;
	}
	printf ("\n The evaluated value is: %f",sum);
}
int fact(int t)
{
	if (t==0||t==1)
		return 1;
	else 
	return (t*fact(t-1));
}
