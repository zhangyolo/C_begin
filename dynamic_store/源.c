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
//	//这地方的数组arr的容量如果是一个定值，对后续操作极其不方面
//
//	return 0;
//}
////C语言可以支持创建变长数组的  C99标准
////在linux中编译C文件的时候/使用 gcc 文件名 -std=c99 即可yi


#include<stdlib.h>
#include<string.h>
#include<errno.h>

//malloc
//int main() {
//	int *p=(int*)malloc(10 * sizeof(int)); //返回申请到的首地址,需要强制转换为容器的类型；如果失败就返回NULL
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
//		//当动态申请的空间不再使用的时候，就需要释放
//		// 避免浪费空间，如果不主动释放，就要等它的生命周期到了，才会释放，这样就浪费了空间
//		//随用随放；
//	free(p);
//		//即便我们主动释放了空间之后，指针p仍然还会指向我们申请的空间地址
//		//所以避免有心之人利用，所以我们再次将他赋值为NULL
//	p = NULL;
//
//}


////calloc
//int main() {
//	//malloc(10*sizeof(int));
//	int *p=(int *)calloc(10, sizeof(int));  //申请之后把空间初始化为0
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
//	//释放动态申请的空间
//	free(p);
//	p = NULL;
//
//}


//realloc

//int main() {
//	int* p = (int*)malloc(20);
// //int *p=(int *)realloc(NULL,20);和malloc一样的功能
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
//	//如果内存不够使用了，就需要使用realloc来调整空间的大小；
//
//	//方式一：
//	//p = realloc(p, 40);//这样写很危险，不建议，可能会将原来的地址弄丢
//
//	//方式二：
//	int *p2=realloc(p, 40);//以申请的地址，重新开辟的内存
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
//	//realloc使用注意：
//	//1、如果p指向的空间之后有足够的内存空间可以追加，则直接追加，后返回p
//	//2、如果p指向空间之后，没有足够的空间进行增加，
//	//则realloc回重新找一个新内存进行开辟，并把原来内存中的数据拷贝回来，并
//	//释放旧的内存空间；，最后返回新开的空间地址
//	//3、引入另一个变量来接收realloc返回的值，并判断之后，进行操作
//	return 0;
//}


#include<windows.h>
//常见的动态内存错误
//int main() {
//	int* p = (int*)malloc(sizeof(int) * 8);
//	//1、
//	//如果p是空指针，那么一下都是非法赋值，报错
//	//所以首先应对指针p进行判空，次啊可以使用空间
//	for (int i = 0; i <= 8; i++) {//5、这里已经越界使用了，err
//		*(p + i) = i;  
//	}
//	free(p);
//	p = NULL;
//
//
//	//2、
//	/*int* q = 0x11;
//	free(q);*/ // 只允许释放动态申请的空间
//
//	//3
//	//free只能从动态申请的空间的起始位置开始释放
//	//对动态申请空间的部分空间进行释放
//	//for (int i = 0; i <= 8; i++) {//这里已经越界使用了，err
//	//	*p++ = i;
//	//}
//	//free(p);
//	//p = NULL;
//
//	//4、
//	//不可以重复释放同一个空间
//	// 	   //为了避免重复释放，free()和null一定搭配一起使用
//	//free(p);
//	////……
//	//free(p);
//	//p = NULL;
//
//	//5、动态开辟内存忘记释放（内存泄露）
//	//及时申请，及时释放free
//	//以下代码不要运行，知道原理即可
//	/*while (1) {
//		free(malloc(1));
//		sleep(1000);
//	}*/
//}


//
//**************************
// //
//柔性数组的使用
// //开辟的空间都是连续的，访问效率高，产生的内存碎片比较少
// 使用依次malloc,只释放依次
//struct S {
//    int n;
//    //int arr[10];
//
//    //未知数组的大小，称为柔性数组成员，数组大小可以调整
//   // int arr[];//这里写法C99是允许的,有些平台不允许，就使用下面的那个
//    int arr[0];
//};
//
//int main() {
//    // struct S s;
//     //printf("%d\n",sizeof(s));//4大小不包含柔性数组的大小
//    struct S* ps = malloc(sizeof(struct S) + 5 * sizeof(int));  //5*sizeof(int)是柔性数组的大小
//    ps->n = 100;
//    for (int i = 0; i < 5; i++) {
//        ps->arr[i] = i;
//    }
//    for (int i = 0; i < 5; i++) {
//        printf("%d ", ps->arr[i]);
//    }
//    //如果空间不够用，那么下面用realloc去调整空间；
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



//也可以动态控制长度，但是空间可能不连续
//两次使用malloc,需要释放两次，同时要注意释放的顺序
//每使用依次malloc，就会重新找一块空间，这样导致的内存碎片比较多

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


	//如果空间不够用，那么使用realloc去开辟
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

	//使用几次malloc赋值的指针,就要释放几次
	free(ps->arr);
	ps->arr = NULL;
	free(ps);

	ps = NULL;



}