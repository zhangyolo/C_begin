#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


#include<stdlib.h>//������һЩϵͳ�����ʱ��

//int main() {
//	for (int i = 0; i < 10; i++) {
//		printf("%d ", i);
//	}
//	system("pause");//ϵͳ���е������ʱ����ͣ
//	return 0;
//}

//int main() {
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	for ( i = 0; i <=12; i++) {
//		printf("hehe\\");
//		arr[i] = 0;
//	}
//	return 0;
//}



//��׳˵ĺ�
//int main() {
//	int in = 0;
//	scanf("%d", &in);
//	int sum = 0;
//	for (int i = 0; i < in; i++) {
//		int ret = 1;
//		for (int j = 1; j < i; j++) {
//			ret = ret * j;
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//
//}


/*
void my_strcpy2(char* s, char* v,int l){
	int i = 0; 
	for (i = 0; i < l; i++) {
		s[i] = v[i];
	}

}
void my_strcpy1(char* s, char* v) {
	while (*s != '\0') {//������û�н��������ſ�����ȥ
		//*s = *v;
		//s++;
		//v++;
		*s++ = *v++;
	}
	*s = *v;//�ٸ�ֵһ����������

}
void my_strcpy3(char* s, char* v) {//�Ż�
	if (s != NULL && v != NULL) {
		while (*s++ = *v++) {//������Ҳ���������ſ�����ȥ
			;
		}
	}
}

#include<assert.h>
void my_strcpy4(char* s, char* v) {//�Ż�
	assert(s != NULL);//����
	assert(v != NULL);//����
	if (s != NULL && v != NULL) {
		while (*s++ = *v++) {//������Ҳ���������ſ�����ȥ
			;
		}
	}
}

char* my_strcpy5(char* s,const char* v) {//�Ż��ռ�
	//���⽫Դ��Ŀ�ĵ�λ��д���ˣ���ʹд���ˣ�Ҳ�ܷ��ִ��������Ϊconst�ı�����������Ϊ��ֵ
	//ͬͨ��const����*p������pָ��ĵ�ַ�д�ŵ�ֵ�������޸���
	char*ret=s;
	assert(s != NULL);//����
	assert(v != NULL);//����
	while (*s++ = *v++) {//��Vָ����ַ���������Sָ��Ŀռ䣬������������
		;
	}
	return ret;
}


int main() {
	char a[] = "########";
	char c[] = "bit4sdfu";
	int sc=sizeof(a) / sizeof(a[0]);//����ĳ��ȼ����˽�������
	//strcpy(a, c);  //���Ǻ����������еĿ����ַ��ĺ��������Ҫ���ã���Ҫ����ͷ�ļ���ͬʱ�����������������Ҳ������ȥ��
	//my_strcpy1(a,c);
	//my_strcpy2(a, c,sc);
	//my_strcpy3(a, c);
	// 	   
	//������������ָ�룬�Ƿ��н�����������ʹ��ָ�룬�Ͳ��ƻ�֮ǰ������
	//my_strcpy3(a, NULL);//��ӡԭ��a������

	my_strcpy4(a,NULL); //Assertion failed: v != NULL, file D:\C__����\debug\Դ.c, line 72

	printf("%s\n", a);

	printf("%s\n", my_strcpy5(a,c));//��ʽ���ʣ�ͨ��������������ֵ��Ϊ��һ�������Ĳ���

	printf(a);
}*/


//�ַ������ȵļ���
//#include<assert.h>
//int my_strlen(const int* s) {//����������ַ�������β�Ϊָ��
//	int count = 0;
//	assert(*s != NULL);//���ԣ���ָ֤�����Ч��
//	while (*s != '\0') {
//		count++;
//		s++;
//	}
//	return count;
//}
//
//int main() {
//	int s[23] = "sdfs";
//	printf("%d", my_strlen(s));
//
//}





//const�����
//int main() {
//	const int a = 9;
//	int* p = &a;
//	*p = 8;
//	printf("%d", a);//8
//	//�������ﲻ����const���������ʣ�const���εı����������޸ģ�������ͨ��*p�ı�ԭֵ
//
//	const int* q = &a;
//	//*q = 90;//��Ϊָ��*p������Ϊconst�����Բ������޸ģ��˴�����
//	
//
//	int* const t = &a;
//	*t = 20;//����û�б���˵�����ǿ����޸�a��ֵ������Ϊconst���ε���t���������޸�ָ���ָ��
//	printf("%d", a);//20
//
//	int n = 23;
//	//t = &n;//���ﱨ������Ϊָ��t��ֵΪconst���������޸�
//
//
//}