#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

/*
void test(int arr[]) {
	int se = sizeof(arr) / sizeof(arr[0]);
	printf("%d", se);  
	//32ƽ̨�����1��int��32ƽ̨��ָ�붼��4���ֽڣ� 1
	//64ƽ̨��ָ��8���ֽ�/int��4���ֽ�=2


}
int main() {
	int arr[] = { 1,3,5, 6 };
	test(arr);
	return 0;
}*/


///�ַ�����
//int main() {
///*	char arr[] = "sdfsd";
//	char* pp = arr;
//	//ע��%s������
//	//arr��ָ��p����ָ����Ԫ�أ�����%s����ϵͳһֱ��ӡ��֪������\0
//	printf("%s\n", arr);  //sdfsd
//	printf("%s\n", pp);   //sdfsd
//	*/
//
//	char* p = "sdffda";//�����ַ���   const char*p="sdfffds";������ʾ�����
//	//*p = 'c';�˲����ᱨ���������޸ĳ���
//	///����ʽһ�������ַ�����   ֻ�ǰ��ַ��������ַ��ĵ�ַ�ŵ���ָ��p����
//	//���ǰ��ַ����ŵ�ָ��p���� 
//	printf("%c\n", *p);//s  ˵��ָ��pָ��sdffda������Ԫ�صĵ�ַ��*pa=a
//	printf("%s\n", p);  //sdffda
//
//	return 0;
//}





//int main() {
//	//�ַ����������ڴ��д�ŵ�λ���ǹ̶���
//	char arr1[] = "dfsadf";//�ַ�������
//	///arr1 = "sdfs";//���ﱨ�����ʽ����ֵ�����ǿ����޸ĵ���ֵ�� ˵��arr�д�ŵ��ǳ������������޸�
//	char arr2[] = "dfuadf";
//
//	//pp1,pp2ָ�����ͬһ�������ַ������׵�ַ������ġ�dfsadf��ֻ�����һ�ݣ�ֻ��������ָ��ָ����
//	//����const���θ�����⣬�׶�
//	const char* pp1 = "dfsadf";
//	const char* pp2 = "dfsadf";
//
//	if (pp1 == pp2)//ָ���ָ��ͬһ�����ݵĵ�ַ������ָ���д�ŵĵ�ַ����ͬ�ģ�����ָ�뱾�����ڴ��еĵ�ַ��ͬ
//		printf("Sdfs");
//	else printf("Sdf");
//
//	/*if(arr1 == arr2)//��Ȼ������ͬ�����ǵ�ַ��ͬ
//		printf("Sdfs");
//	else printf("Sdf");*/
//
//	//���µĵ�ַ���ǲ�ͬ��
//	printf("%p\n", &pp1);
//	printf("%p\n", &pp2);
//	printf("%p\n", &arr1);
//	printf("%p\n", &arr2);
//
//}


////ָ������
//int main() {
//	int a[10] = { 0 }; //��������
//	char s[33] = { 0 };  //�ַ�����
//	int* ss[9];//�������ָ���ָ������  ---ָ������
//	char* e[8];//����ַ�ָ�������   ---ָ������
// int *p=NULL;//����ָ�룬ָ�����͵�ָ�룬���Դ�����͵ĵ�ַ
// char *q=NULL;//�ַ�ָ�룬ָ���ַ���ָ�룬���Դ���ַ��ĵ�ַ
// //����ָ��ָ�������ָ�룬ָ������ĵ�ַ
//  int arr[10]={1,2,3};
// int (*p)[10]=&arr;   //pΪ����ָ�룬��������ĵ�ַ
//}



/*int main() {
	int a =9; int b = 7;
	int c = 7;
	int* arr[3] = { &a,&b,&c };
	for (int i = 0; i < 3; i++) {
		printf("%d " ,* (arr[i]));
	}
	return 0;
}*/
	



