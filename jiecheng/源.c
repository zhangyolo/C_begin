#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string>
#include<windows.h>
#include<stdlib.h>
//求阶乘和
//int main() {
//	int ret = 1;
//	int sum = 0;
//	for (int i = 1; i <= 3; i++) {
//		ret = ret * i;
//		sum = sum + ret;
//	}
//	printf("%d", sum);
//
//	
//	//第二种方法
//	int s = 0;
//	for (int i = 1; i <= 3; i++) {
//		int r = 1;
//		for (int j = 1; j <= i; j++) {
//			r = r * j;
//		}
//		s += r;
//	}
//	printf("%d", s);
//}



//int main() {
//	int v[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int k = 7;
//	int size = sizeof(v) / sizeof(v[0]);
//	for (int i = 0; i < size; i++) {
//		if (k == v[i]) {
//			printf("%d\n", i);
//			break;
//		}
//	}
//	if (i == size)printf("不子啊");
//
//}

//int main() {
//	int v[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int k = 7;
//	int size = sizeof(v) / sizeof(v[0]);
//	int l = 0; int r = size - 1;
//	while (r >= l) {
//		int mid = (l + r) / 2;
//		if (k > v[mid]) {
//			l = mid + 1;
//		}
//		else if (k < v[mid])r = mid - 1;
//		else {
//			printf("%d", mid);
//			break;
//		}
//	}
//	if (r < l)printf("找不打破； ");
//}

//int main() {
//	char s[] = "welcome to bit!!!" ;
//	char a[23];
//	printf("%s\n", s);
//	int size = (sizeof(s) / sizeof(s[0]))-1;//由于此处的size会将\0耶计入长度之内，但是由于不用，所以需要减一
//	for (int j = 0; j <size; j++) {
//		a[j] = '#';
//	}
//	a[size] = '\0';//这里是给；数组a一个结束符，否则最后打印a的时候，由于没有结束符，会打印出乱马
//	for (int i = 1; i <= size/2+1; i++) {
//
//		for (int j = 1; j <= i; j++) {
//			a[j-1] = s[j-1];
//			a[size - j] = s[size - j];
//		}
//		printf("%s\n", a);
//	}
//}


int main() {
	char arr1[] = "welcome to bit!!!!!";
	char arr2[] = "###################";
	int size = strlen(arr1);//计算arr1的长度，这里不计算\n
	int r = size - 1;
	int l = 0;

	while (l <= r) {
		arr2[l] = arr1[l];
		arr2[r] = arr1[r];
		printf("%s\n", arr2);
		
		//Sleep(1000);
		//system("cls");
		l++;
		r--;
	}
}