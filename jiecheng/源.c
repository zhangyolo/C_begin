#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string>
#include<windows.h>
#include<stdlib.h>
//��׳˺�
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
//	//�ڶ��ַ���
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
//	if (i == size)printf("���Ӱ�");
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
//	if (r < l)printf("�Ҳ����ƣ� ");
//}

//int main() {
//	char s[] = "welcome to bit!!!" ;
//	char a[23];
//	printf("%s\n", s);
//	int size = (sizeof(s) / sizeof(s[0]))-1;//���ڴ˴���size�Ὣ\0Ү���볤��֮�ڣ��������ڲ��ã�������Ҫ��һ
//	for (int j = 0; j <size; j++) {
//		a[j] = '#';
//	}
//	a[size] = '\0';//�����Ǹ�������aһ������������������ӡa��ʱ������û�н����������ӡ������
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
	int size = strlen(arr1);//����arr1�ĳ��ȣ����ﲻ����\n
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