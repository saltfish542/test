#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>
#include <string.h>
////实现strcpy函数
//void my_strcpy(char* str2,const char* str1)
//{
//	assert(str1);
//	assert(str2);
//	while (*str1 != '\0')
//	{
//		*str2 = *str1;
//		str1++;
//		str2++;
//	}
//	*str2 = '\0';
//}
//
//int main()
//{
//	char str1[] = "abcdef";
//	char str2[20];
//	my_strcpy(str2, str1);
//	printf("%s\n", str2);
//}

////实现strcat函数
//char* my_strcat(char* str1,const char* str2)
//{
//	assert(str1);
//	assert(str2);
//	char* ret = str1;
//	while (*str1 != '\0')
//		str1++;
//	while(*str2!='\0')
//	{ 
//		*str1 = *str2;
//		str1++;
//		str2++;
//	}
//	return ret;
//}
//int main()
//{
//	char str1[20] = "hello ";
//	char str2[] = "world!";
//	my_strcat(str1, str2);
//	printf("%s\n", str1);
//	return 0;
//}

////实现strcmp
//int my_strcmp(const char* str1,const char* str2)
//{
//	assert(str1 && str2);
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//			return 0;
//		str1++;
//		str2++;
//	}
//	//if (*str1 > *str2)
//	//	return 1;
//	//else
//	//	return -1;
//	return *str1 - *str2;
//}
//int main()
//{
//	char str1[] = "abcd";
//	char str2[] = "abcdef";
//	//int ret = strcmp(str1,str2);
//	int ret = my_strcmp(str1, str2);
//	if (ret < 0)
//		printf("<\n");
//	else if (ret == 0)
//		printf("==\n");
//	else
//		printf(">\n");
//	return 0;
//}

////实现strstr函数
//char* my_strstr(const char* str1,const char* str2)
//{
//	char* s1 = str1;
//	char* s2 = str2;
//	char* p = str1;
//	while (*p != '\0')
//	{
//		s1 = p;
//		s2 = str2;
//		while (*s1 == *s2 && *s1 != '\0' && *s2 != '\0')
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//			return p;
//		p++;
//	}
//	return NULL;
//}
//int main()
//{
//	char str1[] = "abbcdef";
//	char str2[] = "bcd";
//	char* ret = my_strstr(str1, str2);
//	printf("%s", ret);
//	return 0;
//}