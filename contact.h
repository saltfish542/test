#pragma once
#include <stdio.h>
#include <string.h>

#define MAX 100
#define MAX_NAME 20
#define MAX_SEX 10
#define MAX_TELE 12
#define MAX_ADDR 20

//菜单
void menu();

//定义结构体—通讯录成员信息
struct peoinfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR]; 
};

//创建通讯录
typedef struct contact
{
	struct peoinfo date[100];
	int count;
}contact;

//初始化通讯录
void InitContact(contact* pc);

//添加成员
void Add_peo(contact* pc);

//删除成员
void Del_peo(contact* pc,char name[]);

//查找成员
int FindPeo(contact* pc,char name[]);

//显示通讯录成员
void showPeo(contact* pc);

//修改通讯录成员
void modifyPeo(contact* pc, char name[]);