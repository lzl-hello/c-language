# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include "work.h"
//函数功能：读入学号，姓名，五科成绩； 
void Readdate(student *p1,int n)
{
	printf("			■■■■■■■■■■■■欢迎使用■■■■■■■■■■■■\n\n\n");
	printf("→→→→→→→→→→→→→\n"); 
	printf("o(*^▽^*)┛：读入学生信息（请依次输入学生的学号，姓名，高数，线代，英语，编程，体育成绩）\n");
	printf("				    例如：111   张三   95    90    85    90    100\n"); 
	printf("←←←←←←←←←←←←←\n\n\n");
	int i;
	for (i=0;i<n;i++,p1++)
	{
		scanf("%ld%s%d%d%d%d%d"
			,&p1->num,&p1->name
			,&p1->fivegrades.calculus
			,&p1->fivegrades.linear
			,&p1->fivegrades.english
			,&p1->fivegrades.program
			,&p1->fivegrades.PE);
	}
}
//函数功能：输出学号，姓名，五科成绩； 
void Putdate1(student *p1,int n)
{
	printf("→→→→→→→→→→→→→→→→→→→→\n"); 
	printf("o(*^▽^*)┛：每个学生的学号，姓名，成绩\n");
	printf("←←←←←←←←←←←←←←←←←←←←\n\n\n");
	printf("学号	姓名	高数	线代	英语	编程	体育\n");
	int i;
	for (i=0;i<n;i++,p1++)
	{
		
		printf("%ld",p1->num);
		printf("	%s",p1->name);
		printf("	%d",p1->fivegrades.calculus);
		printf("	%d",p1->fivegrades.linear);
		printf("	%d",p1->fivegrades.english);
		printf("	%d",p1->fivegrades.program);
		printf("	%d",p1->fivegrades.PE);
		printf("\n");
		
	}
}
//函数功能：计算每门课程的总分和平均分； 
void Sumandaverage2(student a[],sumandaverage b[],int n)
{
	printf("			■■■■■■■■■■■■欢迎使用■■■■■■■■■■■■\n\n\n");
	printf("→→→→→→→→→→→→→→→→→→\n"); 
	printf("o(*^▽^*)┛：每门课的总成绩与平均分\n");
	printf("←←←←←←←←←←←←←←←←←←\n\n\n");
	printf("课程名		总分		平均分\n"); 
		int j;
		b[0].sum2=0;
		b[0].sum2=zongfen1(a,n);
		printf("语文		%d",b[0].sum2);
		b[0].average2=(float)b[0].sum2/n;
		printf("		  %.2f",b[0].average2);
		printf("\n");
		
		
		
		b[1].sum2=0;
		b[1].sum2=zongfen2(a,n);
		printf("数学		%d",b[1].sum2);
		b[1].average2=(float)b[1].sum2/n;
		printf("		  %.2f",b[1].average2);
		printf("\n");
		
	
		b[2].sum2=0;
		b[2].sum2=zongfen3(a,n);
		printf("英语		%d",b[2].sum2);
		b[2].average2=(float)b[2].sum2/n;
		printf("		  %.2f",b[2].average2);
		printf("\n");
		
		
	
		b[3].sum2=0;
		b[3].sum2=zongfen4(a,n);
		printf("C语言		%d",b[3].sum2);
		b[3].average2=(float)b[3].sum2/n;
		printf("		  %.2f",b[3].average2);
		printf("\n");
		
		
		
		b[4].sum2=0;
		b[4].sum2=zongfen5(a,n);
		printf("体育		%d",b[4].sum2);
		b[4].average2=(float)b[4].sum2/n;
		printf("		  %.2f",b[4].average2);
		printf("\n");
}

