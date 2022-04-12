#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//int main() {
//	char s[] = { "sdfs" };
//	char s1[20] = { "sdfsdfs" };
//	strcpy(s1, s);//把s的字符拷贝到s1；这里s中的\0耶拷入到了s2中
//	printf("%s", s1);
//	return 0;
//}

//int main()
//{
//	char str[] = "almost every programmer should know memset!";
//	memset(str, '-', 6);//将str中的前6个字符设置为-，而后面的不变
//	puts(str);
//	printf("%s\n",str);
//	return 0;
//}


//利用函数求解二分查找
/*
int binnary_search(int s[], int k, int se) {
	int le = 0;
	int r = se - 1;
	
	while(le<=r) {
		int mid = (le+ r) / 2 ;
		if (s[mid] == k) return mid;
		else if (s[mid] > k) {
			r = mid - 1;

		}
		else {
			le = mid + 1;
		}
	}
	return -1;
}
int main() {
	int a[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;
	int se = sizeof(a) / sizeof(a[0]);

	int ret = binnary_search(a,k,se);

	if (ret == -1)printf("no");
	else printf("%d", ret);
}*/

//int main() {
//	printf("%d", printf("%d", printf("%d", 43)));//4321
//	return 0;
//}


#include "add.h"  //引用自己写的头文件//头文件中写函数声明
//int main() {
//	int s, b;
//	s = 9; 
//	b = 5;
//	printf("%d", ADD(s, b));
//}




/*
//递归,将一串数逆着打印出
int print_n(int s) {
	if (s > 9) {
		printf("%d ", s % 10);
		print_n(s / 10);//反复调用自身

	}
	else printf("%d", s);
	return 0;
}
//正序打印数字串
int print_z(int s) {
	if (s > 9) {
		print_z(s / 10);//反复调用自身
	}
	printf("%d ", s % 10);
	reurn 0;
}

int main() {
	unsigned int s = 0;
	scanf("%d", &s);
	print_z(s);
	printf("\n");
	print_n(s);
	return 0;
}*/


//求字符串的长度
//不使用临时变量
int my_strlen(char * str) {
	if (*str != '\0') {
		return 1 + my_strlen(str+1);
	}
	else return 0;
}


//使用临时变量
int my_strlen1(char* str) {
	int count = 0;
	while (*str != '\0') {
		count++;
		str++;
	}
	return count;
}

#include<string.h>
int main() {
	char arr[] = "bfsd";
	printf("利用库函数的算法：%d \n", strlen(arr));

	int len = my_strlen1(arr);//arr传地址
	printf("有临时变量的算法：%d\n", len);

	printf("没有临时变量的算法：%d", my_strlen(arr));
	return 0;
}