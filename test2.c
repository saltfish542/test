#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
////ʵ��memcpy
//void* my_memcpy(void* dest, const void* scr, size_t num)
//{
//	assert(dest && scr);
//	void* ret = dest;
//	while (num--)
//	{
//		*(char*)dest = *(char*)scr;
//		dest=(char*)dest + 1;
//		scr = (char*)scr + 1;
//	}
//	return ret;
//}
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7 };
//	int arr2[20] = { 0 };
//	my_memcpy(arr2, arr1, sizeof(arr1));
//	return 0;
//}

////ʵ��memmove
//void* my_memmove(void* dest,const void* scr,int num)
//{
//	assert(dest && scr);
//	void* ret = dest;
//	while (num--)
//	{
//		if (dest > scr)
//		{
//			*((char*)dest + num) = *((char*)scr + num);
//		}
//		else if (dest < scr)
//		{
//			*((char*)dest ) = *((char*)scr );
//			dest = (char*)dest + 1;
//			scr = (char*)scr + 1;
//		}
//	}
//	return ret;
//}
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9 };
//	my_memmove(arr1+2 , arr1, 20);
//	for (int i = 0; i < 9; i++)
//		printf("%d\t", arr1[i]);
//	return 0;
//}

////С���ָ�����
//void my_guess(int num)
//{
//	int i =0;
//	int k = 0;
//	int j = 1;
//	while (num)
//	{
//		i = num % 10;
//		k = (i % 2) *j+ k;
//		j *= 10;
//		num /= 10;
//	}
//	printf("%d",k);
//	/*int i = 1;
//	int k = 0;
//	int j = num/10;
//	while (j)
//	{
//		i *= 10;
//		j /= 10;
//	}
//	do
//	{
//		k = num / i;
//		if (k % 2 == 0)
//			printf("0");
//		else
//			printf("1");
//		i /= 10;
//	} while (i);*/
//}
//int main()
//{
//	int num;
//	printf("������һ��������");
//	scanf("%d", &num);
//	my_guess(num);
//	return 0;
//}

////���ո�ֱ��������ͼ��
//void my_print(int num)
//{
//	int i = 1;
//	for (i = 1; i <= num; i++)
//	{
//		for (int j = 0; j < (num - i)*2; j++)
//			printf(" ");
//		for (int k = 1; k <= i; k++)
//		{
//			printf(" *");
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int num;
//	printf("������ֱ�Ǳ߳��ȣ�");
//	scanf("%d", &num);
//	my_print(num);
//	return 0;
//}

//������˫ʮһ�����ۣ�˫ʮ������ۣ����Żݼۼ���ʮ
int main()
{
	float price;
	int mon, day, y;
	printf("�������·��۸�");
	scanf("%f", &price);
	printf("�������������ڣ�");
	scanf("%d %d", &mon, &day);
	printf("�������Ƿ����Żݼ�>\n1.��  0.û��\n");
	scanf("%d", &y);
	if (mon == 11 && day == 11)
		price = price * 0.7;
	else if (mon == 12 && day == 12)
		price = price * 0.8;
	if (y == 1)
		price = price - 50;
	printf("�·����۸�Ϊ��%.2f", price);
	return 0;
}