//函数功能：计算每个学生的总分和平均分并输出。 
void Sumandaverage1(student *p1,int n)
{
	printf("			■■■■■■■■■■■■欢迎使用■■■■■■■■■■■■\n\n\n");
	printf("→→→→→→→→→→→→→→→→→→→\n"); 
	printf("o(*^▽^*)┛：每个学生的总成绩与平均分\n");
	printf("←←←←←←←←←←←←←←←←←←←\n\n\n");
	printf("学号		姓名		总分		平均分\n");
	int i;
	for (i=0;i<n;i++,p1++)
	{
		p1->sum1=p1->fivegrades.calculus
				+p1->fivegrades.linear
				+p1->fivegrades.english
				+p1->fivegrades.program
				+p1->fivegrades.PE;
		p1->average1=(float)p1->sum1/5;
		printf("%ld		%s		%d		%.2f\n",p1->num,p1->name,p1->sum1,p1->average1);
	} 
}
int zongfen1(student a[],int n)
{
	if(n==1)
	{
		return a[0].fivegrades.calculus;
	}
	else
	{
		return a[n-1].fivegrades.calculus+zongfen1(a,n-1);
	}
}
int zongfen2(student a[],int n)
{
	
	if(n==1)
	{
		return a[0].fivegrades.linear;
	}
	else
	{
		return a[n-1].fivegrades.linear+zongfen2(a,n-1);
	}
}
int zongfen3(student a[],int n)
{
	
	if(n==1)
	{
		return a[0].fivegrades.english;
	}
	else
	{
		return a[n-1].fivegrades.english+zongfen3(a,n-1);
	}
}
int zongfen4(student a[],int n)
{
	
	if(n==1)
	{
		return a[0].fivegrades.program;
	}
	else
	{
		return a[n-1].fivegrades.program+zongfen4(a,n-1);
	}
}
int zongfen5(student a[],int n)
{
	
	if(n==1)
	{
		return a[0].fivegrades.PE;
	}
	else
	{
		return a[n-1].fivegrades.PE+zongfen5(a,n-1);
	}
}
//函数功能： 计算优秀，良好，中等，及格，不及格的学生人数和所占百分比；
void Percent(student a[],int n)
{
	int exc=0,wel=0,med=0,pas=0,fai=0,j;
	printf("			■■■■■■■■■■■■欢迎使用■■■■■■■■■■■■\n\n\n");
	printf("→→→→→→→→→→→\n"); 
	printf("o(*^▽^*)┛：成绩占比\n");
	printf("←←←←←←←←←←←\n\n\n");
	
		exc=0;wel=0;med=0;pas=0;fai=0;
		for (j=0;j<n;j++)
		{	
			
			if(a[j].fivegrades.calculus>=90 && a[j].fivegrades.calculus<=100)
			exc++;
			if(a[j].fivegrades.calculus>=80 && a[j].fivegrades.calculus<=89)
			wel++;
			if(a[j].fivegrades.calculus>=70 && a[j].fivegrades.calculus<=79)
			med++;
			if(a[j].fivegrades.calculus>=60 && a[j].fivegrades.calculus<=69)
			pas++;
			if(a[j].fivegrades.calculus>=0 && a[j].fivegrades.calculus<=59)
			fai++;
			
		}
		printf("课程	优秀	良好	中等	及格	不及格\n");
		printf("calculus %d	%d	%d	%d	%d\n",exc,wel,med,pas,fai);
		printf("	%%%.2f	%%%.2f	%%%.2f	%%%.2f	%%%.2f\n",100*(float)exc/n,100*(float)wel/n,100*(float)med/n,100*(float)pas/n,100*(float)fai/n);
		
		exc=0;wel=0;med=0;pas=0;fai=0;
		for (j=0;j<n;j++)
		{	
			
			if(a[j].fivegrades.linear>=90 && a[j].fivegrades.linear<=100)
			exc++;
			if(a[j].fivegrades.linear>=80 && a[j].fivegrades.linear<=89)
			wel++;
			if(a[j].fivegrades.linear>=70 && a[j].fivegrades.linear<=79)
			med++;
			if(a[j].fivegrades.linear>=60 && a[j].fivegrades.linear<=69)
			pas++;
			if(a[j].fivegrades.linear>=0 && a[j].fivegrades.linear<=59)
			fai++;
			
		}
		printf("课程	优秀	良好	中等	及格	不及格\n");
		printf("linear	%d	%d	%d	%d	%d\n",exc,wel,med,pas,fai);
		printf("	%%%.2f	%%%.2f	%%%.2f	%%%.2f	%%%.2f\n",100*(float)exc/n,100*(float)wel/n,100*(float)med/n,100*(float)pas/n,100*(float)fai/n);
		
		exc=0;wel=0;med=0;pas=0;fai=0;
		for (j=0;j<n;j++)
		{	
			
			if(a[j].fivegrades.english>=90 && a[j].fivegrades.english<=100)
			exc++;
			if(a[j].fivegrades.english>=80 && a[j].fivegrades.english<=89)
			wel++;
			if(a[j].fivegrades.english>=70 && a[j].fivegrades.english<=79)
			med++;
			if(a[j].fivegrades.english>=60 && a[j].fivegrades.english<=69)
			pas++;
			if(a[j].fivegrades.english>=0 && a[j].fivegrades.english<=59)
			fai++;
			
		}
		printf("课程	优秀	良好	中等	及格	不及格\n");
		printf("english	%d	%d	%d	%d	%d\n",exc,wel,med,pas,fai);
		printf("	%%%.2f	%%%.2f	%%%.2f	%%%.2f	%%%.2f\n",100*(float)exc/n,100*(float)wel/n,100*(float)med/n,100*(float)pas/n,100*(float)fai/n);
		
		exc=0;wel=0;med=0;pas=0;fai=0;
		for (j=0;j<n;j++)
		{	
			
			if(a[j].fivegrades.program>=90 && a[j].fivegrades.program<=100)
			exc++;
			if(a[j].fivegrades.program>=80 && a[j].fivegrades.program<=89)
			wel++;
			if(a[j].fivegrades.program>=70 && a[j].fivegrades.program<=79)
			med++;
			if(a[j].fivegrades.program>=60 && a[j].fivegrades.program<=69)
			pas++;
			if(a[j].fivegrades.program>=0 && a[j].fivegrades.program<=59)
			fai++;
			
		}
		printf("课程	优秀	良好	中等	及格	不及格\n");
		printf("program	%d	%d	%d	%d	%d\n",exc,wel,med,pas,fai);
		printf("	%%%.2f	%%%.2f	%%%.2f	%%%.2f	%%%.2f\n",100*(float)exc/n,100*(float)wel/n,100*(float)med/n,100*(float)pas/n,100*(float)fai/n);
		
		exc=0;wel=0;med=0;pas=0;fai=0;
		for (j=0;j<n;j++)
		{	
			
			if(a[j].fivegrades.PE>=90 && a[j].fivegrades.PE<=100)
			exc++;
			if(a[j].fivegrades.PE>=80 && a[j].fivegrades.PE<=89)
			wel++;
			if(a[j].fivegrades.PE>=70 && a[j].fivegrades.PE<=79)
			med++;
			if(a[j].fivegrades.PE>=60 && a[j].fivegrades.PE<=69)
			pas++;
			if(a[j].fivegrades.PE>=0 && a[j].fivegrades.PE<=59)
			fai++;
			
		}
		printf("课程	优秀	良好	中等	及格	不及格\n");
		printf("PE	%d	%d	%d	%d	%d\n",exc,wel,med,pas,fai);
		printf("	%%%.2f	%%%.2f	%%%.2f	%%%.2f	%%%.2f\n",100*(float)exc/n,100*(float)wel/n,100*(float)med/n,100*(float)pas/n,100*(float)fai/n);
		
}
//函数功能：输出每个学生的学号，姓名，每门课的成绩，总成绩，到文件score.txt上； 
void Writetofile(student a[],int n)
{
	printf("			■■■■■■■■■■■■欢迎使用■■■■■■■■■■■■\n\n\n");
	printf("→→→→→→→→→→→\n"); 
	printf("o(*^▽^*)┛：输入文件\n");
	printf("←←←←←←←←←←←\n\n\n");
	FILE *fp;
	int k;
	fp=fopen("score.txt","w");
	if (fp==NULL)
	{
		printf("Failure to open score.txt!\n");
		exit(0);
	}
	
	for (k=0;k<n;k++)
	{
		fprintf(fp,"%ld	%s	%d	%d	%d	%d	%d	%d	%.2f\n",a[k].num,a[k].name,a[k].fivegrades.calculus,
																										a[k].fivegrades.linear,
																										a[k].fivegrades.english,
																										a[k].fivegrades.program,
																										a[k].fivegrades.PE,
																										a[k].sum1,
																										a[k].average1);
	}
	fclose(fp);
	printf("数据已读取，请在文件中记事本打开查看数据\n");
		
}
  
