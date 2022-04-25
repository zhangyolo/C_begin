#define  _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
int fib(int n) {
	int a = 1; int b = 1;
	int c = 0;
	while (n > 2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;

}
int main() {
	int n = 5;
	printf("¿˚”√—≠ª∑£∫%d\n", fib(5));
}