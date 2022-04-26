#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>

////
// /////
//*****************重点理解sizeof,strlen
//int main() {
//
//	//数组名表示首元素的低地址
//	//sizeof(数组名)  这里表示整个数组
//	//&数组名  也表示整个数组
//	//  4/8主要取决于平台
//	// 	   地址大小都是4个字节
//	//整型数组
//	/*int a[] = { 1,2,3,4 };
//	printf("%d\n", sizeof(a));  //16 //计算数组总大小，单位字节
//	printf("%d\n", sizeof(a+0));//4 /8 //数组名这里表示首元素的值，a+0还是首元素
//	printf("%d\n", sizeof(*a));//4  //首元素地址，*a首元素
//	printf("%d\n", sizeof(a+1));//4  //首元素地址，a+1表示第二个元素
//	printf("%d\n", sizeof(a[1]));//4  //第二个元素
//	printf("%d\n", sizeof(&a));//4/8  //&a取出的是整个数组的地址，但是数组的地址也是地址
//	printf("%d\n", sizeof(*&a));//16   //计算数组大小
//	printf("%d\n", sizeof(&a+1));//4   //虽然跳过了整个数组，但还是一个地址
//	printf("%d\n", sizeof(&a[0]));//4   //表达第一个元素地址
//	printf("%d\n", sizeof(&a[0]+1));//4  //表示第二个元素地址
//	*/
//
//
//
//	//字符数组
//	///char类型，每个元素一个字节
//	/*
//	char arr[] = { 'a','v','y','e','g','j' };
//	printf("%d\n", sizeof(arr));  //6   //整个数组的大小
//	printf("%d\n", sizeof(arr+0));  //4 /8  //arr表示首元素的地址，arr+0还是首元素的地址，地址大小为4
//	printf("%d\n", sizeof(*arr));  //1   表示首元素地址，*arr表示首元素，大小为一个地址
//	printf("%d\n", sizeof(arr[1]));  //1
//	printf("%d\n", sizeof(&arr));  //4/8
//	printf("%d\n", sizeof(&arr+1)); //4/8   跳过整个数组的大小
//	printf("%d\n", sizeof(&arr[0]+1)); //4/8  第二个元素的地址
//
//
//	//strlen()计算字符串以\0结束的长度，不包括\0
//	//strlen()给定一个地址，输出地址后的内容直到遇到\0
//	//strlen（）不可以求整型数组的长度，sizeof可以
//	printf("%d\n", strlen(arr));  //随机值
//	printf("%d\n", strlen(arr + 0)); //随机值
//	//printf("%d\n", strlen(*arr));  //err
//	//printf("%d\n", strlen(arr[1]));   //1err
//	printf("%d\n", strlen(&arr));  //随机值
//	printf("%d\n", strlen(&arr + 1));  //随机值-6  跳过整个数组
//	printf("%d\n", strlen(&arr[0] + 1)); //随机值-1
//	*/
//
//
//	/*
//	char arr[] = "asdfgd";
//	printf("%d\n",sizeof(arr));  //7  //包括了\0的空间
//	printf("%d\n",sizeof(arr + 0)); //4/8 首元素地址的大小
//	printf("%d\n",sizeof(*arr));  //1 首元素大小  ，*i解除了取地址的作用，得到元素本身内容
//	printf("%d\n",sizeof(arr[1]));  //1  第二个元素的大小
//	printf("%d\n",sizeof(&arr));  //4/8
//	printf("%d\n",sizeof(&arr + 1));  //4/8
//	printf("%d\n",sizeof(&arr[0] + 1)); // 4/8 第二个元素的地址大小
//
//	printf("%d\n",strlen(arr));  //6
//	printf("%d\n",strlen(arr + 0)); //6
//	//printf("%d\n",strlen(*arr));  //err  *arr =a 97这样就把97作为地址，就会形成非法访问空间
//	//printf("%d\n",strlen(arr[1]));  //err   类似
//	printf("%d\n",strlen(&arr));  // 6
//	//&arr 数组的地址-数组指针 char(*p)[7]=&arr;  即&arr的类型是char(*)[7]
//	//但是strlen（）的参数类型是 const char*
//	//两个类型不一致，会有警告，但是不会报错
//	printf("%d\n",strlen(&arr + 1));  //随机值  看下一个数组的大小
//	printf("%d\n",strlen(&arr[0] + 1)); // 5
//	*/
//
//
//	/*char *p = "asdfgd";//常量字符串  只将a的地址放入指针p中，
//	printf("%d\n", sizeof(p));  //4  计算指针变量p的大小
//	printf("%d\n", sizeof(p + 1)); //4/8 得到字符b的地址，地址都是4个字节
//	printf("%d\n", sizeof(*p));  //1   *p=a; 
//	printf("%d\n", sizeof(p[0]));  //1  第一个元素的大小     arr[0]==*(arr+0）  p[0]=*(p+0)
//	printf("%d\n", sizeof(&p));  //4/8
//	printf("%d\n", sizeof(&p + 1));  //4/8
//	printf("%d\n", sizeof(&p[0] + 1)); // 4/8 第二个元素的地址大小
//
//	printf("%d\n", strlen(p));  //6  计算指针变量p的大小
//	printf("%d\n", strlen(p + 1)); //5 p只存放a的地址，p+1指向下一个元素的地址
//	//printf("%d\n", strlen(*p));  ////err
//	//printf("%d\n", strlen(p[0]));  //err  
//	//strlen()的参数只能传一个地址，不可以传递单独内容，否则会将其视为地址，从而导致访问FIFA地址
//	printf("%d\n", strlen(&p));  
//	//随机值  &p是指针p本身的地址
//	//strlen（）通过&p去访问p指向的内容(a的地址),所以p中存放的是a的地址，所以strlen（）读取字符长度的死后，由于内存是小端存放，所以直到读取到\0才会停止计算长度，所以随机
//	
//	printf("%d\n", strlen(&p + 1));  //随机 值   &p取出整个的地址，&p+1指向另一个数组，
//	printf("%d\n", strlen(&p[0] + 1)); // 5 第二个元素开始*/
//	
//	//二维数组
//	int arr[3][4] = { 0 };
//	printf("%d\n", sizeof(arr));  //3*4*4  //包括了\0的空间
//	printf("%d\n", sizeof(arr[0][0])); //4/8 首元素地址的大小
//	printf("%d\n", sizeof(arr[0]));  //4*4 
//	printf("%d\n", sizeof(arr[0]+1));  //4  a[0]+1第二个元素，不是第二行的地址
//	printf("%d\n", sizeof(*(arr[0]+1)));  //4  第二个元素大小为4个字节
//
//	printf("%d\n", sizeof(arr + 1));  //4  地址都是4个字节，  第二行地址
//	//arr是二维数组的数组名，没有sizeof(数组名),也没有&(数组名），所以arr是首元素地址
//	//把二维数组看是一维数组的时候，二维数组的首元素才是他的第一行，arr就是第一行（首元素）的地址
//	
//	printf("%d\n", sizeof(*(arr + 1))); // 4*4  4个4字节的第二行的内容
//	printf("%d\n", sizeof(&arr[0] + 1));  //4  第二行的地址
//	printf("%d\n", sizeof(*(&arr[0] + 1))); // 16
//	printf("%d\n", sizeof(*arr));  //4*4  arr第一行的地址，*arr第一行的大小
//	printf("%d\n", sizeof(arr[3]));  //16    sizeof()只是根据类型就算，这里不会真的访问计算rarr[3]的内容，而arr[3]已经越界
//
//	printf("%p\n", arr + 1);   //第二行地址
//	printf("%p\n", &arr[0] + 1);//前两的结果一致  第二行地址
//	printf("%p\n", arr[0] + 1);  //第二个元素地址
//	printf("%p\n", &arr[0][0]);   //第一个元素地址
//
//}

