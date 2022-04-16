#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


#include<stdlib.h>//当调用一些系统命令的时候

//int main() {
//	for (int i = 0; i < 10; i++) {
//		printf("%d ", i);
//	}
//	system("pause");//系统运行到这里的时候暂停
//	return 0;
//}

//int main() {
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	for ( i = 0; i <=12; i++) {
//		printf("hehe\\");
//		arr[i] = 0;
//	}
//	return 0;
//}



//求阶乘的和
//int main() {
//	int in = 0;
//	scanf("%d", &in);
//	int sum = 0;
//	for (int i = 0; i < in; i++) {
//		int ret = 1;
//		for (int j = 1; j < i; j++) {
//			ret = ret * j;
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//
//}


/*
void my_strcpy2(char* s, char* v,int l){
	int i = 0; 
	for (i = 0; i < l; i++) {
		s[i] = v[i];
	}

}
void my_strcpy1(char* s, char* v) {
	while (*s != '\0') {//这里面没有将结束符号拷贝过去
		//*s = *v;
		//s++;
		//v++;
		*s++ = *v++;
	}
	*s = *v;//再赋值一个结束符号

}
void my_strcpy3(char* s, char* v) {//优化
	if (s != NULL && v != NULL) {
		while (*s++ = *v++) {//这里面也将结束符号拷贝过去
			;
		}
	}
}

#include<assert.h>
void my_strcpy4(char* s, char* v) {//优化
	assert(s != NULL);//断言
	assert(v != NULL);//断言
	if (s != NULL && v != NULL) {
		while (*s++ = *v++) {//这里面也将结束符号拷贝过去
			;
		}
	}
}

char* my_strcpy5(char* s,const char* v) {//优化终极
	//避免将源和目的的位置写反了，即使写反了，也能发现错在哪里；因为const的变量不可以作为左值
	//同通过const修饰*p，这样p指向的地址中存放的值不允许修改了
	char*ret=s;
	assert(s != NULL);//断言
	assert(v != NULL);//断言
	while (*s++ = *v++) {//把V指向的字符串拷贝到S指向的空间，包括结束符号
		;
	}
	return ret;
}


int main() {
	char a[] = "########";
	char c[] = "bit4sdfu";
	int sc=sizeof(a) / sizeof(a[0]);//这里的长度计入了结束符号
	//strcpy(a, c);  //这是函数库里已有的拷贝字符的函数，如果要盗用，需要引入头文件，同时这个拷贝将结束符号也拷贝进去了
	//my_strcpy1(a,c);
	//my_strcpy2(a, c,sc);
	//my_strcpy3(a, c);
	// 	   
	//测试如果传入空指针，是否有解决方法，如果使空指针，就不破坏之前的内容
	//my_strcpy3(a, NULL);//打印原来a的内容

	my_strcpy4(a,NULL); //Assertion failed: v != NULL, file D:\C__代码\debug\源.c, line 72

	printf("%s\n", a);

	printf("%s\n", my_strcpy5(a,c));//链式访问，通过被调函数返回值作为另一个函数的参数

	printf(a);
}*/


//字符串长度的计算
//#include<assert.h>
//int my_strlen(const int* s) {//主函数传地址，所以形参为指针
//	int count = 0;
//	assert(*s != NULL);//断言，保证指针的有效性
//	while (*s != '\0') {
//		count++;
//		s++;
//	}
//	return count;
//}
//
//int main() {
//	int s[23] = "sdfs";
//	printf("%d", my_strlen(s));
//
//}





//const的理解
//int main() {
//	const int a = 9;
//	int* p = &a;
//	*p = 8;
//	printf("%d", a);//8
//	//但是这里不符合const变量的性质，const修饰的变量不可以修改；不可以通过*p改变原值
//
//	const int* q = &a;
//	//*q = 90;//因为指针*p被修饰为const，所以不允许修改，此处报错；
//	
//
//	int* const t = &a;
//	*t = 20;//这里没有报错，说明还是可以修改a的值，是因为const修饰的是t，不可以修改指针的指向
//	printf("%d", a);//20
//
//	int n = 23;
//	//t = &n;//这里报错，是因为指针t的值为const，不可以修改
//
//
//}