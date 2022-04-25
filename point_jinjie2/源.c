#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//--指向函数指针数组的指针

//int ADD(int a, int u) {
//	return a + u;
//}
//int main() {
//	int arr[10] = { 0 };
//	int(* p)[10] = &arr;//取出数组的地址
//
//	int (*pf)(int, int) = ADD;//函数指针，指向函数
//	int (*pfar[4])(int, int) = { ADD };
//	int (*(*ppfar)[4])(int,int)=&pfar;  
//	//ppfar就是指向函数指针数组的数组指针，指针指向的数组有4个元素，
//	//每个元素的类型是一个函数指针，指向函数，类型为(int (*)(int,int))
//	return 0;
//
//}



//回调函数
//void print(char* str) {
//	printf("hehe:%s",str);
//}
//void test(int (*p)(char*)) {
//	printf("test\n");
//	p("cc");//通过指针调用函数
//}
//int main() {
//	test(print);
//	return 0;
//}



//回顾指针类型：
/*
int Add(int a, int b) {
	return a + b;
}
int main() {
	//指针数组  是一个数组，数组元素都是指针
	int* arr[10];

	//数组指针  pa是一个指针，指向一个数组
	int (*pa)[10] = &arr;//&arr取出整个数组
	//指向数组指针的指针
	
	//函数指针
	int (*p)(int, int) = Add;
	//调用函数
	p(4, 5);
	(*p)(5,6);


	//函数指针数组
	int (*parr[10])(int, int) = {Add};
	int sum=parr[0](4, 5);
	printf("%d\n", sum); //9

	//指向函数指针数组的指针PParr
	int(*(*PParr)[10])(int, int) = &parr;  //z整个数组地址
}
*/








///******************************************
//冒泡排序
//之前的代码只能排序整型的数字
//
//C语言库函数中有qsort 可以排序任意数据类型的函数
//此处只是调用库函数的qsort，具体原理可以查看库函数-转到定义
//还有一个qsort_s比较文本
void BubbleSort(int *p, int se) {
		int flag = 1;
	for (int i = 0; i < se-1; i++) {  //n个数字,比较n-1趟
		int j = 0;
		for (int j = 0; j < se -1-i; j++) {//第i趟两两比较se-1-i次
			if (p[j] > p[j + 1]) {
				flag = 0;
				int temp = p[j];
				p[j] = p[j + 1];
				p[j + 1] = temp;
			}
			else flag = 1;
		}
		if (flag) return;
	}
}

struct stu {
	char name[20];
	int age;
};

//void qsort(void* base, size_t nitems, size_t size,
//	int (*compar)(const void*, const void*))
//{}
/*
base -- 指向要排序的数组的第一个元素的指针。
nitems -- 由 base 指向的数组中元素的个数。
size -- 数组中每个元素的大小，以字节为单位。
compar -- 用来比较两个元素的函数。
	//参数利用函数指针，这样实参就可以直接写函数名（函数地址）********
	参数1-参数2： 相等返回0；大于返回1；小于返回-1
*/

//void *aa;指针aa可以接收任意类型的指针
// void*类型不可以进行数值运算的操作；void *可以接收任意类型的指针
// //解引用决定访问内存的空间长度，所以void *类型的指针不可以进行解引用操作
// *aa=0  报错 因为不知道访问多大的空间
//指针都是4个字节的，指针的类型只是决定它的步长
//void *类型进行比较时，要进行强制转换为相应的类型，再比较

int com_int(const void *p,const void *q) {
	//*p, * q;//由于void*类型不可以进行解引用；所以需要强制类型转换时候，进行比较
	return *(int*)p - *(int*)q;
}


int com_float(const void* p, const void* q) { 
	//浮点型相减，可能还是浮点型，会导致返回的时候的错误，所以直接使用多分枝去定义，解决
	if (*(float*)p == *(float*)q)return 0;
	else if(*(float*)p > *(float*)q) return 1;
	else return -1;
}

