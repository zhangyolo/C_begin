#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>


//*****************重点理解
int main() {

	//数组名表示首元素的低地址
	//sizeof(数组名)  这里表示整个数组
	//&数组名  也表示整个数组
	//  4/8主要取决于平台
	// 	   地址大小都是4个字节
	//整型数组
	/*int a[] = { 1,2,3,4 };
	printf("%d\n", sizeof(a));  //16 //计算数组总大小，单位字节
	printf("%d\n", sizeof(a+0));//4 /8 //数组名这里表示首元素的值，a+0还是首元素
	printf("%d\n", sizeof(*a));//4  //首元素地址，*a首元素
	printf("%d\n", sizeof(a+1));//4  //首元素地址，a+1表示第二个元素
	printf("%d\n", sizeof(a[1]));//4  //第二个元素
	printf("%d\n", sizeof(&a));//4/8  //&a取出的是整个数组的地址，但是数组的地址也是地址
	printf("%d\n", sizeof(*&a));//16   //计算数组大小
	printf("%d\n", sizeof(&a+1));//4   //虽然跳过了整个数组，但还是一个地址
	printf("%d\n", sizeof(&a[0]));//4   //表达第一个元素地址
	printf("%d\n", sizeof(&a[0]+1));//4  //表示第二个元素地址
	*/


	//字符数组
	///char类型，每个元素一个字节
	/*
	char arr[] = { 'a','v','y','e','g','j' };
	printf("%d\n", sizeof(arr));  //6   //整个数组的大小
	printf("%d\n", sizeof(arr+0));  //4 /8  //arr表示首元素的地址，arr+0还是首元素的地址，地址大小为4
	printf("%d\n", sizeof(*arr));  //1   表示首元素地址，*arr表示首元素，大小为一个地址
	printf("%d\n", sizeof(arr[1]));  //1
	printf("%d\n", sizeof(&arr));  //4/8
	printf("%d\n", sizeof(&arr+1)); //4/8   跳过整个数组的大小
	printf("%d\n", sizeof(&arr[0]+1)); //4/8  第二个元素的地址


	//strlen()计算字符串以\0结束的长度，不包括\0
	//strlen()给定一个地址，输出地址后的内容直到遇到\0
	printf("%d\n", strlen(arr));  //随机值
	printf("%d\n", strlen(arr + 0)); //随机值
	//printf("%d\n", strlen(*arr));  //err
	//printf("%d\n", strlen(arr[1]));   //1err
	printf("%d\n", strlen(&arr));  //随机值
	printf("%d\n", strlen(&arr + 1));  //随机值-6  跳过整个数组
	printf("%d\n", strlen(&arr[0] + 1)); //随机值-1
	*/


	/*
	char arr[] = "asdfgd";
	printf("%d\n",sizeof(arr));  //7  //包括了\0的空间
	printf("%d\n",sizeof(arr + 0)); //4/8 首元素地址的大小
	printf("%d\n",sizeof(*arr));  //1 首元素大小  ，*i解除了取地址的作用，得到元素本身内容
	printf("%d\n",sizeof(arr[1]));  //1  第二个元素的大小
	printf("%d\n",sizeof(&arr));  //4/8
	printf("%d\n",sizeof(&arr + 1));  //4/8
	printf("%d\n",sizeof(&arr[0] + 1)); // 4/8 第二个元素的地址大小

	printf("%d\n",strlen(arr));  //6
	printf("%d\n",strlen(arr + 0)); //6
	//printf("%d\n",strlen(*arr));  //err  *arr =a 97这样就把97作为地址，就会形成非法访问空间
	//printf("%d\n",strlen(arr[1]));  //err   类似
	printf("%d\n",strlen(&arr));  // 6
	//&arr 数组的地址-数组指针 char(*p)[7]=&arr;  即&arr的类型是char(*)[7]
	//但是strlen（）的参数类型是 const char*
	//两个类型不一致，会有警告，但是不会报错
	printf("%d\n",strlen(&arr + 1));  //随机值  看下一个数组的大小
	printf("%d\n",strlen(&arr[0] + 1)); // 5
	*/



	char *p = "asdfgd";//常量字符串  只将a的地址放入指针p中，
	printf("%d\n", sizeof(p));  //4  计算指针变量p的大小
	printf("%d\n", sizeof(p + 1)); //4/8 得到字符b的地址，地址都是4个字节
	printf("%d\n", sizeof(*p));  //1   *p=a; 
	printf("%d\n", sizeof(p[0]));  //1  第一个元素的大小     arr[0]==*(arr+0）  p[0]=*(p+0)
	printf("%d\n", sizeof(&p));  //4/8
	printf("%d\n", sizeof(&p + 1));  //4/8
	printf("%d\n", sizeof(&p[0] + 1)); // 4/8 第二个元素的地址大小



	printf("%d\n", strlen(p));  //6  计算指针变量p的大小
	printf("%d\n", strlen(p + 1)); //5 p只存放a的地址，p+1指向下一个元素的地址
	//printf("%d\n", strlen(*p));  ////err
	//printf("%d\n", strlen(p[0]));  //err  
	//strlen()的参数只能传一个地址，不可以传递单独内容，否则会将其视为地址，从而导致访问FIFA地址
	printf("%d\n", strlen(&p));  
	//随机值  &p是指针p本身的地址
	//strlen（）通过&p去访问p指向的内容(a的地址),所以p中存放的是a的地址，所以strlen（）读取字符长度的死后，由于内存是小端存放，所以直到读取到\0才会停止计算长度，所以随机
	
	printf("%d\n", strlen(&p + 1));  //随机 值   &p取出整个的地址，&p+1指向另一个数组，
	printf("%d\n", strlen(&p[0] + 1)); // 5 第二个元素开始

}