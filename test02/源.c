#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//int main() {
//	char s[] = "abc";
//	char d[] = { 'a','b','c','\0'};
//	printf("%d\n", strlen(s));
//	printf("%d\n", strlen(d));
//	printf("%s\n", s);
//	printf("%s\n", d);
//	printf("%d\n", strlen("c:\test\32\test.c"));//13
//	printf("%s\n", "c:\test\32\test.c");
//	printf("%s\n", "\x61");
//}

//int main() {
//	int a = 11;//4个字节
//	int b=a << 1;
//	printf("%d\n%d\n", a,b);//a移位之后，本身值不变
//}



//负数在内存中存储的时候，存储的是二进制的补码
////打印出来的时候是其原码
//int main() {
//	int a = -2;
//	int b = ~a;
//	printf("%d\n", a);
//
//	printf("%d\n", b);
//}


//static修饰局部变量，使他的生命周期边长
//static修饰全局变量，
//void test() {
//	//int s = 1;//2 2 2 2 2
//	static int s = 1; //2 3 4 5 6 
//	//static是局部变量，保存上一次的值
//	s++;
//	printf("%d\n", s);
//}
//int main() {
//	int i = 0;
//	while (i < 5) {
//		test();
//		i++;
//	}
//	return 0;
//
//}


////static修饰全局变量，改变了其作用域，让其只能在其定义 的源文件内部使用，
//int main(){
//	extern int g_val;
//	printf("%d", g_val);
//}

//static改变了函数的链接属性，使得外部函数调用该函数不成功
////先声明一个外部函数
//extern int ADD(int, int);
//int main() {
//	int a, b;
//	a = 2; b = 23;
//	printf("%d", ADD(a, b));
//}


////利用宏定义函数，
//#define MAX(X,Y) (X>Y?X:Y)
//#define ADD(a,b) ((a)+(b))
//int main() {
//	int a, b;
//	a = 3; b = 45;
//	printf("%d\n%d", MAX(a, b),ADD(a,b));
//}


//int sum(int s) {
//	int c = 0;
//	static int b = 3;  //static保存上一次的值
//	c += 1;//每次进入这个函数之后，c的值都是1
//	b += 2;
//	return (s + b + c);
//}
//int main() {
//	int a = 2;
//	for (int i = 0; i < 5; i++) {
//		printf("%d", sum(a))
//			;
//	}
//}