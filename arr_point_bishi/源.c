#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>

////
// /////
//*****************�ص����sizeof,strlen
//int main() {
//
//	//��������ʾ��Ԫ�صĵ͵�ַ
//	//sizeof(������)  �����ʾ��������
//	//&������  Ҳ��ʾ��������
//	//  4/8��Ҫȡ����ƽ̨
//	// 	   ��ַ��С����4���ֽ�
//	//��������
//	/*int a[] = { 1,2,3,4 };
//	printf("%d\n", sizeof(a));  //16 //���������ܴ�С����λ�ֽ�
//	printf("%d\n", sizeof(a+0));//4 /8 //�����������ʾ��Ԫ�ص�ֵ��a+0������Ԫ��
//	printf("%d\n", sizeof(*a));//4  //��Ԫ�ص�ַ��*a��Ԫ��
//	printf("%d\n", sizeof(a+1));//4  //��Ԫ�ص�ַ��a+1��ʾ�ڶ���Ԫ��
//	printf("%d\n", sizeof(a[1]));//4  //�ڶ���Ԫ��
//	printf("%d\n", sizeof(&a));//4/8  //&aȡ��������������ĵ�ַ����������ĵ�ַҲ�ǵ�ַ
//	printf("%d\n", sizeof(*&a));//16   //���������С
//	printf("%d\n", sizeof(&a+1));//4   //��Ȼ�������������飬������һ����ַ
//	printf("%d\n", sizeof(&a[0]));//4   //����һ��Ԫ�ص�ַ
//	printf("%d\n", sizeof(&a[0]+1));//4  //��ʾ�ڶ���Ԫ�ص�ַ
//	*/
//
//
//
//	//�ַ�����
//	///char���ͣ�ÿ��Ԫ��һ���ֽ�
//	/*
//	char arr[] = { 'a','v','y','e','g','j' };
//	printf("%d\n", sizeof(arr));  //6   //��������Ĵ�С
//	printf("%d\n", sizeof(arr+0));  //4 /8  //arr��ʾ��Ԫ�صĵ�ַ��arr+0������Ԫ�صĵ�ַ����ַ��СΪ4
//	printf("%d\n", sizeof(*arr));  //1   ��ʾ��Ԫ�ص�ַ��*arr��ʾ��Ԫ�أ���СΪһ����ַ
//	printf("%d\n", sizeof(arr[1]));  //1
//	printf("%d\n", sizeof(&arr));  //4/8
//	printf("%d\n", sizeof(&arr+1)); //4/8   ������������Ĵ�С
//	printf("%d\n", sizeof(&arr[0]+1)); //4/8  �ڶ���Ԫ�صĵ�ַ
//
//
//	//strlen()�����ַ�����\0�����ĳ��ȣ�������\0
//	//strlen()����һ����ַ�������ַ�������ֱ������\0
//	//strlen��������������������ĳ��ȣ�sizeof����
//	printf("%d\n", strlen(arr));  //���ֵ
//	printf("%d\n", strlen(arr + 0)); //���ֵ
//	//printf("%d\n", strlen(*arr));  //err
//	//printf("%d\n", strlen(arr[1]));   //1err
//	printf("%d\n", strlen(&arr));  //���ֵ
//	printf("%d\n", strlen(&arr + 1));  //���ֵ-6  ������������
//	printf("%d\n", strlen(&arr[0] + 1)); //���ֵ-1
//	*/
//
//
//	/*
//	char arr[] = "asdfgd";
//	printf("%d\n",sizeof(arr));  //7  //������\0�Ŀռ�
//	printf("%d\n",sizeof(arr + 0)); //4/8 ��Ԫ�ص�ַ�Ĵ�С
//	printf("%d\n",sizeof(*arr));  //1 ��Ԫ�ش�С  ��*i�����ȡ��ַ�����ã��õ�Ԫ�ر�������
//	printf("%d\n",sizeof(arr[1]));  //1  �ڶ���Ԫ�صĴ�С
//	printf("%d\n",sizeof(&arr));  //4/8
//	printf("%d\n",sizeof(&arr + 1));  //4/8
//	printf("%d\n",sizeof(&arr[0] + 1)); // 4/8 �ڶ���Ԫ�صĵ�ַ��С
//
//	printf("%d\n",strlen(arr));  //6
//	printf("%d\n",strlen(arr + 0)); //6
//	//printf("%d\n",strlen(*arr));  //err  *arr =a 97�����Ͱ�97��Ϊ��ַ���ͻ��γɷǷ����ʿռ�
//	//printf("%d\n",strlen(arr[1]));  //err   ����
//	printf("%d\n",strlen(&arr));  // 6
//	//&arr ����ĵ�ַ-����ָ�� char(*p)[7]=&arr;  ��&arr��������char(*)[7]
//	//����strlen�����Ĳ��������� const char*
//	//�������Ͳ�һ�£����о��棬���ǲ��ᱨ��
//	printf("%d\n",strlen(&arr + 1));  //���ֵ  ����һ������Ĵ�С
//	printf("%d\n",strlen(&arr[0] + 1)); // 5
//	*/
//
//
//	/*char *p = "asdfgd";//�����ַ���  ֻ��a�ĵ�ַ����ָ��p�У�
//	printf("%d\n", sizeof(p));  //4  ����ָ�����p�Ĵ�С
//	printf("%d\n", sizeof(p + 1)); //4/8 �õ��ַ�b�ĵ�ַ����ַ����4���ֽ�
//	printf("%d\n", sizeof(*p));  //1   *p=a; 
//	printf("%d\n", sizeof(p[0]));  //1  ��һ��Ԫ�صĴ�С     arr[0]==*(arr+0��  p[0]=*(p+0)
//	printf("%d\n", sizeof(&p));  //4/8
//	printf("%d\n", sizeof(&p + 1));  //4/8
//	printf("%d\n", sizeof(&p[0] + 1)); // 4/8 �ڶ���Ԫ�صĵ�ַ��С
//
//	printf("%d\n", strlen(p));  //6  ����ָ�����p�Ĵ�С
//	printf("%d\n", strlen(p + 1)); //5 pֻ���a�ĵ�ַ��p+1ָ����һ��Ԫ�صĵ�ַ
//	//printf("%d\n", strlen(*p));  ////err
//	//printf("%d\n", strlen(p[0]));  //err  
//	//strlen()�Ĳ���ֻ�ܴ�һ����ַ�������Դ��ݵ������ݣ�����Ὣ����Ϊ��ַ���Ӷ����·���FIFA��ַ
//	printf("%d\n", strlen(&p));  
//	//���ֵ  &p��ָ��p����ĵ�ַ
//	//strlen����ͨ��&pȥ����pָ�������(a�ĵ�ַ),����p�д�ŵ���a�ĵ�ַ������strlen������ȡ�ַ����ȵ����������ڴ���С�˴�ţ�����ֱ����ȡ��\0�Ż�ֹͣ���㳤�ȣ��������
//	
//	printf("%d\n", strlen(&p + 1));  //��� ֵ   &pȡ�������ĵ�ַ��&p+1ָ����һ�����飬
//	printf("%d\n", strlen(&p[0] + 1)); // 5 �ڶ���Ԫ�ؿ�ʼ*/
//	
//	//��ά����
//	int arr[3][4] = { 0 };
//	printf("%d\n", sizeof(arr));  //3*4*4  //������\0�Ŀռ�
//	printf("%d\n", sizeof(arr[0][0])); //4/8 ��Ԫ�ص�ַ�Ĵ�С
//	printf("%d\n", sizeof(arr[0]));  //4*4 
//	printf("%d\n", sizeof(arr[0]+1));  //4  a[0]+1�ڶ���Ԫ�أ����ǵڶ��еĵ�ַ
//	printf("%d\n", sizeof(*(arr[0]+1)));  //4  �ڶ���Ԫ�ش�СΪ4���ֽ�
//
//	printf("%d\n", sizeof(arr + 1));  //4  ��ַ����4���ֽڣ�  �ڶ��е�ַ
//	//arr�Ƕ�ά�������������û��sizeof(������),Ҳû��&(��������������arr����Ԫ�ص�ַ
//	//�Ѷ�ά���鿴��һά�����ʱ�򣬶�ά�������Ԫ�ز������ĵ�һ�У�arr���ǵ�һ�У���Ԫ�أ��ĵ�ַ
//	
//	printf("%d\n", sizeof(*(arr + 1))); // 4*4  4��4�ֽڵĵڶ��е�����
//	printf("%d\n", sizeof(&arr[0] + 1));  //4  �ڶ��еĵ�ַ
//	printf("%d\n", sizeof(*(&arr[0] + 1))); // 16
//	printf("%d\n", sizeof(*arr));  //4*4  arr��һ�еĵ�ַ��*arr��һ�еĴ�С
//	printf("%d\n", sizeof(arr[3]));  //16    sizeof()ֻ�Ǹ������;��㣬���ﲻ����ķ��ʼ���rarr[3]�����ݣ���arr[3]�Ѿ�Խ��
//
//	printf("%p\n", arr + 1);   //�ڶ��е�ַ
//	printf("%p\n", &arr[0] + 1);//ǰ���Ľ��һ��  �ڶ��е�ַ
//	printf("%p\n", arr[0] + 1);  //�ڶ���Ԫ�ص�ַ
//	printf("%p\n", &arr[0][0]);   //��һ��Ԫ�ص�ַ
//
//}

