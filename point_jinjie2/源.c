#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//--ָ����ָ�������ָ��

//int ADD(int a, int u) {
//	return a + u;
//}
//int main() {
//	int arr[10] = { 0 };
//	int(* p)[10] = &arr;//ȡ������ĵ�ַ
//
//	int (*pf)(int, int) = ADD;//����ָ�룬ָ����
//	int (*pfar[4])(int, int) = { ADD };
//	int (*(*ppfar)[4])(int,int)=&pfar;  
//	//ppfar����ָ����ָ�����������ָ�룬ָ��ָ���������4��Ԫ�أ�
//	//ÿ��Ԫ�ص�������һ������ָ�룬ָ����������Ϊ(int (*)(int,int))
//	return 0;
//
//}



//�ص�����
//void print(char* str) {
//	printf("hehe:%s",str);
//}
//void test(int (*p)(char*)) {
//	printf("test\n");
//	p("cc");//ͨ��ָ����ú���
//}
//int main() {
//	test(print);
//	return 0;
//}



//�ع�ָ�����ͣ�
/*
int Add(int a, int b) {
	return a + b;
}
int main() {
	//ָ������  ��һ�����飬����Ԫ�ض���ָ��
	int* arr[10];

	//����ָ��  pa��һ��ָ�룬ָ��һ������
	int (*pa)[10] = &arr;//&arrȡ����������
	//ָ������ָ���ָ��
	
	//����ָ��
	int (*p)(int, int) = Add;
	//���ú���
	p(4, 5);
	(*p)(5,6);


	//����ָ������
	int (*parr[10])(int, int) = {Add};
	int sum=parr[0](4, 5);
	printf("%d\n", sum); //9

	//ָ����ָ�������ָ��PParr
	int(*(*PParr)[10])(int, int) = &parr;  //z���������ַ
}
*/








///******************************************
//ð������
//֮ǰ�Ĵ���ֻ���������͵�����
//
//C���Կ⺯������qsort �������������������͵ĺ���
//�˴�ֻ�ǵ��ÿ⺯����qsort������ԭ����Բ鿴�⺯��-ת������
//����һ��qsort_s�Ƚ��ı�
void BubbleSort(int *p, int se) {
		int flag = 1;
	for (int i = 0; i < se-1; i++) {  //n������,�Ƚ�n-1��
		int j = 0;
		for (int j = 0; j < se -1-i; j++) {//��i�������Ƚ�se-1-i��
			if (p[j] > p[j + 1]) {
				flag = 0;
				int temp = p[j];
				p[j] = p[j + 1];
				p[j + 1] = temp;
			}
			else flag = 1;
		}
		if (flag) return;
	}
}

struct stu {
	char name[20];
	int age;
};

//void qsort(void* base, size_t nitems, size_t size,
//	int (*compar)(const void*, const void*))
//{}
/*
base -- ָ��Ҫ���������ĵ�һ��Ԫ�ص�ָ�롣
nitems -- �� base ָ���������Ԫ�صĸ�����
size -- ������ÿ��Ԫ�صĴ�С�����ֽ�Ϊ��λ��
compar -- �����Ƚ�����Ԫ�صĺ�����
	//�������ú���ָ�룬����ʵ�ξͿ���ֱ��д��������������ַ��********
	����1-����2�� ��ȷ���0�����ڷ���1��С�ڷ���-1
*/

//void *aa;ָ��aa���Խ����������͵�ָ��
// void*���Ͳ����Խ�����ֵ����Ĳ�����void *���Խ����������͵�ָ��
// //�����þ��������ڴ�Ŀռ䳤�ȣ�����void *���͵�ָ�벻���Խ��н����ò���
// *aa=0  ���� ��Ϊ��֪�����ʶ��Ŀռ�
//ָ�붼��4���ֽڵģ�ָ�������ֻ�Ǿ������Ĳ���
//void *���ͽ��бȽ�ʱ��Ҫ����ǿ��ת��Ϊ��Ӧ�����ͣ��ٱȽ�

int com_int(const void *p,const void *q) {
	//*p, * q;//����void*���Ͳ����Խ��н����ã�������Ҫǿ������ת��ʱ�򣬽��бȽ�
	return *(int*)p - *(int*)q;
}


int com_float(const void* p, const void* q) { 
	//��������������ܻ��Ǹ����ͣ��ᵼ�·��ص�ʱ��Ĵ�������ֱ��ʹ�ö��֦ȥ���壬���
	if (*(float*)p == *(float*)q)return 0;
	else if(*(float*)p > *(float*)q) return 1;
	else return -1;
}

