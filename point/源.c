#define  _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
//int main() {
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(double*));
//	//以上打印都是4个字节，在32位平台上指针的大小位4个字节
//	return 0;
//}

//int main() {
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = &a;
//
//	//int型指针一步走4个字节
//	printf("%p\n", pa);
//	printf("%p\n", pa + 1);
//
//
//	//char型指针一步走1个字节
//	printf("%p\n", pc);
//	printf("%p\n", pc + 1);
//
//}


//int main() {
//	int arr[10] = { 0 };
//	//char*p = arr;//数组名就是数组的首地址
//	int* p = arr;  //指针+1.向后移动4个字节
//	for (int i = 0; i < 10; i++) {
//		*(p + i) = 1;
//	}
//	for (int i = 0; i < 10; i++) {
//		printf("%d", arr[i]);
//	}
//	return 0;
//}



int* test() {
	int a = 10;
	printf("%p\n", &a);
	return &a;


}
//int main() {
//	//int* p;//局部的指针变量，若没有初始化，将是随机值
//	//*p = 20;
//
//	int* d = NULL;//指针变量初始化；
//	*d = 80;//这里访问错误，因为d是空地址，其地址不可访问
//	int* q = test();
//	printf("%d\n", *q);
//	printf("%p\n", &q);
//	*q = 20;
//	printf("%d\n", *q);
//	printf("%p\n", &q);
//
//}

//int main() {
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]);i++){
//		printf("%d ", *p);
//		p = p + 1;
//	}
//	return 0;
//}




//求字符串的长度
//int my_strlen(int* d) {
//	char* start = d;
//	char* end = d;
//	while (*end != '\0') {
//		end++;
//	}
//	return end - start;
//}
//
//int main() {
//	char arr[] = "biy";
//	int len = my_strlen(arr);
//	printf("%d", len);
//
//	int s[4] = { 1,2,3,4 };
//	//数组s的长度=s[4]-s[0];
//	int*o = s;
//	for (int i = 0; i <= s[3] - s[0]; i++) {
//		printf("%d ", *o);
//		o++;
//	}
//}


//int main() {
//	int arr[10] = { 0 };
//	int* p = arr;
//	for (int i = 0; i < 10; i++) {
//		printf("%p======%p\n", p + i, &arr[i]);//查看地址，两种方式的结构一样
//
//	}
//	for (int i = 0; i < 10; i++) {
//		*(p + i) = i;//将数组赋值位123456……
//	}
//	return 0;
//}



//二级指针
//int main() {
//	int a = 10;
//	int* pa = &a;
//	int** ppa = &pa;//二级指针
//	printf("%d ", **ppa);//10
//}



//指针数组-数组 存放指针的数组
//数组指针-指针
int main() {
	int a = 0; int b = 9;
	int arr[10];
	int* arr2[10] = { &a,&b };

	printf("%d", *&a);//0  *&a=a

	for (int i = 0; i < 2; i++) {
		printf("%d ",*(arr2[i]));  //0 9
	}

}
	
