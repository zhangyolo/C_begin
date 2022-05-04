#define  _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>


//***********************8
//struct stu {
//	int agel;
//	char name[9];
//
//}s1,s2;//两个全局变量。声明的同时创建一个变量

//struct nv {
//	int age;
//	char name[9];
//	
//};
//typedef struct stu {
//	int age;
//	char name[9];
//	struct nv z;//嵌套 另一个结构体
//
//}Stu;		//struct stu的别名，Stu也是一个结构体类型
//
//
//void print(Stu s) {
//	printf("%d\n",s.age);//.后面跟变量名，不是变量值
//	printf("%s\n", s.name);//.后面跟变量名，不是变量值
//
//}
//
//
//void print1(Stu* ps) {
//	printf("%d\n", ps->age);//.后面跟变量名，不是变量值
//	printf("%s\n", ps->name);//.后面跟变量名，不是变量值
//
//}
//int main() {
//	struct stu s;//局部变量
//	Stu s2;//这也可以声明结构体变量
//
//	struct nv zhang = { 22,"zhang" };//女朋友
//
//	Stu chen = { 22,"feng",zhang };//初始化变量ched的相关信息和女朋友
//
//	print(chen);//打印chen
//	struct nv* q = &zhang;
//    print1(q);//打印zhang
//	
//	printf("%s的女朋友是：%s\n", chen.name, chen.z.name);//.后面跟变量名，不是变量值
//	
//	 Stu* p = &chen;
//	 printf("%s的女朋友是：%s\n", p->name, p->z.name);//.后面跟变量名，不是变量值
//
//}



//…………………………………………………………………………………………
//struct {
//	int a; int b;
//}pa;
//struct {
//	int a; int b;
//}*ppa;
//
//int main() {
//	ppa = &pa;
//}




//结构体的自引用
//链表结点的表示
//struct node {
//	int data;
//	//struct node n;//这种写法是错误的
//	struct node* next;//存放下一个结点的地址
//};


//结构体的重定义类型
//typedef struct node {  //结构体类型的重定义
//	int data;
//	struct node* next;
//}node_t;
//
////typedef struct {  //匿名结构体，尽量不要使用类型的别名，容易引起错误理解
////	int data;
////	node_tn* next;
////}node_tn;
//
//
//int main() {
//	node_t n;  //利用重定义的
//	struct node n1;
//
//}


//结构体的大小，内存对齐
//struct s {
//	int a;
//	double b;
//};
//
//int main() {
//	struct s se = { "3,3.4" };
//	printf("%d", sizeof(se));//16
//}




//#pragma pack(4) //设置默认的对齐数为4
//struct S {
//	char c1;
//	double d;
//};
//#pragma pack()  //恢复默认的对齐数
//
//#pragma pack(1) //设置默认的对齐数为1
//struct SS{
//	char c1;
//	double d;
//};
//#pragma pack()  //恢复默认的对齐数
//
//int main() {
//	struct S s1;
//	printf("%d\n", sizeof(s1));
//
//	struct SS s2;
//	printf("%d\n", sizeof(struct SS));
//}




//百度面试题  offsetof（）的理解
//#include<stddef.h>  //必须引入
//struct So {
//	char c;
//	int i;
//	double d;
//};
//int main() {
//	printf("%d\n", offsetof(struct So, c)); 
//	printf("%d\n", offsetof(struct So, i));
//	printf("%d\n", offsetof(struct So, d));
//
//	return 0;
//
//}




//传参的结构体
struct SS {
	int a; char b;
	double d;
};
void Ini_struct_p(struct SS *tmp) {
	(*tmp).a = 9;  //tmp->a=9;
	(*tmp).b = 'r';
	(*tmp).d = 3.45;
}
void Ini_struct(struct SS tmp) {
	tmp.a = 9;  //tmp->a=9;
	tmp.b = 'r';
	tmp.d = 3.45;
}
void print_struct(struct SS tmp) {
	printf("%d %c %f", tmp.a, tmp.b, tmp.d);
}

void print_struct_point(const struct SS* tmp) {//因为害怕指针tmp改变其变量，这样就不可以改变了
	printf("%d %c %f", tmp->a, tmp->b, tmp->d);
}
//int main() {
//	struct SS s;
//	s.a = 9; s.b = 'w'; s.d = 3.16;
//
//
//	struct SS s1 = { 0 };
//	Ini_struct_p(&s);//传地址，通过传地址，将函数外部的变量在函数内部改变，通过地址找到变量进行改变
//	//Ini_struct(s);//这里是传值，函数内是改变了，但是这个结构体对象本身还是没有变化；初始化不成功
//	//只要涉及到在被调函数内改变主调函数的变量，就需要传地址到被调函数中
//	//结构体太大之后，传值效率太低，一般结构体建议传递地址
//
//	print_struct(s);
//	print_struct_point(&s);
//
//
//}

union Un {
	int i;
	char c;

};
int main() {
	union Un u;
	printf("%p\n", &(u.i));
	printf("%p\n", &(u.c));

	u.i = 0x11223344;
	printf("%x\n", u.i);
	printf("%x\n", u.c);
	u.c = 0x55;
	printf("%x\n", u.i);
	printf("%x\n", u.c);
}