#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void sort(int[],int);
int main ()
{
	int *marks,i;
	int n;
	printf ("\nEnter the number of items to be stored");
	scanf("%d",&n);
	marks=(int*)malloc(sizeof(int)*n);
	for (i=0;i<n;i++)
	{
		printf ("\nEnter marks of %d student-->",i+1);
		scanf("%d",(marks+i));
	}
	sort(marks,n);
	printf ("\n Sorted array \n");
	for (i=0;i<n;i++)
		printf ("\t%d",*(marks+i));
	free(marks);
	getch();
}
void sort (int *marks, int n)
{
	int i,j;
	int temp;
	for (i=0;i<n;i++)
	{
		for (j=0;j<n;j++)
		{
			if(*(marks+j)>*(marks+j+1))
			{
				temp=*(marks+j+1);
				*(marks+j+1)=*(marks+j);
				*(marks+j)=temp;
			}
		}
	
}
}

