#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
struct student 
{
	int roll_n;
	char name[30];
	char address[40];
	int m1,m2,m3;
};
int main ()
{
	struct student std;
	int count=1;
	float per;
	char rslt;
	FILE *fp;
	system("cls");
	fp=fopen ("student.dat","r");
	fread(&std,sizeof(std),1,fp);
	printf ("\nSn. ROll NO\tName\tResult\tPercentage");
	while (!feof(fp))
	{
		per=(std.m1+std.m2+std.m3)/3.0;
		if (std.m1<40 || std.m2<40 || std.m3<40)
			rslt='F';
		else 
			rslt='P';		
		printf ("\n%d\t%d\t%s\t%c\t%.3f",count,std.roll_n,std.name,rslt,per);
		fread(&std,sizeof(std),1,fp);
		count++;
		
	}
	getch();
}
