#define  _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
//int main() {
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(double*));
//	//���ϴ�ӡ����4���ֽڣ���32λƽ̨��ָ��Ĵ�Сλ4���ֽ�
//	return 0;
//}

//int main() {
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = &a;
//
//	//int��ָ��һ����4���ֽ�
//	printf("%p\n", pa);
//	printf("%p\n", pa + 1);
//
//
//	//char��ָ��һ����1���ֽ�
//	printf("%p\n", pc);
//	printf("%p\n", pc + 1);
//
//}


//int main() {
//	int arr[10] = { 0 };
//	//char*p = arr;//����������������׵�ַ
//	int* p = arr;  //ָ��+1.����ƶ�4���ֽ�
//	for (int i = 0; i < 10; i++) {
//		*(p + i) = 1;
//	}
//	for (int i = 0; i < 10; i++) {
//		printf("%d", arr[i]);
//	}
//	return 0;
//}



int* test() {
	int a = 10;
	printf("%p\n", &a);
	return &a;


}
//int main() {
//	//int* p;//�ֲ���ָ���������û�г�ʼ�����������ֵ
//	//*p = 20;
//
//	int* d = NULL;//ָ�������ʼ����
//	*d = 80;//������ʴ�����Ϊd�ǿյ�ַ�����ַ���ɷ���
//	int* q = test();
//	printf("%d\n", *q);
//	printf("%p\n", &q);
//	*q = 20;
//	printf("%d\n", *q);
//	printf("%p\n", &q);
//
//}

//int main() {
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]);i++){
//		printf("%d ", *p);
//		p = p + 1;
//	}
//	return 0;
//}




//���ַ����ĳ���
//int my_strlen(int* d) {
//	char* start = d;
//	char* end = d;
//	while (*end != '\0') {
//		end++;
//	}
//	return end - start;
//}
//
//int main() {
//	char arr[] = "biy";
//	int len = my_strlen(arr);
//	printf("%d", len);
//
//	int s[4] = { 1,2,3,4 };
//	//����s�ĳ���=s[4]-s[0];
//	int*o = s;
//	for (int i = 0; i <= s[3] - s[0]; i++) {
//		printf("%d ", *o);
//		o++;
//	}
//}


//int main() {
//	int arr[10] = { 0 };
//	int* p = arr;
//	for (int i = 0; i < 10; i++) {
//		printf("%p======%p\n", p + i, &arr[i]);//�鿴��ַ�����ַ�ʽ�Ľṹһ��
//
//	}
//	for (int i = 0; i < 10; i++) {
//		*(p + i) = i;//�����鸳ֵλ123456����
//	}
//	return 0;
//}



//����ָ��
//int main() {
//	int a = 10;
//	int* pa = &a;
//	int** ppa = &pa;//����ָ��
//	printf("%d ", **ppa);//10
//}



//ָ������-���� ���ָ�������
//����ָ��-ָ��
int main() {
	int a = 0; int b = 9;
	int arr[10];
	int* arr2[10] = { &a,&b };

	printf("%d", *&a);//0  *&a=a

	for (int i = 0; i < 2; i++) {
		printf("%d ",*(arr2[i]));  //0 9
	}

}
	
