#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>//system
#include<limits.h>
#include<string.h>//strcmp
//int main() {
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//	again:
//	printf("���ĵ��Լ����ػ�");
//	scanf("%s", &input);
//	if (!strcmp(input, "������"))  //�����ַ������Ϊ0
//		system("shutdown -a");
//	else {
//		goto again;
//	}
//	return 0;
//}

int main() {
	printf("������������");
	int n = 0;
	char pass[23] = { 123456 }  ;
	char pwd[23] = { 0 };
	
	while (n < 3) {
		scanf("%s", &pwd);
		if ((strcmp(pass, pwd)))
		{
			printf("��¼�ɹ�");
			break;
		}
		else
			printf("���������������������");
		n++;
	}
	if (n == 3)printf("��������������˳�����"); 
}