/**/

//*************ָ��������1
//int main() {
//	int a[5] = { 1,2,3,4,5 };
//	int* p = (int*)(&a + 1);//ǿ������ת��
//	printf("%d,%d\n", *(a + 1), *(p - 1));//2  5  //2 1err
//}




//*****************8view2
//����p��ֵά0x100000,��֪�ṹ��Test�����Ĵ�СΪ20���ֽ�
//struct Test {
//	int num;
//	char* pcname;
//	short Sdate;
//	char chaa[2];
//	short sBa[4];
//}*p;
//int main() {
//	//ָ���һ��������ָ�����͵ĳ��ȡ�
//	//ָ�����;�����ָ��Ĳ���
//	p = (struct Test*)0x100000;
//	printf("%p\n", p + 0x1);   //0x00100014
//	printf("%p\n", (unsigned long)p + 0x1);  //0x00100001
//	pritnf("%p\n", (unsigned int *)p + 0x1);  //0x00100004
//
//}


////view3
//int main() {
//	int a[4] = { 1,2,3,4 };
//	int* p = (int*)(&a + 1);
//	int* p2 = (int*)((int)a + 1);//�����������ģ���������Ԫ�صĵ�ַתΪ���ͼ�һ
//	printf("%x,%x", p[-1], *p2);// 4��  2000000
//
//}


