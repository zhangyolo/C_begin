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
/*int main() {
	int a = 3;
	int b = 5;
	printf("%d %d\n", a, b);
	int c;
	c = a;
	a = b;
	b = c;

	printf("%d %d", a, b);
}*/


void swap1(int a,int b) {
	int p=0;
	p = a;
	a = b;
	b = p;
}

void swap2(int* a, int* b) {
	int p=0;
	p =*a;
	*a = *b;
	*b = p;
}


void swap3(int* a, int* b) {//��Ȼ�����ǽ�����ָ�룬�ﵽ�������ݵ����ã������������������������ʹ��ָ��ָ��������������ֵδ����

	int *p ;
	p = a;
	a = b;
	b = p;
}
int main() {
	int a, b;
	a = 10; b = 23;
	printf("%d%d\n", a,b);
	//swap1(a, b);//�����Ǵ�ֵ������ԭֵ����û�н���
	//printf("%d%d\n", a, b);
	//swap2(&a,&b);//�����Ǵ���ַ����ָ���ָ�򽻻����ﵽ��ֵ����������
	//printf("%d%d\n", a, b);
	swap3(&a, &b);//������û�н���
	printf("%d%d\n", a, b);
}