#include<stdlib.h>
void test1_int() {
	int arr[10] = { 1,2,5,3,4,6,7,8,9,10 };
	int se = sizeof(arr) / sizeof(arr[0]);
	//BubbleSort(arr, se);

	qsort(&arr[0], se, sizeof(arr[0]), com_int);
	//等价的，因为arr=&arr[0]
	//qsort(arr, se, sizeof(arr[0]), com_int);

	int i = 0;
	for (i = 0; i < se; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void test_pu() {
int arr[10] = { 1,2,5,3,4,6,7,8,9,10 };
	int se = sizeof(arr) / sizeof(arr[0]);
	BubbleSort(arr, se);


	int i = 0;
	for (i = 0; i < se; i++) {
		printf("%d ", arr[i]);
	}

	printf("\n");
}

void test_float() {
	float f[] = { 3.6,3.5,23.0,1.0 };
	int se = sizeof(f) / sizeof(f[0]);
	qsort(f, se,sizeof( f[0]), com_float);
	int i = 0;
	for (i = 0; i < se; i++) {
		printf("%f ", f[i]);
	}
	printf("\n");

}
int cmp_struct_age(const void *p,const void *q) {
	return ((struct stu*)p)->age - ((struct stu*)q)->age;

}
#include<string.h>
int cmp_struct_name(const void* p, const void* q) {
	return strcmp(((struct stu*)p)->name, ((struct stu*)q)->name);

}
void test_stu_age() {
	struct stu s[3] = { {"sdf",22},{"zz",20},{"cc",20} };
	int se = sizeof(s) / sizeof(s[0]);
	qsort(s, se, sizeof(s[0]), cmp_struct_age);
	int i = 0;
	for (i = 0; i < se; i++) {
		printf("%s-%d\n", s[i].name,s[i].age);
	}
}
void test_stu_name() {
	struct stu s[3] = { {"zhangyinmei",22},{"wen",20},{"chenxue",20} };
	int se = sizeof(s) / sizeof(s[0]);
	qsort(s, se, sizeof(s[0]), cmp_struct_name);
	int i = 0;
	for (i = 0; i < se; i++) {
		printf("%s-%d\n", s[i].name, s[i].age);
	}
}



//优化版本，进行不同数据的比较
//通过调用Bubble_random函数，向其中传入任意类型的数据类型，都可以实现排序功能
//重要是书写比较函数
void Swap(char* q,char* p,int w) {
	//每一个元素所占空间大小的每一位进行交换
	int i = 0;
	char tmp = 0;
	//字符型是一个字节，每次步长走一个字节，根据每一个所比较元素的空间长度，进行交换
	for ( i = 0; i < w; i++) {
		tmp = *q;
		*q = *p;
		*p = tmp;
		q++;
		p++;
	}
	//0xDC0AFB7F 处有未经处理的异常(在 point_jinjie2.exe 中) : 0xC00001A5 : 检测到无效的异常处理程序例程。(参数 : 0x00000003)。
}
void Bubble_random(void* base, int se, int width, int (*cmp)(void * e1, void * e2) ){
	//由于不知道函数比较的数据类型，所以使用void *去接受
	// 	   width是每一个元素的大小，单位字节
	//
	int i = 0;
	for (i = 0; i < se - 1; i++) {
		int j = 0;
		for (j = 0; j< se - 1 - i; j++) {
			if ( cmp( (char*)base + j * width, (char*)base + (j + 1) * width)>0) {
				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
			}
		}
	}
}


void test_Bubble_ran_int() {
	int arr[10] = { 2,3,4,1,6,4,2,7,8,9 };
	int se = sizeof(arr) / sizeof(arr[0]);

	Bubble_random(arr, se, sizeof(arr[0]), com_int);
	int i = 0;
	for (i = 0; i < se; i++) {
		printf("%d ", arr[i]);
	}

}

void test_Bubble_ran_age() {
	struct stu s[3] = { {"zhangyinmei",22},{"wen",20},{"chenxue",20} };
	int se = sizeof(s) / sizeof(s[0]);
	Bubble_random(s, se, sizeof(s[0]), cmp_struct_age);
	int i = 0;
	for (i = 0; i < se; i++) {
		printf("%s-%d\n", s[i].name, s[i].age);
	}
}

void test_Bubble_ran_name() {
	struct stu s[3] = { {"zhangyinmei",22},{"wen",20},{"chenxue",20} };
	int se = sizeof(s) / sizeof(s[0]);
	Bubble_random(s, se, sizeof(s[0]), cmp_struct_name);
	int i = 0;
	for (i = 0; i < se; i++) {
		printf("%s-%d\n", s[i].name, s[i].age);
	}
}

int main() {

	/*test1_int();
	test_float();
	test_stu_age();
	test_stu_name();*/

	test_Bubble_ran_name();

	//通过qsort函数的调用，使任意数据类型都可以进行比较
}