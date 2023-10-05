#include<stdio.h>
int main()
{
	int n,i,j,marks,avg,total=0,max=0,rollno,sub;
	char name[20];
	printf("Enter the no. of students");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		fflush(stdin);
		printf("Enter the student name :-  ");
		gets(name);
		printf("Enter the student Roll Number :-  ");
		scanf("%d",&rollno);
		printf("Enter the Number of subjects:-\t");
		scanf("%d",&sub);
		for(j=0;j<sub;j++)
		{
		printf("Enter the Marks:-");
		scanf("%d",&marks);
		if(marks>max)
		max=marks;
		total=total+marks;
		}
		printf("\n");
		printf("The Total Marks is %d\n",total);
		printf("The Maximum Marks is %d\n",max);
		avg=total/sub;
		if(avg>=90)
		{
			printf("Pass with A+ Grade\n");
			printf("Congratulations\n");
		}
		else if(avg>=75)
		{
			printf("Pass with A Grade\n");
			printf("Very Good Performance\n");
		}
		else if(avg>=60)
		{
			printf("Pass with B Grade\n");
			printf("Good Performance\n");
		}
	   else	if(avg>=45)
		{
			printf("Pass with C Grade\n");
			printf("Do Better Next Time\n");
		}
	    else if(avg>=33)
		{
			printf("Pass with D Grade\n");
			printf("Better Luck\n");
		}
	    else if(avg<=32)
		{
			printf("Fail\n");
		}

	}
}
