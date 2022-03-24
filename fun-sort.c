# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include "work.h"
//函数功能：用于总分排序前的计算，不输出。 
void onlySumandaverage1(student *p1,int n)
{
	int i;
	
	for (i=0;i<n;i++,p1++)
	{
		p1->sum1=p1->fivegrades.calculus
				+p1->fivegrades.linear
				+p1->fivegrades.english
				+p1->fivegrades.program
				+p1->fivegrades.PE;
		p1->average1=(float)p1->sum1/5;
	}
}
//函数功能：按总分由高到低排序。
void Sort1(student a[],int n)
{
	printf("			■■■■■■■■■■■■欢迎使用■■■■■■■■■■■■\n\n\n");
	printf("→→→→→→→→→→→→→→→\n"); 
	printf("o(*^▽^*)┛：按总成绩降次排序\n");
	printf("←←←←←←←←←←←←←←←\n\n\n");
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
	printf("学号		姓名		总分\n"); 
	for (k=0;k<n;k++)
	{
		printf("%ld		%s		%d\n",a[k].num,a[k].name,a[k].sum1);
	}
} 
//函数功能：按总分由低到高排序。
void Sort2(student a[],int n)
{
	printf("			■■■■■■■■■■■■欢迎使用■■■■■■■■■■■■\n\n\n");
	printf("→→→→→→→→→→→→→→→\n"); 
	printf("o(*^▽^*)┛：按总成绩升次排序\n");
	printf("←←←←←←←←←←←←←←←\n\n\n");
	int i,j,k;
	student temp;
	for (i=0;i<n-1;i++)
	{
		for (j=i+1;j<n;j++)
		{
			if(a[i].sum1>a[j].sum1)
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("学号		姓名		总分\n"); 
	for (k=0;k<n;k++)
	{
		printf("%ld		%s		%d\n",a[k].num,a[k].name,a[k].sum1);
	}
} 
//函数功能：按学号由小到大排序。
void Sort3(student a[],int n)
{
	printf("			■■■■■■■■■■■■欢迎使用■■■■■■■■■■■■\n\n\n");
	printf("→→→→→→→→→→→→→→→\n"); 
	printf("o(*^▽^*)┛：按学号升次排序\n");
	printf("←←←←←←←←←←←←←←←\n\n\n");
	int i,j,k;
	student temp;
	for (i=0;i<n-1;i++)
	{
		for (j=i+1;j<n;j++)
		{
			if(a[i].num>a[j].num)
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("学号	姓名	高数	线代	英语	编程	体育	总分	平均分\n");
	for (k=0;k<n;k++)
	{
		printf("%ld	%s	%d	%d	%d	%d	%d	%d	%.2f\n",a[k].num,a[k].name,a[k].fivegrades.calculus,
																										a[k].fivegrades.linear,
																										a[k].fivegrades.english,
																										a[k].fivegrades.program,
																										a[k].fivegrades.PE,
																										a[k].sum1,
																										a[k].average1);
	}
} 
//函数功能：按姓名的字典顺序排序。
void Sort4(student a[],int n)
{
	int i,j,k; 
	student temp;
	printf("			■■■■■■■■■■■■欢迎使用■■■■■■■■■■■■\n\n\n");
	printf("→→→→→→→→→→→→→→→\n"); 
	printf("o(*^▽^*)┛：按姓名字典顺序排序\n");
	printf("←←←←←←←←←←←←←←←\n\n\n");
	for (i=0;i<n-1;i++)
	{
		for (j=i+1;j<n;j++)
		{
			if (strcmp(a[i].name,a[j].name)>0)
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("学号	姓名	高数	线代	英语	编程	体育	总分	平均分\n");
	for (k=0;k<n;k++)
	{
		printf("%ld	%s	%d	%d	%d	%d	%d	%d	%.2f\n",a[k].num,a[k].name,a[k].fivegrades.calculus,
																										a[k].fivegrades.linear,
																										a[k].fivegrades.english,
																										a[k].fivegrades.program,
																										a[k].fivegrades.PE,
																										a[k].sum1,
																										a[k].average1);
	}
	
 } 
