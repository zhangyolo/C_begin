#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
//ĳ������ֻ��һ��Ԫ�س���һ�Σ�����Ԫ�ؾ���������
//����뷨�ǣ�������Ȼ���ڱȽ�ǰ�����������Ƿ���ͬ��


//������
//int main() {
//	int arr[] = { 1,3,4,5,1,2,3,4,5};
//	
//	for (int j = 0; j < sizeof(arr); j++) {
//		int total = 0;
//		for (int k = 0; k <  sizeof(arr)/sizeof(arr[0]); k++) {
//			if (arr[k] == arr[j]) total++;
//		}
//		if (total == 1) {
//			printf("������%d", arr[j]);
//			break;
//			//����ʹ��break�����Ч�ʣ���Ϊ��Ŀ��ֻ��һ��������һ���ҵ������������Ͳ�����ͳ�ƣ�ֱ������ѭ��
//		}
//	}
//}


// sizeof(arr)/sizeof(arr[0])����Ԫ�صĸ���----C������
//sizeof()���㳤�ȣ���λ�ֽ�
//ͨ�����ͬ0��1�����Ե�֪ ����������Ϊ0���������������ǵ���
//�κ�����0��򣬶����䣻
int main() {
	int arr[] = { 1,3,4,5,1,2,3,4,5 };
	int s = 0;
	for (int j = 0; j < sizeof(arr) / sizeof(arr[0]); j++) {
		s = s^arr[j];
	}
	printf("%d", s);
	return 0;

}
