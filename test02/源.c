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
//	int a = 11;//4���ֽ�
//	int b=a << 1;
//	printf("%d\n%d\n", a,b);//a��λ֮�󣬱���ֵ����
//}



//�������ڴ��д洢��ʱ�򣬴洢���Ƕ����ƵĲ���
////��ӡ������ʱ������ԭ��
//int main() {
//	int a = -2;
//	int b = ~a;
//	printf("%d\n", a);
//
//	printf("%d\n", b);
//}


//static���ξֲ�������ʹ�����������ڱ߳�
//static����ȫ�ֱ�����
//void test() {
//	//int s = 1;//2 2 2 2 2
//	static int s = 1; //2 3 4 5 6 
//	//static�Ǿֲ�������������һ�ε�ֵ
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


////static����ȫ�ֱ������ı���������������ֻ�����䶨�� ��Դ�ļ��ڲ�ʹ�ã�
//int main(){
//	extern int g_val;
//	printf("%d", g_val);
//}

//static�ı��˺������������ԣ�ʹ���ⲿ�������øú������ɹ�
////������һ���ⲿ����
//extern int ADD(int, int);
//int main() {
//	int a, b;
//	a = 2; b = 23;
//	printf("%d", ADD(a, b));
//}


////���ú궨�庯����
//#define MAX(X,Y) (X>Y?X:Y)
//#define ADD(a,b) ((a)+(b))
//int main() {
//	int a, b;
//	a = 3; b = 45;
//	printf("%d\n%d", MAX(a, b),ADD(a,b));
//}


//int sum(int s) {
//	int c = 0;
//	static int b = 3;  //static������һ�ε�ֵ
//	c += 1;//ÿ�ν����������֮��c��ֵ����1
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