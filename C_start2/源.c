#define  _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
#include<string.h>
//int main() {
//	char s[] = "asd";
//	//计算长度不可使用strlen()，因为它没有结束符号，会打印出乱码
//	//但是可以使用sizeof(ss) / sizeof(ss[0])，计算长度
//	char ss[] = { 'a','s','s' };
//	//sizeof计算某类型所占空间的大小,字节
//	//strlen计算数组的长度，不计入\0
//	printf("%d\n", sizeof(s));   //4
//	printf("%d\n", sizeof(ss));   //3
//	printf("%d\n", sizeof(s) / sizeof(s[0]));  //4
//	printf("%d\n", strlen(s));  //3
//	//printf("%d\n", strlen(ss));  //随机值，由于它没有结束符号,依次打印会打印出乱码
//
//	for (int i = 0; i < sizeof(s) / sizeof(s[0]); i++) {
//		printf("%c ", s[i]);//%c打印字符  //%s打印字符串
//	}
//
//	//for (int i = 0; i < strlen(ss); i++) {
//	//	printf("%c ", ss[i]);//%c打印字符  //%s打印字符串
//	//}
//
//	for (int i = 0; i < sizeof(ss) / sizeof(ss[0]); i++) {
//		printf("%c ", ss[i]);//%c打印字符  //%s打印字符串
//	}
//
//
//	printf("\n");
//	for (int i = 0; i < strlen(s); i++) {
//		printf("%d %p\n ", i,&s[i]);//%c打印字符  //%s打印字符串
//	}
//
//	for (int i = 0; i < sizeof(s) / sizeof(s[0]); i++) {
//		printf("%d %p\n ", i, &s[i]);//%c打印字符  //%s打印字符串
//	}
//	return 0;
//}



//int main() {
//	int s[3][4] = { 1,2,3,4,5 };//不完全初始化
//	int aa[3][4] = { {1,2,3},{4,5} };
//
//
//	//打印二维数组
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 4; j++) {
//			printf("%d ", aa[i][j]);
//
//		}
//		printf("\n");
//	}
//}



//数组首地址的理解
//int main() {
//	int arr[] = { 1,2,3,45,5 };
//	printf("%p\n", &arr);
//	printf("%p\n", &arr+1);//指向下一个数组元素
//
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0]+1);
//	printf("%p\n", arr);
//	printf("%p\n", arr+1);
//
//	printf("%p", *arr);
//}
//


//冒泡排序
//首先注意交换函数的书写，注意其是传地址还是传数值
//传数值的话，实际没有达到交换的效果
//对于数组长度要在主函数中计算之后，通过传参传到被调函数中；否则在被调函数中计算数组长度将是1
//对于数组中一个一个的初始化，不可以使用strlen()进行计算数组长度，因为该数组没有结束符号，计算出来的长度不对
//每一趟冒泡比骄傲之后，未排序的就减少
//数组传参传的是数组的首元素
void swap(int *a, int* b) {
	int tem;
	tem = *a;
	*a =* b;
	*b = tem;
}
void Bubblr(int *s,int len) {
	int flag = 1;
	for (int i = 0; i < len-1; i++) {
		for (int j = 0; j < len-1-i; j++) {
			if (s[j] > s[j + 1]) {
				swap(&s[j], &s[j + 1]);
				flag = 0;
			}
		}
		//如果某一趟下来，发现都没有调用交换函数，那么说明之后都是有序的，就不用再对后续未排的进行排序；
		//直接跳出for循环，提高效率
		if (flag) break;
	}
}

int main() {
	int arr[] = { 2,4,2,3,23,5,3,67,54 };
	int se = sizeof(arr) / sizeof(arr[0]);
	//int se = strlen(arr);//这里不能这样算；因为此数组没有结束符号\0
	Bubblr(arr,se);

	for (int i = 0; i < se; i++) {
		printf("%d ", arr[i]);
	}
}