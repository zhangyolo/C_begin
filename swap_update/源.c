#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//�����������������ǲ�������ʱ����
//֮ǰ����������ʱ��������ȫû���뵽������˼�룬����˼ά����
//���������㷨���и�ȱ�ݣ����������ĺͳ����˸����͵ķ�Χ���ͻᵼ�½�������
//int main() {
//	int a = 3;
//	int b = 5;
//	printf("%d %d\n", a, b);
//	a = a + b;
//	b = a - b;
//	a = a - b;
//
//	printf("%d %d", a,b);
//}



/*
//ͨ���������ʵ�ֽ����������㷨���ᵼ����������ɶ��ԲЧ�����
int main() {
	int a = 3;
	int b = 5;
	printf("%d %d\n", a, b);
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;

	printf("%d %d", a,b);
}
*/


//ͨ����ʱ�������ɶ��Ժã�Ч�ʸ�
int main() {
	int a = 3;
	int b = 5;
	printf("%d %d\n", a, b);
	int c;
	c = a;
	a = b;
	b = c;

	printf("%d %d", a, b);
}