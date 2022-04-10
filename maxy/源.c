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



//1到100共出现几个九，这里要注意个位数和十位数是如何获取的。整除和模的运算
//int main() {
//	int i = 0;
//	int cnt = 0;
//	for (i = 0; i <= 100; i++) {
//		if (i % 10 == 9)cnt++;
//		if ((i / 10) == 9)cnt++;
//	}
//	printf("%d", cnt);
//}



////计算1/1-1/2+1/3+……+1/100
//int main() {
//	int i = 0;
//	double sum = 0;
//	//for (i = 1; i <= 100; i++) {
//	//	if (i % 2 == 0) {
//	//		sum = sum - 1.0 / i;
//	//	}
//	//	else sum += 1.0 / i;   //  /两边的数据类型要求一致
//	//}
//
//	int flag = 1;
//	for (i = 1; i <= 100; i++) {
//		sum += flag * 1.0 / i;
//		flag = -flag;
//	}
//	printf("%f", sum);
//}



////求一个数组中的最大值，先假定ige数组中的第一个为最大值，然后依次和数组中的数相比较，然后再进行交换；
//int main() {
//	int s[10];
//	for (int i = 0; i < 10; i++) {
//		scanf("%d", &s[i]); //注意这里的取地址符号不能少，但是当整个数组时，这里的&是可以省略的，应为数组开头就是一个地址
//	}
//	int max = s[0];
//	for (int i = 0; i < 10; i++) {
//		if (s[i] > max) max = s[i];
//	}
//
//	printf("%d", max);
//}

//打印乘法口诀表，其中%2d是打印的时候向右靠齐；而%-2d则是向左靠齐
int main() {
	int i, j;
	for (i = 1; i <= 9; i++) {
		for (j = 1; j <= i; j++) {
			printf("%d*%d=%-2d ", i, j, i*j);
			//if (j == i)printf("\n");
		}
		printf("\n");

	}
}