#define  _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
#include<string.h>
//int main() {
//	char s[] = "asd";
//	//���㳤�Ȳ���ʹ��strlen()����Ϊ��û�н������ţ����ӡ������
//	//���ǿ���ʹ��sizeof(ss) / sizeof(ss[0])�����㳤��
//	char ss[] = { 'a','s','s' };
//	//sizeof����ĳ������ռ�ռ�Ĵ�С,�ֽ�
//	//strlen��������ĳ��ȣ�������\0
//	printf("%d\n", sizeof(s));   //4
//	printf("%d\n", sizeof(ss));   //3
//	printf("%d\n", sizeof(s) / sizeof(s[0]));  //4
//	printf("%d\n", strlen(s));  //3
//	//printf("%d\n", strlen(ss));  //���ֵ��������û�н�������,���δ�ӡ���ӡ������
//
//	for (int i = 0; i < sizeof(s) / sizeof(s[0]); i++) {
//		printf("%c ", s[i]);//%c��ӡ�ַ�  //%s��ӡ�ַ���
//	}
//
//	//for (int i = 0; i < strlen(ss); i++) {
//	//	printf("%c ", ss[i]);//%c��ӡ�ַ�  //%s��ӡ�ַ���
//	//}
//
//	for (int i = 0; i < sizeof(ss) / sizeof(ss[0]); i++) {
//		printf("%c ", ss[i]);//%c��ӡ�ַ�  //%s��ӡ�ַ���
//	}
//
//
//	printf("\n");
//	for (int i = 0; i < strlen(s); i++) {
//		printf("%d %p\n ", i,&s[i]);//%c��ӡ�ַ�  //%s��ӡ�ַ���
//	}
//
//	for (int i = 0; i < sizeof(s) / sizeof(s[0]); i++) {
//		printf("%d %p\n ", i, &s[i]);//%c��ӡ�ַ�  //%s��ӡ�ַ���
//	}
//	return 0;
//}



//int main() {
//	int s[3][4] = { 1,2,3,4,5 };//����ȫ��ʼ��
//	int aa[3][4] = { {1,2,3},{4,5} };
//
//
//	//��ӡ��ά����
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 4; j++) {
//			printf("%d ", aa[i][j]);
//
//		}
//		printf("\n");
//	}
//}



//�����׵�ַ�����
//int main() {
//	int arr[] = { 1,2,3,45,5 };
//	printf("%p\n", &arr);
//	printf("%p\n", &arr+1);//ָ����һ������Ԫ��
//
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0]+1);
//	printf("%p\n", arr);
//	printf("%p\n", arr+1);
//
//	printf("%p", *arr);
//}
//


//ð������
//����ע�⽻����������д��ע�����Ǵ���ַ���Ǵ���ֵ
//����ֵ�Ļ���ʵ��û�дﵽ������Ч��
//�������鳤��Ҫ���������м���֮��ͨ�����δ������������У������ڱ��������м������鳤�Ƚ���1
//����������һ��һ���ĳ�ʼ����������ʹ��strlen()���м������鳤�ȣ���Ϊ������û�н������ţ���������ĳ��Ȳ���
//ÿһ��ð�ݱȽ���֮��δ����ľͼ���
//���鴫�δ������������Ԫ��
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
		//���ĳһ�����������ֶ�û�е��ý�����������ô˵��֮��������ģ��Ͳ����ٶԺ���δ�ŵĽ�������
		//ֱ������forѭ�������Ч��
		if (flag) break;
	}
}

int main() {
	int arr[] = { 2,4,2,3,23,5,3,67,54 };
	int se = sizeof(arr) / sizeof(arr[0]);
	//int se = strlen(arr);//���ﲻ�������㣻��Ϊ������û�н�������\0
	Bubblr(arr,se);

	for (int i = 0; i < se; i++) {
		printf("%d ", arr[i]);
	}
}