# include <stdio.h>
#include <windows.h>
#include <mmsystem.h>
#pragma comment(lib,"winmm.lib")
typedef struct GRADE
{
	int calculus;
	int linear;
	int english;
	int program;
	int PE;
}grade;
typedef struct SUMANDAVERAGE
{
	int sum2;                          //课程的总分 
	float average2;                     //课程的平均分 
}sumandaverage;
typedef struct STUDENT
{
	
	long int num;
	char name[20];
	grade fivegrades;
	int sum1;
	float average1;
	
}student;
void Readdate(student *p1,int n);
void Putdate1(student *p1,int n);
void Sumandaverage2(student a[],sumandaverage b[],int n);
void Sumandaverage1(student *p1,int n);
void onlySumandaverage1(student *p1,int n); 
void Sort1(student a[],int n);
void Sort2(student a[],int n);
void Sort3(student a[],int n);
void Sort4(student a[],int n);
void Numsearch(student a[],int n);
void onlySort1(student a[],int n);
void Namesearch (student a[],int n);
void Percent(student a[],int n);
void Writetofile(student a[],int n);
void Readfromfile(student a[],int n);
void Puttxt(student a[],int n);
void Displaymenu();
int zongfen1(student a[],int n);
int zongfen2(student a[],int n);
int zongfen3(student a[],int n);
int zongfen4(student a[],int n);
int zongfen5(student a[],int n);