//int main() {
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = {
//		1,2,3,4,5,
//	};
//	int arr3[] = {
//		3,4,5,6,7
//	};
//
//	int* p[] = { arr1,arr2,arr3 };
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 5; j++) {
//			printf("%d ", *(p[i] + j));
//		}
//		printf("\n");
//	}
//}


//����ָ��
//int main() {
//	char arr1[5] = { 2,3,4,5,6 };
//	char (*P)[5] = &arr1;
//	//arr1��ָ������Ԫ�صĵ�ַ
//	//&arr1��ָ�������ռ�ĵ�ַ
//
//	char* arr2[5];
//	char*(*P)[5] = &arr2;
//	return 0;
//}

//int main() {
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	int* q = arr;
//	int(*p)[10] = &arr;
//	for (int i = 0; i < 10; i++) {
//		//һ�����־���ȷ��
//		printf("%d ", (*p)[i]);
//		printf("%d ", *(*p + i));  
//		printf("%d ", *(q + i));
//	}
//}



//����ָ���ά��ʹ��
//void print1(int a[3][5],int x,int y) {//����Ϊ����
//	for (int i = 0; i < x; i++) {
//		for (int j = 0; j < y; j++) {
//			printf("%d ", a[i][j]);
//		}
//
//		printf("\n");
//	}
//}
//void print2(int(*p)[5], int x, int y) {//����Ϊָ��
//	for (int j = 0; j < x; j++) {
//
//		for (int i = 0; i < y; i++) {
//			//һ�����־���ͬ
//			printf("%d ", *(*(p + j)+i));
//		/*	printf("%d ",p[j][i]);
//			printf("%d ", *(p[j] + i));
//			printf("%d ",(*(p+j))[i]);*/
//		}
//		printf("\n");
//	}
//}
//
//int main() {
//	int arr[3][5] = { {1,2,3,4,5},{1,3,4,5,2},{5,6,7,8,8} };
//	//print1(arr, 3, 5);
//	print2(arr, 3, 5);
//	//���ﴫ�ݵ��ǵ�һ�еĵ�ַ����ά�������Ԫ�ص�ַָ���ǵ�һ�еĵ�ַ������������ַ�Ļ�������ʹ��ָ��������
//
//	//int arr[10] = { 4,5,6,7,8,9,5,4,3,2 };
//	//int* p = arr;
//	//for (int i = 0; i < 10; i++) {
//	//	/*printf("%d ", *(arr + i));
//	//	printf("%d ", *(p + i));
//	//	printf("%d ", arr[i]);*/
//	//	printf("%d ",p[i]);
//	//}
//}
//



//�ع�
//int main() {
//	//�ַ�ָ��
//	char ch = 'i';
//	char* p = &ch;
//	const char* p2 = "dfs";
//
//	//ָ������ --���ָ�������
//	int* arr[10];
//	char* ch[9];
//
//	//����ָ��
//	int* p3;
//
//
//	int arr2[5];
//	//pa��һ������ָ�롣�������� int(*)[5];
//	int(*pa)[5] = &arr2;
//	return 0;
//
//}


//��ά���鴫����
//����ֻ��ʡ���к�
//void test(int arr[3][5]) {}
////void test1(int arr[][]) {} //err 
////void test2(int arr[3][]) {}  //err
//void test3(int arr[][4]) {}
//
//void test4(int** arr) {}  //errָ�����Ͳ�һ�£�һ��һ����һ������
//void test5(int* arr) {}  //err
//void test6(int(*arr)[5]) {}
//void test7(int* arr[5]) {}  //����ʵ�����βε����Ͳ�һ��
//
//int main() {
//	int arr[3][5] = { 0 };
//	test7(arr);
//}


//����ָ��  ��ź�����ַ��ָ��
//int ADD(int a, int b) {
//	return a + b;
//}
//int main() {
//	int a = 3; int b = 5;
//	printf("%d\n",ADD(a, b));
//
//	//��ӡ�����ĵ�ַ
//	//���������Ǻ����ĵ�ַ=&������
//	
//	int(* p)(int,int) = ADD;//������ַ �����;��Ǻ������ص�����
//	printf("%d\n", (*p)(a, b));
//	printf("%d\n", (**p)(a, b));
//	printf("%d\n", (***p)(a, b));//����Ľ�������û�õģ�ֻ��һ��*������
//	//printf("%d\n", *p(a, b));//���Ǵ����Ŷ
//
//	//һ�µ�ַ����һ����
//	printf("%p\n", p);
//	printf("%p\n",*p);
//	printf("%p\n", &ADD);
//	printf("%p\n", ADD);
//}


//void Printf(char* p) {
//	printf("%s\n", p);
//}
//int main() {
//	char(*p)(char*) = Printf;//ע�⺯�������� 
//	(*p)("hellow bit");//���ú���
//	
//}




//��Ҫ���������
//void (* signal(int, void(*)(int)))(int);
////�����������ǣ�void (* )(int);
//
////�����ͱ�����
//typedef unsigned int u_int;
//typedef void(* pfun_t)(int);
//
//pfun_t signal(int, void(*)(int));
//


///����ָ������
////����������
//int ADD(int a, int b) {
//	return a + b;
//}
//int sub(int a, int b) {
//	return a - b;
//}
//int mul(int a, int b) {
//	return a * b;
//}
//int main() {
//	int* arrr[5];
//	int (*pa)(int, int) = ADD;//pָ���п��Դ�ź����ĵ�ַ����Ϊ����һ��
//	//��������Ҫ����pa��ָ��������,һ�δ�Ŷ��������ͬ����
//	int (*parr[3])(int, int) = { ADD,sub,mul };
//
//	for (int i = 0; i < 3; i++) {
//		printf("%d\n",parr[i](4, 5));
//	}
//
//	return 0;
//
//}



//char* my_strcpy(char* de,const char* s);
//
//int main() {
//	char (*pf)(char*, const char*) = my_strcpy;
//
//	char (* p[4])(char*, const char*) = { my_strcpy };
//
//}






//����������
int ADD(int a, int b) {
	return a + b;
}
int sub(int a, int b) {
	return a - b;
}
int mul(int a, int b) {
	return a * b;
}
int  div(int a, int b) {
	return a / b;
}
intxor (int a, int b) {
	return a ^ b;
}

void menu() {
	printf("------------------------------------\n");
	printf("******1��add   2��sub***************\n");
	printf("******3��mul   4��div**************\n");
	printf("******5��xor   0��exit**************\n");
	printf("------------------------------------\n");

}
//int main() {
////ʹ��switch���ַ�����һ���й��ܣ���Ҫ���һ��switch��caseѡ��
//	int a, b;
//	int input;
//	do {
//		menu();
//		printf("chose:>\n");
//		scanf("%d", &input);
//
//		switch (input) {
//		case 1:
//			 printf("�������������>>");
//			scanf("%d%d", &a, &b);
//			printf("%d\n",ADD(a,b));
//			break;
//		case 2:
// 			 printf("�������������>>");
//			 scanf("%d%d", &a, &b);
//			printf("%d\n", sub(a,b));
//			break;
//		case 3:
//			 printf("�������������>>");
//			scanf("%d%d", &a, &b);
//			printf("%d\n", mul(a, b));
//			break;
//		case 4:
//			 printf("�������������>>");
//			scanf("%d%d", &a, &b);
//			printf("%f\n", div(a, b));
//			break;
// 		case 5:
//			 printf("�������������>>");
//			scanf("%d%d", &a, &b);
//			printf("%f\n", xor(a,b));
//			break;
//		case 0:
//			printf("exit");
//			break;
//		default:
//			break;
//		}
//	} while (input);//����������
//	return 0;
//
//}



//���������Ż�һ
//int main() {
//	//ͨ��ָ������ȥ���ú���
//	//�����Ҫ��ӹ��ܣ�ֻ��߸��Ĳ˵�������ָ����������Ӹú����ĵ�ַ
//	int (*parr[])(int, int) = {0, ADD,sub,mul,div,xor };
//	int se = sizeof(parr) / sizeof(parr[0]);
//	int input;
//	do {
//		menu();
//		printf("chose:>");
//		
//		scanf("%d", &input);
//		int a, b;
//		if (input <= se && input > 0) {
//			printf("�������������>>");
//			scanf("%d%d", &a, &b);
//			int ret = parr[input](a, b);
//			printf("%d\n", ret);
//		}
//		else if (!input)
//			printf("�˳�");
//		else {
//			printf("again");
//		}
//
//	} while (input);
//
//	return 0;
//
//}


void Cacl(int (*p)(int, int)) {
	int a, b;
	printf("�������������>>");
	scanf("%d%d", &a, &b);
	printf("%d\n", p(a, b));
}


//�����������Ż���--ģ�黯
//int main() {
////ʹ��switch���ַ�����һ���й��ܣ���Ҫ���һ��switch��caseѡ��
//	int a, b;
//	int input;
//	do {
//		menu();
//		printf("chose:>\n");
//		scanf("%d", &input);
//
//		switch (input) {
//		case 1:
//			Cacl(ADD);
//			break;
//		case 2:
//			Cacl(sub);
//			break;
//		case 3:
//			Cacl(mul);
//			break;
//		case 4:
//			Cacl(div);
//			break;
// 		case 5:
//			Cacl(xor);
//			break;
//		case 0:
//			printf("exit");
//			break;
//		default:
//			break;
//		}
//	} while (input);//����������
//	return 0;
//
//}



//���������Ż���
int main() {
	//ͨ��ָ������ȥ���ú���
	//�����Ҫ��ӹ��ܣ�ֻ��߸��Ĳ˵�������ָ����������Ӹú����ĵ�ַ
	int (*parr[])(int, int) = {0, ADD,sub,mul,div,xor };
	int se = sizeof(parr) / sizeof(parr[0]);
	int input;
	do {
		menu();
		printf("chose:>");
		
		scanf("%d", &input);
		int a, b;
		if (input <= se && input > 0) {
			Cacl(parr[input]);//ͨ����������ַ����calc�У�ͬ�����㣻�����˴�����ظ�
		}
		else if (!input)
			printf("�˳�");
		else {
			printf("again");
		}

	} while (input);
	return 0;

}