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
/*int main() {
	int a = 3;
	int b = 5;
	printf("%d %d\n", a, b);
	int c;
	c = a;
	a = b;
	b = c;

	printf("%d %d", a, b);
}*/


void swap1(int a,int b) {
	int p=0;
	p = a;
	a = b;
	b = p;
}

void swap2(int* a, int* b) {
	int p=0;
	p =*a;
	*a = *b;
	*b = p;
}


void swap3(int* a, int* b) {//虽然这里是交换了指针，达到交换数据的作用，但是由于主函数的输出不是使用指针指向，所以主函数的值未交换

	int *p ;
	p = a;
	a = b;
	b = p;
}
int main() {
	int a, b;
	a = 10; b = 23;
	printf("%d%d\n", a,b);
	//swap1(a, b);//这里是传值，但是原值还是没有交换
	//printf("%d%d\n", a, b);
	//swap2(&a,&b);//这里是传地址，将指针的指向交换，达到数值交换的作用
	//printf("%d%d\n", a, b);
	swap3(&a, &b);//这里是没有交换
	printf("%d%d\n", a, b);
}