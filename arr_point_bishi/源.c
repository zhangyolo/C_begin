#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>


//*****************�ص����
int main() {

	//��������ʾ��Ԫ�صĵ͵�ַ
	//sizeof(������)  �����ʾ��������
	//&������  Ҳ��ʾ��������
	//  4/8��Ҫȡ����ƽ̨
	// 	   ��ַ��С����4���ֽ�
	//��������
	/*int a[] = { 1,2,3,4 };
	printf("%d\n", sizeof(a));  //16 //���������ܴ�С����λ�ֽ�
	printf("%d\n", sizeof(a+0));//4 /8 //�����������ʾ��Ԫ�ص�ֵ��a+0������Ԫ��
	printf("%d\n", sizeof(*a));//4  //��Ԫ�ص�ַ��*a��Ԫ��
	printf("%d\n", sizeof(a+1));//4  //��Ԫ�ص�ַ��a+1��ʾ�ڶ���Ԫ��
	printf("%d\n", sizeof(a[1]));//4  //�ڶ���Ԫ��
	printf("%d\n", sizeof(&a));//4/8  //&aȡ��������������ĵ�ַ����������ĵ�ַҲ�ǵ�ַ
	printf("%d\n", sizeof(*&a));//16   //���������С
	printf("%d\n", sizeof(&a+1));//4   //��Ȼ�������������飬������һ����ַ
	printf("%d\n", sizeof(&a[0]));//4   //����һ��Ԫ�ص�ַ
	printf("%d\n", sizeof(&a[0]+1));//4  //��ʾ�ڶ���Ԫ�ص�ַ
	*/


	//�ַ�����
	///char���ͣ�ÿ��Ԫ��һ���ֽ�
	/*
	char arr[] = { 'a','v','y','e','g','j' };
	printf("%d\n", sizeof(arr));  //6   //��������Ĵ�С
	printf("%d\n", sizeof(arr+0));  //4 /8  //arr��ʾ��Ԫ�صĵ�ַ��arr+0������Ԫ�صĵ�ַ����ַ��СΪ4
	printf("%d\n", sizeof(*arr));  //1   ��ʾ��Ԫ�ص�ַ��*arr��ʾ��Ԫ�أ���СΪһ����ַ
	printf("%d\n", sizeof(arr[1]));  //1
	printf("%d\n", sizeof(&arr));  //4/8
	printf("%d\n", sizeof(&arr+1)); //4/8   ������������Ĵ�С
	printf("%d\n", sizeof(&arr[0]+1)); //4/8  �ڶ���Ԫ�صĵ�ַ


	//strlen()�����ַ�����\0�����ĳ��ȣ�������\0
	//strlen()����һ����ַ�������ַ�������ֱ������\0
	printf("%d\n", strlen(arr));  //���ֵ
	printf("%d\n", strlen(arr + 0)); //���ֵ
	//printf("%d\n", strlen(*arr));  //err
	//printf("%d\n", strlen(arr[1]));   //1err
	printf("%d\n", strlen(&arr));  //���ֵ
	printf("%d\n", strlen(&arr + 1));  //���ֵ-6  ������������
	printf("%d\n", strlen(&arr[0] + 1)); //���ֵ-1
	*/


	/*
	char arr[] = "asdfgd";
	printf("%d\n",sizeof(arr));  //7  //������\0�Ŀռ�
	printf("%d\n",sizeof(arr + 0)); //4/8 ��Ԫ�ص�ַ�Ĵ�С
	printf("%d\n",sizeof(*arr));  //1 ��Ԫ�ش�С  ��*i�����ȡ��ַ�����ã��õ�Ԫ�ر�������
	printf("%d\n",sizeof(arr[1]));  //1  �ڶ���Ԫ�صĴ�С
	printf("%d\n",sizeof(&arr));  //4/8
	printf("%d\n",sizeof(&arr + 1));  //4/8
	printf("%d\n",sizeof(&arr[0] + 1)); // 4/8 �ڶ���Ԫ�صĵ�ַ��С

	printf("%d\n",strlen(arr));  //6
	printf("%d\n",strlen(arr + 0)); //6
	//printf("%d\n",strlen(*arr));  //err  *arr =a 97�����Ͱ�97��Ϊ��ַ���ͻ��γɷǷ����ʿռ�
	//printf("%d\n",strlen(arr[1]));  //err   ����
	printf("%d\n",strlen(&arr));  // 6
	//&arr ����ĵ�ַ-����ָ�� char(*p)[7]=&arr;  ��&arr��������char(*)[7]
	//����strlen�����Ĳ��������� const char*
	//�������Ͳ�һ�£����о��棬���ǲ��ᱨ��
	printf("%d\n",strlen(&arr + 1));  //���ֵ  ����һ������Ĵ�С
	printf("%d\n",strlen(&arr[0] + 1)); // 5
	*/



	char *p = "asdfgd";//�����ַ���  ֻ��a�ĵ�ַ����ָ��p�У�
	printf("%d\n", sizeof(p));  //4  ����ָ�����p�Ĵ�С
	printf("%d\n", sizeof(p + 1)); //4/8 �õ��ַ�b�ĵ�ַ����ַ����4���ֽ�
	printf("%d\n", sizeof(*p));  //1   *p=a; 
	printf("%d\n", sizeof(p[0]));  //1  ��һ��Ԫ�صĴ�С     arr[0]==*(arr+0��  p[0]=*(p+0)
	printf("%d\n", sizeof(&p));  //4/8
	printf("%d\n", sizeof(&p + 1));  //4/8
	printf("%d\n", sizeof(&p[0] + 1)); // 4/8 �ڶ���Ԫ�صĵ�ַ��С



	printf("%d\n", strlen(p));  //6  ����ָ�����p�Ĵ�С
	printf("%d\n", strlen(p + 1)); //5 pֻ���a�ĵ�ַ��p+1ָ����һ��Ԫ�صĵ�ַ
	//printf("%d\n", strlen(*p));  ////err
	//printf("%d\n", strlen(p[0]));  //err  
	//strlen()�Ĳ���ֻ�ܴ�һ����ַ�������Դ��ݵ������ݣ�����Ὣ����Ϊ��ַ���Ӷ����·���FIFA��ַ
	printf("%d\n", strlen(&p));  
	//���ֵ  &p��ָ��p����ĵ�ַ
	//strlen����ͨ��&pȥ����pָ�������(a�ĵ�ַ),����p�д�ŵ���a�ĵ�ַ������strlen������ȡ�ַ����ȵ����������ڴ���С�˴�ţ�����ֱ����ȡ��\0�Ż�ֹͣ���㳤�ȣ��������
	
	printf("%d\n", strlen(&p + 1));  //��� ֵ   &pȡ�������ĵ�ַ��&p+1ָ����һ�����飬
	printf("%d\n", strlen(&p[0] + 1)); // 5 �ڶ���Ԫ�ؿ�ʼ

}