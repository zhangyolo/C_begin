#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//int main() {
//	char s[] = { "sdfs" };
//	char s1[20] = { "sdfsdfs" };
//	strcpy(s1, s);//��s���ַ�������s1������s�е�\0Ү���뵽��s2��
//	printf("%s", s1);
//	return 0;
//}

//int main()
//{
//	char str[] = "almost every programmer should know memset!";
//	memset(str, '-', 6);//��str�е�ǰ6���ַ�����Ϊ-��������Ĳ���
//	puts(str);
//	printf("%s\n",str);
//	return 0;
//}


//���ú��������ֲ���
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


#include "add.h"  //�����Լ�д��ͷ�ļ�//ͷ�ļ���д��������
//int main() {
//	int s, b;
//	s = 9; 
//	b = 5;
//	printf("%d", ADD(s, b));
//}




/*
//�ݹ�,��һ�������Ŵ�ӡ��
int print_n(int s) {
	if (s > 9) {
		printf("%d ", s % 10);
		print_n(s / 10);//������������

	}
	else printf("%d", s);
	return 0;
}
//�����ӡ���ִ�
int print_z(int s) {
	if (s > 9) {
		print_z(s / 10);//������������
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


//���ַ����ĳ���
//��ʹ����ʱ����
int my_strlen(char * str) {
	if (*str != '\0') {
		return 1 + my_strlen(str+1);
	}
	else return 0;
}


//ʹ����ʱ����
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
	printf("���ÿ⺯�����㷨��%d \n", strlen(arr));

	int len = my_strlen1(arr);//arr����ַ
	printf("����ʱ�������㷨��%d\n", len);

	printf("û����ʱ�������㷨��%d", my_strlen(arr));
	return 0;
}