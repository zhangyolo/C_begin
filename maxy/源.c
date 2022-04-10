#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
//辗转相除求最大公因子
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



//打印闰年
//1、能被4整除，但是不能被100整除是闰年；
//2、能被400整除是闰年；
//int main() {
//	int year = 0;
//	for (year = 1000; year <= 2000; year++) {
//		if (year % 4 == 0 && year % 100 != 0) {
//			printf("%d闰年\n", year);
//		}
//		else if(year%400==0)printf("%d闰年\n", year);
//	}
//}

/*
int main() {
	int year = 0;
	int count = 0;
	for (year = 1000; year <= 2000; year++) {
		if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
			printf("%d闰年\n", year);
			count++;
		}
		;
	}printf("%d个闰年\n", count);
}*/


//判断是否为素素
// 判断到一半，或者判断的到平方根个，或者去掉偶数或者挨个遍历
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
//				//printf("%d不是素素\n", i);
//				break;
//			}
//		}
//		if(j == i) 
//		{	printf("%d是素素\n",i);
//			count++;}
//	}
//	printf("%d", count);
//}

//int main() {
//	int i = 0;
//	int j;
//	int count = 0;
//	for (i = 101; i <= 200; i+=2) {
//		for (j = 2; j <= sqrt(i); j++)//直接缩短了一半的检索范围
//		{
//			if (i % j == 0)
//			{
//				//printf("%d不是素素\n", i);
//				break;
//			}
//		}
//		if (j > sqrt(i))
//		{
//			printf("%d是素素\n", i);
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
//		for (j = 2; j <= i/2; j++)//直接缩短了一半的检索范围
//		{
//		if (i % j == 0)
//			{
//			//printf("%d不是素素\n", i);
//			break;
//			}
//		}
//		if (j > sqrt(i))
//		{
//			printf("%d是素素\n", i);
//			count++;
//		}
//	}
//	printf("%d", count);
//}

