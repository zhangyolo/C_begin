#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
//շת������������
//int main() {
//	int s = 24;
//	int b = 18;
//	int r;
//	while (r=s%b) {
//		// r = s% b;
//		s = b;
//		b = r;
//	}
//	printf("%d", b);
//}



//��ӡ����
//1���ܱ�4���������ǲ��ܱ�100���������ꣻ
//2���ܱ�400���������ꣻ
//int main() {
//	int year = 0;
//	for (year = 1000; year <= 2000; year++) {
//		if (year % 4 == 0 && year % 100 != 0) {
//			printf("%d����\n", year);
//		}
//		else if(year%400==0)printf("%d����\n", year);
//	}
//}

/*
int main() {
	int year = 0;
	int count = 0;
	for (year = 1000; year <= 2000; year++) {
		if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
			printf("%d����\n", year);
			count++;
		}
		;
	}printf("%d������\n", count);
}*/


//�ж��Ƿ�Ϊ����
// �жϵ�һ�룬�����жϵĵ�ƽ������������ȥ��ż�����߰�������
//https://blog.csdn.net/qq_36474990/article/details/82344454
//int main() {
//	int i = 0;
//	int j;
// int count=0;
//	for (i = 100; i <= 200; i++) {
//		for (j = 2; j <i; j++)
//		{
//			if (i % j==0)
//			{
//				//printf("%d��������\n", i);
//				break;
//			}
//		}
//		if(j == i) 
//		{	printf("%d������\n",i);
//			count++;}
//	}
//	printf("%d", count);
//}

//int main() {
//	int i = 0;
//	int j;
//	int count = 0;
//	for (i = 101; i <= 200; i+=2) {
//		for (j = 2; j <= sqrt(i); j++)//ֱ��������һ��ļ�����Χ
//		{
//			if (i % j == 0)
//			{
//				//printf("%d��������\n", i);
//				break;
//			}
//		}
//		if (j > sqrt(i))
//		{
//			printf("%d������\n", i);
//			count++;
//		}
//	}
//	printf("%d",count);
//}
//
//


//int main() {
//	int i = 0;
//	int j;
//	int count = 0;
//	for (i = 99; i <= 200; i+=2) {
//		for (j = 2; j <= i/2; j++)//ֱ��������һ��ļ�����Χ
//		{
//		if (i % j == 0)
//			{
//			//printf("%d��������\n", i);
//			break;
//			}
//		}
//		if (j > sqrt(i))
//		{
//			printf("%d������\n", i);
//			count++;
//		}
//	}
//	printf("%d", count);
//}

