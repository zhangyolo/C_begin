#define  _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
#include<string.h>

//struct s {
//	char name[2];
//	int age;
//};
//int main() {
//
//	struct s arr[10];
//	//��ط�������arr�����������һ����ֵ���Ժ����������䲻����
//
//	return 0;
//}
////C���Կ���֧�ִ����䳤�����  C99��׼
////��linux�б���C�ļ���ʱ��/ʹ�� gcc �ļ��� -std=c99 ����yi


#include<stdlib.h>
#include<string.h>
#include<errno.h>

//malloc
//int main() {
//	int *p=(int*)malloc(10 * sizeof(int)); //�������뵽���׵�ַ,��Ҫǿ��ת��Ϊ���������ͣ����ʧ�ܾͷ���NULL
//
//	if (p == NULL) {
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		printf("succeed apply");
//		for (int i = 0; i < 10; i++) {
//			*(p + i) = i;
//		}
//		for (int i = 0; i < 10; i++) {
//			printf("%d ",*(p + i) );
//		}
//	}
//		//����̬����Ŀռ䲻��ʹ�õ�ʱ�򣬾���Ҫ�ͷ�
//		// �����˷ѿռ䣬����������ͷţ���Ҫ�������������ڵ��ˣ��Ż��ͷţ��������˷��˿ռ�
//		//������ţ�
//	free(p);
//		//�������������ͷ��˿ռ�֮��ָ��p��Ȼ����ָ����������Ŀռ��ַ
//		//���Ա�������֮�����ã����������ٴν�����ֵΪNULL
//	p = NULL;
//
//}


////calloc
//int main() {
//	//malloc(10*sizeof(int));
//	int *p=(int *)calloc(10, sizeof(int));  //����֮��ѿռ��ʼ��Ϊ0
//	if (p == NULL) {
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		printf("succeed apply");
//		for (int i = 0; i < 10; i++) {
//			*(p + i) = i;
//		}
//		for (int i = 0; i < 10; i++) {
//			printf("%d ", *(p + i));
//		}
//	}
//	//�ͷŶ�̬����Ŀռ�
//	free(p);
//	p = NULL;
//
//}


//realloc

//int main() {
//	int* p = (int*)malloc(20);
// //int *p=(int *)realloc(NULL,20);��mallocһ���Ĺ���
//	if (p == NULL) {
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		printf("succeed apply");
//		for (int i = 0; i < 10; i++) {
//			*(p + i) = i;
//		}
//		for (int i = 0; i < 10; i++) {
//			printf("%d ", *(p + i));
//		}
//	}
//	//����ڴ治��ʹ���ˣ�����Ҫʹ��realloc�������ռ�Ĵ�С��
//
//	//��ʽһ��
//	//p = realloc(p, 40);//����д��Σ�գ������飬���ܻὫԭ���ĵ�ַŪ��
//
//	//��ʽ����
//	int *p2=realloc(p, 40);//������ĵ�ַ�����¿��ٵ��ڴ�
//	if (p2 == NULL)	
//		printf("%s\n", strerror(errno));
//	else {
//		p = p2;
//		for (int i = 5; i < 10; i++) {
//			*(p + i) = i;
//		}
//		for (int i = 0; i < 10; i++) {
//			printf("%d ", *(p + i));
//		}
//	}
//
//	free(p);
//	p = NULL;
//	
//	
//
//	//reallocʹ��ע�⣺
//	//1�����pָ��Ŀռ�֮�����㹻���ڴ�ռ����׷�ӣ���ֱ��׷�ӣ��󷵻�p
//	//2�����pָ��ռ�֮��û���㹻�Ŀռ�������ӣ�
//	//��realloc��������һ�����ڴ���п��٣�����ԭ���ڴ��е����ݿ�����������
//	//�ͷžɵ��ڴ�ռ䣻����󷵻��¿��Ŀռ��ַ
//	//3��������һ������������realloc���ص�ֵ�����ж�֮�󣬽��в���
//	return 0;
//}


