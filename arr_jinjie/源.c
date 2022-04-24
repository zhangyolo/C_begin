#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

/*
void test(int arr[]) {
	int se = sizeof(arr) / sizeof(arr[0]);
	printf("%d", se);  
	//32平台上输出1；int和32平台的指针都是4个字节； 1
	//64平台的指针8个字节/int的4个字节=2


}
int main() {
	int arr[] = { 1,3,5, 6 };
	test(arr);
	return 0;
}*/


///字符数组
//int main() {
///*	char arr[] = "sdfsd";
//	char* pp = arr;
//	//注意%s的作用
//	//arr和指针p都是指向首元素，但是%s会让系统一直打印，知道遇到\0
//	printf("%s\n", arr);  //sdfsd
//	printf("%s\n", pp);   //sdfsd
//	*/
//
//	char* p = "sdffda";//常量字符串   const char*p="sdfffds";这样表示易理解
//	//*p = 'c';此操作会报错，不可以修改常量
//	///这里式一个常量字符串；   只是把字符串的首字符的地址放到了指针p当中
//	//不是把字符串放到指针p当中 
//	printf("%c\n", *p);//s  说明指针p指向”sdffda“的首元素的地址，*pa=a
//	printf("%s\n", p);  //sdffda
//
//	return 0;
//}





//int main() {
//	//字符串常量再内存中存放的位置是固定的
//	char arr1[] = "dfsadf";//字符串常量
//	///arr1 = "sdfs";//这里报错”表达式的左值必须是可以修改的左值“ 说明arr中存放的是常量，不可以修改
//	char arr2[] = "dfuadf";
//
//	//pp1,pp2指向的是同一个常量字符串的首地址，这里的”dfsadf“只存放了一份，只是有两个指针指向它
//	//加上const修饰更能理解，易读
//	const char* pp1 = "dfsadf";
//	const char* pp2 = "dfsadf";
//
//	if (pp1 == pp2)//指针均指向同一个内容的地址，所以指针中存放的地址是相同的，但是指针本身在内存中的地址补同
//		printf("Sdfs");
//	else printf("Sdf");
//
//	/*if(arr1 == arr2)//虽然内容相同，但是地址不同
//		printf("Sdfs");
//	else printf("Sdf");*/
//
//	//如下的地址均是不同的
//	printf("%p\n", &pp1);
//	printf("%p\n", &pp2);
//	printf("%p\n", &arr1);
//	printf("%p\n", &arr2);
//
//}


////指针数组
//int main() {
//	int a[10] = { 0 }; //整型数组
//	char s[33] = { 0 };  //字符数组
//	int* ss[9];//存放整型指针的指针数组  ---指针数组
//	char* e[8];//存放字符指针的数组   ---指针数组
// int *p=NULL;//整型指针，指向整型的指针，可以存放整型的地址
// char *q=NULL;//字符指针，指向字符的指针，可以存放字符的地址
// //数组指针指向数组的指针，指向数组的地址
//  int arr[10]={1,2,3};
// int (*p)[10]=&arr;   //p为数组指针，保存数组的地址
//}



/*int main() {
	int a =9; int b = 7;
	int c = 7;
	int* arr[3] = { &a,&b,&c };
	for (int i = 0; i < 3; i++) {
		printf("%d " ,* (arr[i]));
	}
	return 0;
}*/
	