#include<stdlib.h>
void test1_int() {
	int arr[10] = { 1,2,5,3,4,6,7,8,9,10 };
	int se = sizeof(arr) / sizeof(arr[0]);
	//BubbleSort(arr, se);

	qsort(&arr[0], se, sizeof(arr[0]), com_int);
	//�ȼ۵ģ���Ϊarr=&arr[0]
	//qsort(arr, se, sizeof(arr[0]), com_int);

	int i = 0;
	for (i = 0; i < se; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void test_pu() {
int arr[10] = { 1,2,5,3,4,6,7,8,9,10 };
	int se = sizeof(arr) / sizeof(arr[0]);
	BubbleSort(arr, se);


	int i = 0;
	for (i = 0; i < se; i++) {
		printf("%d ", arr[i]);
	}

	printf("\n");
}

void test_float() {
	float f[] = { 3.6,3.5,23.0,1.0 };
	int se = sizeof(f) / sizeof(f[0]);
	qsort(f, se,sizeof( f[0]), com_float);
	int i = 0;
	for (i = 0; i < se; i++) {
		printf("%f ", f[i]);
	}
	printf("\n");

}
int cmp_struct_age(const void *p,const void *q) {
	return ((struct stu*)p)->age - ((struct stu*)q)->age;

}
#include<string.h>
int cmp_struct_name(const void* p, const void* q) {
	return strcmp(((struct stu*)p)->name, ((struct stu*)q)->name);

}
void test_stu_age() {
	struct stu s[3] = { {"sdf",22},{"zz",20},{"cc",20} };
	int se = sizeof(s) / sizeof(s[0]);
	qsort(s, se, sizeof(s[0]), cmp_struct_age);
	int i = 0;
	for (i = 0; i < se; i++) {
		printf("%s-%d\n", s[i].name,s[i].age);
	}
}
void test_stu_name() {
	struct stu s[3] = { {"zhangyinmei",22},{"wen",20},{"chenxue",20} };
	int se = sizeof(s) / sizeof(s[0]);
	qsort(s, se, sizeof(s[0]), cmp_struct_name);
	int i = 0;
	for (i = 0; i < se; i++) {
		printf("%s-%d\n", s[i].name, s[i].age);
	}
}



//�Ż��汾�����в�ͬ���ݵıȽ�
//ͨ������Bubble_random�����������д����������͵��������ͣ�������ʵ��������
//��Ҫ����д�ȽϺ���
void Swap(char* q,char* p,int w) {
	//ÿһ��Ԫ����ռ�ռ��С��ÿһλ���н���
	int i = 0;
	char tmp = 0;
	//�ַ�����һ���ֽڣ�ÿ�β�����һ���ֽڣ�����ÿһ�����Ƚ�Ԫ�صĿռ䳤�ȣ����н���
	for ( i = 0; i < w; i++) {
		tmp = *q;
		*q = *p;
		*p = tmp;
		q++;
		p++;
	}
	//0xDC0AFB7F ����δ��������쳣(�� point_jinjie2.exe ��) : 0xC00001A5 : ��⵽��Ч���쳣����������̡�(���� : 0x00000003)��
}
void Bubble_random(void* base, int se, int width, int (*cmp)(void * e1, void * e2) ){
	//���ڲ�֪�������Ƚϵ��������ͣ�����ʹ��void *ȥ����
	// 	   width��ÿһ��Ԫ�صĴ�С����λ�ֽ�
	//
	int i = 0;
	for (i = 0; i < se - 1; i++) {
		int j = 0;
		for (j = 0; j< se - 1 - i; j++) {
			if ( cmp( (char*)base + j * width, (char*)base + (j + 1) * width)>0) {
				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
			}
		}
	}
}


void test_Bubble_ran_int() {
	int arr[10] = { 2,3,4,1,6,4,2,7,8,9 };
	int se = sizeof(arr) / sizeof(arr[0]);

	Bubble_random(arr, se, sizeof(arr[0]), com_int);
	int i = 0;
	for (i = 0; i < se; i++) {
		printf("%d ", arr[i]);
	}

}

void test_Bubble_ran_age() {
	struct stu s[3] = { {"zhangyinmei",22},{"wen",20},{"chenxue",20} };
	int se = sizeof(s) / sizeof(s[0]);
	Bubble_random(s, se, sizeof(s[0]), cmp_struct_age);
	int i = 0;
	for (i = 0; i < se; i++) {
		printf("%s-%d\n", s[i].name, s[i].age);
	}
}

void test_Bubble_ran_name() {
	struct stu s[3] = { {"zhangyinmei",22},{"wen",20},{"chenxue",20} };
	int se = sizeof(s) / sizeof(s[0]);
	Bubble_random(s, se, sizeof(s[0]), cmp_struct_name);
	int i = 0;
	for (i = 0; i < se; i++) {
		printf("%s-%d\n", s[i].name, s[i].age);
	}
}

int main() {

	/*test1_int();
	test_float();
	test_stu_age();
	test_stu_name();*/

	test_Bubble_ran_name();

	//ͨ��qsort�����ĵ��ã�ʹ�����������Ͷ����Խ��бȽ�
}