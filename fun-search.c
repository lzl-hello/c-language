# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include "work.h"
//函数功能：按学号查询学生排名及其考试成绩。
void Numsearch(student a[],int n)
{
	printf("			■■■■■■■■■■■■欢迎使用■■■■■■■■■■■■\n\n\n");
	printf("→→→→→→→→→→→\n"); 
	printf("o(*^▽^*)┛：学号查询\n");
	printf("←←←←←←←←←←←\n\n\n");
	printf("输入要查询的学生的学号\n");
	long int x;int i,flag=0;
	scanf("%ld",&x);
	for (i=0;i<n;i++)
	{
		if (a[i].num==x)
		{
			printf("学号	姓名	成绩	排名\n");
			printf("%ld	%s	%d	%d\n",a[i].num,a[i].name,a[i].sum1,i+1);
			flag++;
			break; 
		}
	}
	if (flag==0)
	{
		printf("抱歉，没有该学生！\n");
	}
}
 //函数功能：按姓名查询学生 排名及其考试成绩。 
 void Namesearch (student a[],int n)
 {
 	printf("			■■■■■■■■■■■■欢迎使用■■■■■■■■■■■■\n\n\n");
	printf("→→→→→→→→→→→\n"); 
	printf("o(*^▽^*)┛：姓名查询\n");
	printf("←←←←←←←←←←←\n\n\n");
	printf("输入要查询的学生的姓名\n");
	char x[20];int i,flag=0;
	scanf("%s",x);
	for (i=0;i<n;i++)
	{
		if (strcmp(a[i].name,x)==0)
		{
			printf("学号	姓名	成绩	排名\n");
			printf("%ld	%s	%d	%d\n",a[i].num,a[i].name,a[i].sum1,i+1);
			flag++;
			break; 
		}
	}
	if (flag==0)
	{
		printf("抱歉，没有该学生！\n");
	}
 }
 
 
 
 //函数功能：只按按总分由高到低排序，不输出，用于查询前排序。
void onlySort1(student a[],int n)
{
	
	int i,j,k;
	student temp;
	for (i=0;i<n-1;i++)
	{
		for (j=i+1;j<n;j++)
		{
			if(a[i].sum1<a[j].sum1)
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
}