/**/

//*************指针面试题1
//int main() {
//	int a[5] = { 1,2,3,4,5 };
//	int* p = (int*)(&a + 1);//强制类型转换
//	printf("%d,%d\n", *(a + 1), *(p - 1));//2  5  //2 1err
//}




//*****************8view2
//假设p的值维0x100000,已知结构体Test变量的大小为20个字节
//struct Test {
//	int num;
//	char* pcname;
//	short Sdate;
//	char chaa[2];
//	short sBa[4];
//}*p;
//int main() {
//	//指针加一，是跳过指针类型的长度、
//	//指针类型决定了指针的步长
//	p = (struct Test*)0x100000;
//	printf("%p\n", p + 0x1);   //0x00100014
//	printf("%p\n", (unsigned long)p + 0x1);  //0x00100001
//	pritnf("%p\n", (unsigned int *)p + 0x1);  //0x00100004
//
//}


////view3
//int main() {
//	int a[4] = { 1,2,3,4 };
//	int* p = (int*)(&a + 1);
//	int* p2 = (int*)((int)a + 1);//数组是连续的，将数组首元素的地址转为整型加一
//	printf("%x,%x", p[-1], *p2);// 4，  2000000
//
//}


////view4  逗号表达式的使用
//int main() {
//	int a[3][2] = { (0,1),(2,3),(4,5) };
//	int* p;
//	p = a[0];
//	printf("%d ", p[0]);  //1
//}


////view5 注意打印格式，
//int  main() {
//	int a[5][5];
//	int(*p)[4];
//	p = a;
//	printf("%p,%d\n", &p[4][2] - &a[4][2],  &p[4][2] - &a[4][2]);//FFFFFFFC,-4
//}

//view6
//数组是连续存放的
//二维数组的首元素是指第一行，首元素的地址加一表示第二行
//
//int main() {
//	int aa[2][5] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* ptr1 = (int*)(&aa + 1);
//	int* ptr2 = (int*)(*(aa + 1));
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1)); 
//} 


//int arr[10]={1,2,3,4,5};
//int* p = arr;
//*(p + 2)==p[2]==arr[2]==*(arr+2);  //等价的



//view7
//int main() {
//	char* a[] = { "work","at","sdfadf" };
//	char** pa = a;//pa指向首元素的地址
//	//&a整个数组的地址
//	pa++;
//	printf("%s \n", *pa);
//}


//view8
//结合性
//注意指针++的时候，指针本身是在移动的
//而指针的相加将1，计算的是指针移动之后的，而指针本身的位置依然没变
int main() {
	//指针指向字符常量，指针中只存放首字母的地址
	char* c[] = { "enter","new","point","first" };
	char** cp[] = { c + 3,c + 2,c + 1,c };
	char*** cpp = cp;
	printf("%s\n", **++cpp);
	printf("%s\n", *--*++cpp+3);
	printf("%s\n", *cpp[-2]+3);
	printf("%s\n",cpp[-1][-1]+1);
	return 0;
}