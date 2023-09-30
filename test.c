#define _CRT_SECURE_NO_WARNINGS 1

#include "contact.h"

int main()
{
	int input = 0;
	char name[MAX_NAME];
	menu();
	struct contact con;//创建通讯录
	InitContact(&con);//初始化通讯录

	do
	{
		printf("请选择你要执行的操作：>");
		scanf("%d", &input);
		switch (input)
		{
		case 0:
			printf("退出通讯录！\n");
			break;
		case 1:
			Add_peo(&con);
			break;
		case 2:
			printf("请输入要删除成员的姓名：>");
			scanf("%s", name);
			Del_peo(&con, name);
			break;
		case 3:
			printf("请输入要查找成员姓名：>");
			scanf("%s", name);
			FindPeo(&con, name);
			break;
		case 4:
			printf("请输入要修改成员姓名：>");
			scanf("%s", name);
			modifyPeo(&con,name);
			break;
		case 5:
			showPeo(&con);
			break;
		default:
			printf("输入错误，请重新输入！\n");
			break;
		}
	} while (input);
}