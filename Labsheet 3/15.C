#include <stdio.h>
#include <conio.h>
int main ()
{
	int i=2,j,cnt=0;
	while (cnt!=50)
	{
		for (j=2;j<=i;j++)
		{
			if (i%j==0)
				break;
		}
		if (i==j)
			{
				printf ("\n%d-->%d",cnt+1,i);
				cnt=cnt+1;
			}
		i++;
	}
	getch();
}
