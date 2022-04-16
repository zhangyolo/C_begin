#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//函数中有输入输出，必须调用此头文件

//int main() {
//	int a = 5 / 2;   //2
//	double b = 5 / 2.0;  //2.50000
//	double c = 5 % 2;  ///%两边必须是整型
//}



//右移 有算术，逻辑右移
//int main() {
//	//int a = -16;
//	//int b=a >> 1;
//	//printf("%d\n", a);//-16
//	//printf("%d\n", b);//-8  说明这里采用的是算术右移，高为补符号位
//	//整数的二进制有原码、补码、反码
//	//在计算机中存储的是补码，打印原码
//	//正数的原码、补码、反码都一致；
//
//	int a = -1;
//	//10000000 00000000 00000000 00000001  原码
//	//11111111 11111111 11111111 11111110  反码
//	//11111111 11111111 11111111 11111111  补码
//	//
//	int b = a >> 1;//a右移之后，高位补符号位1
//	printf("%d\n", a);//-1
//	printf("%d\n", b);//-1 说明这里采用的是算术右移，高为补符号位，打印原码还是-1
//
//	return 0;
//}



//左移操作符，左边丢弃，右边补0
//int main() {
//	int a = 5;
//	printf("%d\n", a);  //5
//	printf("%d\n", a<<1);//10
//	
//}

//int main() {
//	int a = 3;
//	int b = 5;
//	//按二进制位与& 全为1则为1
//	int c = a & b;
//	printf("%d\n", c);//1
//
//
//	//按二进制位或
//	int d = a|b;
//	printf("%d\n", d);//7
//
//
//	//按位异或  同0异1
//	int e = a ^ b;
//	printf("%d\n", e);//6
//}


//计算补码中的1的个数
//int main() {
//	int num = 0;
//	int count = 0;
//	scanf("%d", & num);
//	//-1的补码有32位
//	for (int i = 0; i < 32; i++) {
//		//因为二进制有32位
//		if (1 == ((num >> i) & 1))
//			count++;
//	}
//	printf("%d", count);
//}



//int main() {
//
//	//int a = 0;
//	//char b= 'f';
//	//int arr[10] = { 0 };
//	//printf("%d\n", sizeof(a));
//	//printf("%d\n", sizeof a);
//	//printf("%d\n", sizeof(int));
//
//	//printf("%d\n", sizeof(b));  //1
//	//printf("%d\n", sizeof(char));  //1
//
//	//printf("%d\n", sizeof(arr)); //40
//	//printf("%d\n", sizeof(int [10]));//40 
//
//
//
//	//short类型的空间大小有2个字节
//	int v = 9;
//	short s = 0;
//	printf("%d\n", sizeof( s = v + 5));//2
//	printf("%d\n", s);//0
//	printf("%d\n", sizeof s);//2
//}


//int main() {
//	//int a = 0; 
//	//00000000 00000000 00000000 00000000 a
//	//11111111 11111111 11111111 11111111 ~a的补码，a的取反
//	//10000000 00000000 00000000 00000001 ~a的原码
//	//
////	printf("%d\n", ~a);  //-1，存放补码，打印原码
//
//
//	int a = 11;
//	a = a | (1 << 2);
//	printf("%d\n", a); //将a置为15；
//
//	 a=a& (~(1 << 2));
//	printf("%d\n", a);  ///还原a最开始的值11
//
//}



int main() {
	int i = 0, a = 0, b = 1, c = 2, d = 3;
	//i = a++ && ++b && d++;
	//printf("%d%d%d%d%d\n", a, b, c, d, i);//11230
	//a++表示先使用a，在进行加一
	a = 1;
	i = a++ || ++b || d++;
	printf("%d%d%d%d%d\n", a, b, c, d, i);//2,1,2,3,1


}