////view4  ���ű��ʽ��ʹ��
//int main() {
//	int a[3][2] = { (0,1),(2,3),(4,5) };
//	int* p;
//	p = a[0];
//	printf("%d ", p[0]);  //1
//}


////view5 ע���ӡ��ʽ��
//int  main() {
//	int a[5][5];
//	int(*p)[4];
//	p = a;
//	printf("%p,%d\n", &p[4][2] - &a[4][2],  &p[4][2] - &a[4][2]);//FFFFFFFC,-4
//}

//view6
//������������ŵ�
//��ά�������Ԫ����ָ��һ�У���Ԫ�صĵ�ַ��һ��ʾ�ڶ���
//
//int main() {
//	int aa[2][5] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* ptr1 = (int*)(&aa + 1);
//	int* ptr2 = (int*)(*(aa + 1));
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1)); 
//} 


//int arr[10]={1,2,3,4,5};
//int* p = arr;
//*(p + 2)==p[2]==arr[2]==*(arr+2);  //�ȼ۵�



//view7
//int main() {
//	char* a[] = { "work","at","sdfadf" };
//	char** pa = a;//paָ����Ԫ�صĵ�ַ
//	//&a��������ĵ�ַ
//	pa++;
//	printf("%s \n", *pa);
//}


//view8
//�����
//ע��ָ��++��ʱ��ָ�뱾�������ƶ���
//��ָ�����ӽ�1���������ָ���ƶ�֮��ģ���ָ�뱾���λ����Ȼû��
int main() {
	//ָ��ָ���ַ�������ָ����ֻ�������ĸ�ĵ�ַ
	char* c[] = { "enter","new","point","first" };
	char** cp[] = { c + 3,c + 2,c + 1,c };
	char*** cpp = cp;
	printf("%s\n", **++cpp);
	printf("%s\n", *--*++cpp+3);
	printf("%s\n", *cpp[-2]+3);
	printf("%s\n",cpp[-1][-1]+1);
	return 0;
}