//函数功能：从文件score.txt中读取每个学生的学号，姓名，总成绩，每门课的成绩； 
void Readfromfile(student a[],int n)
{
	int k;
	FILE *fp;
	fp=fopen("score.txt","r");
	if (fp==NULL)
	{
		printf("Failure to open score.txt!\n");
		exit(0);
	}
	
	for (k=0;k<n;k++)
	{
		fscanf(fp,"%ld	%s	%d	%d	%d	%d	%d	%d	%f\n",&a[k].num,a[k].name,&a[k].fivegrades.calculus,
																										&a[k].fivegrades.linear,
																										&a[k].fivegrades.english,
																										&a[k].fivegrades.program,
																										&a[k].fivegrades.PE,
																										&a[k].sum1,
																										&a[k].average1);
	}
	fclose(fp);
	
 } 
 //函数功能：将从文件score.txt中读取的数据输出到屏幕；
void Puttxt(student a[],int n) 
{
	printf("			■■■■■■■■■■■■欢迎使用■■■■■■■■■■■■\n\n\n");
	printf("→→→→→→→→→→→\n"); 
	printf("o(*^▽^*)┛：输出文件\n");
	printf("←←←←←←←←←←←\n\n\n");
	int k;
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
//函数功能：显示菜单；
void Displaymenu()                                                         
{	
	system("color 70");
	printf("		    		■■■■■■■■■■■■欢迎使用■■■■■■■■■■■■\n\n\n");
	printf("→→→→→→→→→→→\n"); 
	printf("o(*^▽^*)┛：菜单查看\n");
	printf("←←←←←←←←←←←\n\n\n");
	printf("		                    ------menu------                \n");
	printf("		1.Input record\n");
	printf("		2.Calculate total and average score of every course\n");
	printf("		3.Calculate total and average score of every student\n");
	printf("		4.Sort in descending order by total score of every student\n");
	printf("		5.Sort in ascending order by total score of every student\n");
	printf("		6.Sort in ascending order by number\n");
	printf("		7.Sort in dictionary order by name\n");
	printf("		8.Search by number\n");
	printf("		9.Search by name\n");
	printf("		10.Statistic analysis for every course\n");
	printf("		11.List record\n");
	printf("		12.Write to a file\n");
	printf("		13.Read from a file\n");
	printf("		0.Exit\n");
	
}

void music(void){
	mciSendString("open back2.mp3 alias bkmusic", NULL, 0, NULL);//打开 
 	mciSendString("play bkmusic repeat", NULL, 0, NULL);     //循环 
	
}