#include<windows.h>
//�����Ķ�̬�ڴ����
//int main() {
//	int* p = (int*)malloc(sizeof(int) * 8);
//	//1��
//	//���p�ǿ�ָ�룬��ôһ�¶��ǷǷ���ֵ������
//	//��������Ӧ��ָ��p�����пգ��ΰ�����ʹ�ÿռ�
//	for (int i = 0; i <= 8; i++) {//5�������Ѿ�Խ��ʹ���ˣ�err
//		*(p + i) = i;  
//	}
//	free(p);
//	p = NULL;
//
//
//	//2��
//	/*int* q = 0x11;
//	free(q);*/ // ֻ�����ͷŶ�̬����Ŀռ�
//
//	//3
//	//freeֻ�ܴӶ�̬����Ŀռ����ʼλ�ÿ�ʼ�ͷ�
//	//�Զ�̬����ռ�Ĳ��ֿռ�����ͷ�
//	//for (int i = 0; i <= 8; i++) {//�����Ѿ�Խ��ʹ���ˣ�err
//	//	*p++ = i;
//	//}
//	//free(p);
//	//p = NULL;
//
//	//4��
//	//�������ظ��ͷ�ͬһ���ռ�
//	// 	   //Ϊ�˱����ظ��ͷţ�free()��nullһ������һ��ʹ��
//	//free(p);
//	////����
//	//free(p);
//	//p = NULL;
//
//	//5����̬�����ڴ������ͷţ��ڴ�й¶��
//	//��ʱ���룬��ʱ�ͷ�free
//	//���´��벻Ҫ���У�֪��ԭ����
//	/*while (1) {
//		free(malloc(1));
//		sleep(1000);
//	}*/
//}


//
//**************************
// //
//���������ʹ��
// //���ٵĿռ䶼�������ģ�����Ч�ʸߣ��������ڴ���Ƭ�Ƚ���
// ʹ������malloc,ֻ�ͷ�����
//struct S {
//    int n;
//    //int arr[10];
//
//    //δ֪����Ĵ�С����Ϊ���������Ա�������С���Ե���
//   // int arr[];//����д��C99�������,��Щƽ̨��������ʹ��������Ǹ�
//    int arr[0];
//};
//
//int main() {
//    // struct S s;
//     //printf("%d\n",sizeof(s));//4��С��������������Ĵ�С
//    struct S* ps = malloc(sizeof(struct S) + 5 * sizeof(int));  //5*sizeof(int)����������Ĵ�С
//    ps->n = 100;
//    for (int i = 0; i < 5; i++) {
//        ps->arr[i] = i;
//    }
//    for (int i = 0; i < 5; i++) {
//        printf("%d ", ps->arr[i]);
//    }
//    //����ռ䲻���ã���ô������reallocȥ�����ռ䣻
//    struct S* p1 = (struct S*)realloc(ps, 44);
//    if (p1 != NULL) {
//        ps = p1;
//        for (int i = 5; i < 10; i++) {
//            ps->arr[i] = i;
//        }
//        for (int i = 5; i < 10; i++) {
//            printf("%d ", ps->arr[i]);
//        }
//    }
//
//    free(ps);
//    ps = NULL;
//
//}



//Ҳ���Զ�̬���Ƴ��ȣ����ǿռ���ܲ�����
//����ʹ��malloc,��Ҫ�ͷ����Σ�ͬʱҪע���ͷŵ�˳��
//ÿʹ������malloc���ͻ�������һ��ռ䣬�������µ��ڴ���Ƭ�Ƚ϶�

struct SS {
	int n;
	int* arr;
};
int main() {
	struct SS* ps = (struct SS*)malloc(sizeof(struct SS));  
	ps->arr = (int*)malloc(sizeof(int) * 5);

	for (int i = 0; i < 5; i++) {
		ps->arr[i] = i;
	}

	for (int i = 0; i < 5; i++) {
		printf("%d ", ps->arr[i]);
	}


	//����ռ䲻���ã���ôʹ��reallocȥ����
	int* ptr =(int *) realloc(ps->arr, 10 * sizeof(int));
	if (ptr != NULL) {
		ps->arr = ptr;
	
	}	

		for (int i = 5; i < 10; i++) {
			ps->arr[i] = i;
		}
		for (int i = 5; i < 10; i++) {
			printf("%d ", ps->arr[i]);
		}

	//ʹ�ü���malloc��ֵ��ָ��,��Ҫ�ͷż���
	free(ps->arr);
	ps->arr = NULL;
	free(ps);

	ps = NULL;



}