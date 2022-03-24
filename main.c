#include <stdio.h>
#include <stdlib.h>
#include "work.h" 

int main()
{
	
	int n;
	printf("请输入学生人数：");
	scanf("%d",&n);
	
	music();
	student a[n];
	sumandaverage b[5]; 
	
	student *p1=a;                //p1指向n个元素的student数组的首地址。 
	sumandaverage *p2=b;          //p2指向5个元素的sumandaverage数组的首地址。 
	onemoretime:	 
	printf("		→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→\n");
	printf("\n");
	printf("		                        	 学生信息管理查询系统                            		\n");
	printf("\n");
	printf("		←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←\n");
	printf("\n");
	Displaymenu();
	printf("为保证菜单上的功能可以正常实现，请先选择功能1录入信息！\n");

	int choose;
do
{
	 printf("Please enter your choice:(输入-1查看菜单！)\n"); 
	 scanf("%d",&choose);
	 system("cls");
	 switch (choose)
	{
	 case -1:
	 	Displaymenu();
	 	break;
	 case 1:
		Readdate(p1,n);
	 	break;
	 case 2:
		 Sumandaverage2(a,b,n);
	 	break; 
	 case 3:
	 	Sumandaverage1(p1,n);
	 	break;
	 case 4:
	 	onlySumandaverage1(p1,n);
	 	Sort1(a,n);
	 	break;
	 case 5:
	 	onlySumandaverage1(p1,n);
	 	Sort2(a,n);
	 	break;
	 case 6:
	 	Sort3(a,n);
	 	break;
	 case 7:
	 	Sort4(a,n);
	 	break;
	 case 8:
	 	onlySort1(a,n);
	 	Numsearch(a,n);
	 	break;
	 case 9:
	 	onlySort1(a,n);
	 	Namesearch(a,n);
	 	break;
	 case 10:
	 	Percent(a,n);
	 	break;
	 case 11:
	 	Sumandaverage2(p1,p2,n); 
	 	Putdate1(p1,n);
	 	break;
	 case 12:
	 	onlySort1(a,n);
	 	onlySumandaverage1(a,n); 
	 	Writetofile(a,n);
	 	break;
	 case 13:
	 	Readfromfile(a,n);
	 	Puttxt(a,n);
	 	break;
	 case 521:
	 	printf("\n\n\n\n\n				真正的爱，应该超越生命的长度，心灵的宽度，灵魂的深度！\n\n\n");
	 	printf("小哥哥，小姐姐可以给我打的分高一点吗？┗|｀O′|┛ 嗷~~  ┗|｀O′|┛ 嗷~~\n\n\n\n\n\n\n\n\n\n\n");
		 break; 
	 case 888:
	 	printf("\n\n\n\n\n				如果相遇是离别的开始，那么离别就是为了下一次相遇而做准备！\n\n\n");
	 	printf("小哥哥，小姐姐可以给我打的分高一点吗？┗|｀O′|┛ 嗷~~  ┗|｀O′|┛ 嗷~~\n\n\n\n\n\n\n\n\n\n\n");
		 break; 
	 default:
	 	printf("抱歉，让你失望了，我没有该功能啊(p≧w≦q) (p≧w≦q)\n");
	 	
	}
}while (choose!=0);
	if (choose==0)
	{
		printf("			`(*>﹏<*)′`(*>﹏<*)′`(*>﹏<*)′`(*>﹏<*)′`(*>﹏<*)′`(*>﹏<*)′\n\n\n");
		printf("			确定不再使用我了吗？或许我还有更多功能等待你去挖掘啊(～￣▽￣)～(～￣▽￣)～\n\n");
		printf("作为人，我们必须有思想，而这表现在不满足我这个系统的菜单！！(〃￣︶￣)人(￣︶￣〃)\n\n");
		printf("请问屏幕前的小哥哥，小姐姐，为什么不试试-1~13以外的功能呢？\n\n试一试521，试一试888，会有意想不到的收获哦！\n"); 
		printf("输入“1”：残忍离开；								输入“0”：再玩一次；\n");
		int morechoose;
		scanf("%d",&morechoose);
		if (morechoose==1)
		{
			exit(-1);
		 }
		 if (morechoose==0)
		 goto onemoretime; 
	}
	 
	 
	system("pause");
	
	return 0;
}