//int main() {
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = {
//		1,2,3,4,5,
//	};
//	int arr3[] = {
//		3,4,5,6,7
//	};
//
//	int* p[] = { arr1,arr2,arr3 };
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 5; j++) {
//			printf("%d ", *(p[i] + j));
//		}
//		printf("\n");
//	}
//}


//数组指针
//int main() {
//	char arr1[5] = { 2,3,4,5,6 };
//	char (*P)[5] = &arr1;
//	//arr1是指数组首元素的地址
//	//&arr1是指真个数组空间的地址
//
//	char* arr2[5];
//	char*(*P)[5] = &arr2;
//	return 0;
//}

//int main() {
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	int* q = arr;
//	int(*p)[10] = &arr;
//	for (int i = 0; i < 10; i++) {
//		//一下三种均正确，
//		printf("%d ", (*p)[i]);
//		printf("%d ", *(*p + i));  
//		printf("%d ", *(q + i));
//	}
//}



//数组指针二维的使用
//void print1(int a[3][5],int x,int y) {//参数为数组
//	for (int i = 0; i < x; i++) {
//		for (int j = 0; j < y; j++) {
//			printf("%d ", a[i][j]);
//		}
//
//		printf("\n");
//	}
//}
//void print2(int(*p)[5], int x, int y) {//参数为指针
//	for (int j = 0; j < x; j++) {
//
//		for (int i = 0; i < y; i++) {
//			//一下四种均相同
//			printf("%d ", *(*(p + j)+i));
//		/*	printf("%d ",p[j][i]);
//			printf("%d ", *(p[j] + i));
//			printf("%d ",(*(p+j))[i]);*/
//		}
//		printf("\n");
//	}
//}
//
//int main() {
//	int arr[3][5] = { {1,2,3,4,5},{1,3,4,5,2},{5,6,7,8,8} };
//	//print1(arr, 3, 5);
//	print2(arr, 3, 5);
//	//这里传递的是第一行的地址，二维数组的首元素地址指的是第一行的地址；传参数传地址的话，可以使用指针来接受
//
//	//int arr[10] = { 4,5,6,7,8,9,5,4,3,2 };
//	//int* p = arr;
//	//for (int i = 0; i < 10; i++) {
//	//	/*printf("%d ", *(arr + i));
//	//	printf("%d ", *(p + i));
//	//	printf("%d ", arr[i]);*/
//	//	printf("%d ",p[i]);
//	//}
//}
//



//回顾
//int main() {
//	//字符指针
//	char ch = 'i';
//	char* p = &ch;
//	const char* p2 = "dfs";
//
//	//指针数组 --存放指针的数组
//	int* arr[10];
//	char* ch[9];
//
//	//整型指针
//	int* p3;
//
//
//	int arr2[5];
//	//pa是一个数组指针。其类型是 int(*)[5];
//	int(*pa)[5] = &arr2;
//	return 0;
//
//}


//二维数组传参数
//参数只能省略行号
//void test(int arr[3][5]) {}
////void test1(int arr[][]) {} //err 
////void test2(int arr[3][]) {}  //err
//void test3(int arr[][4]) {}
//
//void test4(int** arr) {}  //err指针类型不一致，一个一级，一个二级
//void test5(int* arr) {}  //err
//void test6(int(*arr)[5]) {}
//void test7(int* arr[5]) {}  //报出实参与形参的类型不一致
//
//int main() {
//	int arr[3][5] = { 0 };
//	test7(arr);
//}


//函数指针  存放函数地址的指针
//int ADD(int a, int b) {
//	return a + b;
//}
//int main() {
//	int a = 3; int b = 5;
//	printf("%d\n",ADD(a, b));
//
//	//打印函数的地址
//	//函数名就是函数的地址=&函数名
//	
//	int(* p)(int,int) = ADD;//函数地址 的类型就是函数返回的类型
//	printf("%d\n", (*p)(a, b));
//	printf("%d\n", (**p)(a, b));
//	printf("%d\n", (***p)(a, b));//这里的解引用是没用的，只有一个*又作用
//	//printf("%d\n", *p(a, b));//这是错误的哦
//
//	//一下地址都是一样的
//	printf("%p\n", p);
//	printf("%p\n",*p);
//	printf("%p\n", &ADD);
//	printf("%p\n", ADD);
//}


//void Printf(char* p) {
//	printf("%s\n", p);
//}
//int main() {
//	char(*p)(char*) = Printf;//注意函数的类型 
//	(*p)("hellow bit");//调用函数
//	
//}




//重要，着重理解
//void (* signal(int, void(*)(int)))(int);
////函数的类型是：void (* )(int);
//
////将类型别名化
//typedef unsigned int u_int;
//typedef void(* pfun_t)(int);
//
//pfun_t signal(int, void(*)(int));
//


///函数指针数组
////计算器运用
//int ADD(int a, int b) {
//	return a + b;
//}
//int sub(int a, int b) {
//	return a - b;
//}
//int mul(int a, int b) {
//	return a * b;
//}
//int main() {
//	int* arrr[5];
//	int (*pa)(int, int) = ADD;//p指针中可以存放函数的地址，因为类型一样
//	//是所以需要类似pa的指针数组存放,一次存放多个类型相同的数
//	int (*parr[3])(int, int) = { ADD,sub,mul };
//
//	for (int i = 0; i < 3; i++) {
//		printf("%d\n",parr[i](4, 5));
//	}
//
//	return 0;
//
//}



//char* my_strcpy(char* de,const char* s);
//
//int main() {
//	char (*pf)(char*, const char*) = my_strcpy;
//
//	char (* p[4])(char*, const char*) = { my_strcpy };
//
//}






//计算器运用
int ADD(int a, int b) {
	return a + b;
}
int sub(int a, int b) {
	return a - b;
}
int mul(int a, int b) {
	return a * b;
}
int  div(int a, int b) {
	return a / b;
}
intxor (int a, int b) {
	return a ^ b;
}

void menu() {
	printf("------------------------------------\n");
	printf("******1、add   2、sub***************\n");
	printf("******3、mul   4、div**************\n");
	printf("******5、xor   0、exit**************\n");
	printf("------------------------------------\n");

}
//int main() {
////使用switch这种方法，一旦有功能，就要添加一个switch的case选项
//	int a, b;
//	int input;
//	do {
//		menu();
//		printf("chose:>\n");
//		scanf("%d", &input);
//
//		switch (input) {
//		case 1:
//			 printf("请输入操作数：>>");
//			scanf("%d%d", &a, &b);
//			printf("%d\n",ADD(a,b));
//			break;
//		case 2:
// 			 printf("请输入操作数：>>");
//			 scanf("%d%d", &a, &b);
//			printf("%d\n", sub(a,b));
//			break;
//		case 3:
//			 printf("请输入操作数：>>");
//			scanf("%d%d", &a, &b);
//			printf("%d\n", mul(a, b));
//			break;
//		case 4:
//			 printf("请输入操作数：>>");
//			scanf("%d%d", &a, &b);
//			printf("%f\n", div(a, b));
//			break;
// 		case 5:
//			 printf("请输入操作数：>>");
//			scanf("%d%d", &a, &b);
//			printf("%f\n", xor(a,b));
//			break;
//		case 0:
//			printf("exit");
//			break;
//		default:
//			break;
//		}
//	} while (input);//；不可以少
//	return 0;
//
//}



//计算器的优化一
//int main() {
//	//通过指针数组去调用函数
//	//如果需要添加功能，只需高更改菜单，冰箱指针数组中添加该函数的地址
//	int (*parr[])(int, int) = {0, ADD,sub,mul,div,xor };
//	int se = sizeof(parr) / sizeof(parr[0]);
//	int input;
//	do {
//		menu();
//		printf("chose:>");
//		
//		scanf("%d", &input);
//		int a, b;
//		if (input <= se && input > 0) {
//			printf("请输入操作数：>>");
//			scanf("%d%d", &a, &b);
//			int ret = parr[input](a, b);
//			printf("%d\n", ret);
//		}
//		else if (!input)
//			printf("退出");
//		else {
//			printf("again");
//		}
//
//	} while (input);
//
//	return 0;
//
//}


void Cacl(int (*p)(int, int)) {
	int a, b;
	printf("请输入操作数：>>");
	scanf("%d%d", &a, &b);
	printf("%d\n", p(a, b));
}


//计算器函数优化二--模块化
//int main() {
////使用switch这种方法，一旦有功能，就要添加一个switch的case选项
//	int a, b;
//	int input;
//	do {
//		menu();
//		printf("chose:>\n");
//		scanf("%d", &input);
//
//		switch (input) {
//		case 1:
//			Cacl(ADD);
//			break;
//		case 2:
//			Cacl(sub);
//			break;
//		case 3:
//			Cacl(mul);
//			break;
//		case 4:
//			Cacl(div);
//			break;
// 		case 5:
//			Cacl(xor);
//			break;
//		case 0:
//			printf("exit");
//			break;
//		default:
//			break;
//		}
//	} while (input);//；不可以少
//	return 0;
//
//}



//计算器的优化三
int main() {
	//通过指针数组去调用函数
	//如果需要添加功能，只需高更改菜单，冰箱指针数组中添加该函数的地址
	int (*parr[])(int, int) = {0, ADD,sub,mul,div,xor };
	int se = sizeof(parr) / sizeof(parr[0]);
	int input;
	do {
		menu();
		printf("chose:>");
		
		scanf("%d", &input);
		int a, b;
		if (input <= se && input > 0) {
			Cacl(parr[input]);//通过将函数地址传入calc中，同意运算；减少了代码的重复
		}
		else if (!input)
			printf("退出");
		else {
			printf("again");
		}

	} while (input);
	return 0;

}