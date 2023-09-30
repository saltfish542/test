#pragma once
#include <stdio.h>
#include <string.h>

#define MAX 100
#define MAX_NAME 20
#define MAX_SEX 10
#define MAX_TELE 12
#define MAX_ADDR 20

//�˵�
void menu();

//����ṹ�塪ͨѶ¼��Ա��Ϣ
struct peoinfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR]; 
};

//����ͨѶ¼
typedef struct contact
{
	struct peoinfo date[100];
	int count;
}contact;

//��ʼ��ͨѶ¼
void InitContact(contact* pc);

//��ӳ�Ա
void Add_peo(contact* pc);

//ɾ����Ա
void Del_peo(contact* pc,char name[]);

//���ҳ�Ա
int FindPeo(contact* pc,char name[]);

//��ʾͨѶ¼��Ա
void showPeo(contact* pc);

//�޸�ͨѶ¼��Ա
void modifyPeo(contact* pc, char name[]);