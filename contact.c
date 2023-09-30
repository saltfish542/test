#define _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"

//�˵�
void menu()
{
	printf("******************************************************\n");
	printf("************		1.add		2.del		    ****************\n");
	printf("************		3.search	4.modify	****************\n");
	printf("************		5.show		0.exit		****************\n");
	printf("******************************************************\n");
}

//��ʼ��
void InitContact(contact* pc)
{
	memset(pc->date, 0, sizeof(pc->date));
	pc->count = 0;
}

//���ͨѶ¼��Ա
void Add_peo(contact* pc)
{
	if (pc->count == 100)
	{
		printf("ͨѶ¼�������޷�������³�Ա��");
		return;
	}
	printf("������������>");
	scanf("%s", pc->date[pc->count].name);
	printf("���������䣺>");
	scanf("%d", &pc->date[pc->count].age);
	printf("�������Ա�>");
	scanf("%s", pc->date[pc->count].sex);
	printf("����绰���룺>");
	scanf("%s", pc->date[pc->count].tele);
	printf("�������ַ��>");
	scanf("%s", pc->date[pc->count].addr);
	pc->count++;
}

//���ҳ�Ա
int FindPeo(contact* pc,char name[])
{
	for (int i = 0; i < pc->count; i++)
	{
		if (strcmp(pc->date[i].name , name)==0)
			return i;
	}
	printf("ͨѶ¼�в����ڴ��ˣ�\n");
	return -1;
}

//ɾ����Ա
void Del_peo(contact* pc,char name[])
{
	if (pc->count == 0)
	{
		printf("ͨѶ¼Ϊ�գ��޿�ɾ����Ա��\n");
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

//��ʾͨѶ¼��Ϣ
void showPeo(contact* pc)
{
	printf("\t\t%10s\t%10s\t%5s\t%15s\t%15s\n", "����", "�Ա�", "����", "�绰����", "��ַ");
	for (int i = 0; i < pc->count; i++)
	{
		printf("\t\t%10s\t%10s\t%5d\t%15s\t%15s\n", pc->date[i].name, 
																				pc->date[i].sex, 
																				pc->date[i].age, 
																				pc->date[i].tele, 
																				pc->date[i].addr);
	}
}

//�޸�ͨѶ¼��Ա
void modifyPeo(contact* pc, char name[])
{
	int ret = FindPeo(pc, name);
	if (ret == -1)
		return;
	int input;
	printf("***************************\n");
	printf("****  1.����  2.�Ա�  ****\n");
	printf("****  3.����  4.�绰  ****\n");
	printf("****  5.��ַ  0.�˳�  ****\n");
	printf("***************************\n");
	
	do
	{
		printf("��ѡ����Ҫ�޸ĵ���Ϣ��>");
		scanf("%d", &input);
		switch (input)
		{
		case 0:
			break;
		case 1:
			printf("��������Ҫ�޸ĵ�������>");
			scanf("%s", pc->date[ret].name);
			break;
		case 2:
			printf("��������Ҫ�޸ĵ��Ա�>");
			scanf("%s", pc->date[ret].sex);
			break;
		case 3:
			printf("��������Ҫ�޸ĵ����䣺>");
			scanf("%d", &pc->date[ret].age);
			break;
		case 4:
			printf("��������Ҫ�޸ĵĵ绰���룺>");
			scanf("%s", pc->date[ret].tele);
			break;
		case 5:
			printf("��������Ҫ�޸ĵĵ�ַ��>");
			scanf("%s", pc->date[ret].addr);
			break;
		default:
			printf("����������������룡");
			break;
		}
	} while (input);
}