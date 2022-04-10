#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//交换两个变量，但是不能有临时变量
//之前总是利用临时变量，完全没有想到有这种思想，定势思维严重
//但是这种算法，有个缺陷，当两个数的和超出了该类型的范围，就会导致交换错误
//int main() {
//	int a = 3;
//	int b = 5;
//	printf("%d %d\n", a, b);
//	a = a + b;
//	b = a - b;
//	a = a - b;
//
//	printf("%d %d", a,b);
//}



/*
//通过异或运算实现交换，这种算法不会导致溢出，但可读性差，效率最低
int main() {
	int a = 3;
	int b = 5;
	printf("%d %d\n", a, b);
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;

	printf("%d %d", a,b);
}
*/


//通过临时变量，可读性好，效率高
int main() {
	int a = 3;
	int b = 5;
	printf("%d %d\n", a, b);
	int c;
	c = a;
	a = b;
	b = c;

	printf("%d %d", a, b);
}