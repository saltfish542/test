#define _CRT_SECURE_NO_WARNINGS 1

#include "contact.h"

int main()
{
	int input = 0;
	char name[MAX_NAME];
	menu();
	struct contact con;//����ͨѶ¼
	InitContact(&con);//��ʼ��ͨѶ¼

	do
	{
		printf("��ѡ����Ҫִ�еĲ�����>");
		scanf("%d", &input);
		switch (input)
		{
		case 0:
			printf("�˳�ͨѶ¼��\n");
			break;
		case 1:
			Add_peo(&con);
			break;
		case 2:
			printf("������Ҫɾ����Ա��������>");
			scanf("%s", name);
			Del_peo(&con, name);
			break;
		case 3:
			printf("������Ҫ���ҳ�Ա������>");
			scanf("%s", name);
			FindPeo(&con, name);
			break;
		case 4:
			printf("������Ҫ�޸ĳ�Ա������>");
			scanf("%s", name);
			modifyPeo(&con,name);
			break;
		case 5:
			showPeo(&con);
			break;
		default:
			printf("����������������룡\n");
			break;
		}
	} while (input);
}