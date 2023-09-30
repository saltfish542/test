#define _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"

//菜单
void menu()
{
	printf("******************************************************\n");
	printf("************		1.add		2.del		    ****************\n");
	printf("************		3.search	4.modify	****************\n");
	printf("************		5.show		0.exit		****************\n");
	printf("******************************************************\n");
}

//初始化
void InitContact(contact* pc)
{
	memset(pc->date, 0, sizeof(pc->date));
	pc->count = 0;
}

//添加通讯录成员
void Add_peo(contact* pc)
{
	if (pc->count == 100)
	{
		printf("通讯录已满，无法再添加新成员！");
		return;
	}
	printf("请输入姓名：>");
	scanf("%s", pc->date[pc->count].name);
	printf("请输入年龄：>");
	scanf("%d", &pc->date[pc->count].age);
	printf("请输入性别：>");
	scanf("%s", pc->date[pc->count].sex);
	printf("请输电话号码：>");
	scanf("%s", pc->date[pc->count].tele);
	printf("请输入地址：>");
	scanf("%s", pc->date[pc->count].addr);
	pc->count++;
}

//查找成员
int FindPeo(contact* pc,char name[])
{
	for (int i = 0; i < pc->count; i++)
	{
		if (strcmp(pc->date[i].name , name)==0)
			return i;
	}
	printf("通讯录中不存在此人！\n");
	return -1;
}

//删除成员
void Del_peo(contact* pc,char name[])
{
	if (pc->count == 0)
	{
		printf("通讯录为空，无可删除成员！\n");
		return;
	}
	int ret = FindPeo(pc, name);
	if (ret == -1)
		return;
	else
	{
		for (int i = ret; i < pc->count; i++)
		{
			pc->date[i] = pc->date[i + 1];
		}
		pc->count--;
	}
}

//显示通讯录信息
void showPeo(contact* pc)
{
	printf("\t\t%10s\t%10s\t%5s\t%15s\t%15s\n", "姓名", "性别", "年龄", "电话号码", "地址");
	for (int i = 0; i < pc->count; i++)
	{
		printf("\t\t%10s\t%10s\t%5d\t%15s\t%15s\n", pc->date[i].name, 
																				pc->date[i].sex, 
																				pc->date[i].age, 
																				pc->date[i].tele, 
																				pc->date[i].addr);
	}
}

//修改通讯录成员
void modifyPeo(contact* pc, char name[])
{
	int ret = FindPeo(pc, name);
	if (ret == -1)
		return;
	int input;
	printf("***************************\n");
	printf("****  1.姓名  2.性别  ****\n");
	printf("****  3.年龄  4.电话  ****\n");
	printf("****  5.地址  0.退出  ****\n");
	printf("***************************\n");
	
	do
	{
		printf("请选择你要修改的信息：>");
		scanf("%d", &input);
		switch (input)
		{
		case 0:
			break;
		case 1:
			printf("请输入你要修改的姓名：>");
			scanf("%s", pc->date[ret].name);
			break;
		case 2:
			printf("请输入你要修改的性别：>");
			scanf("%s", pc->date[ret].sex);
			break;
		case 3:
			printf("请输入你要修改的年龄：>");
			scanf("%d", &pc->date[ret].age);
			break;
		case 4:
			printf("请输入你要修改的电话号码：>");
			scanf("%s", pc->date[ret].tele);
			break;
		case 5:
			printf("请输入你要修改的地址：>");
			scanf("%s", pc->date[ret].addr);
			break;
		default:
			printf("输入错误，请重新输入！");
			break;
		}
	} while (input);
}