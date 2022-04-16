#define  _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
//struct stu {
//	int agel;
//	char name[9];
//
//}s1,s2;//两个全局变量。声明的同时创建一个变量

struct nv {
	int age;
	char name[9];
	
};
typedef struct stu {
	int age;
	char name[9];
	struct nv z;//嵌套 另一个结构体

}Stu;		//struct stu的别名，Stu也是一个结构体类型


void print(Stu s) {
	printf("%d\n",s.age);//.后面跟变量名，不是变量值
	printf("%s\n", s.name);//.后面跟变量名，不是变量值

}


void print1(Stu* ps) {
	printf("%d\n", ps->age);//.后面跟变量名，不是变量值
	printf("%s\n", ps->name);//.后面跟变量名，不是变量值

}
int main() {
	struct stu s;//局部变量
	Stu s2;//这也可以声明结构体变量

	struct nv zhang = { 22,"zhang" };//女朋友

	Stu chen = { 22,"feng",zhang };//初始化变量ched的相关信息和女朋友

	print(chen);//打印chen
	struct nv* q = &zhang;
    print1(q);//打印zhang
	
	printf("%s的女朋友是：%s\n", chen.name, chen.z.name);//.后面跟变量名，不是变量值
	
	 Stu* p = &chen;
	 printf("%s的女朋友是：%s\n", p->name, p->z.name);//.后面跟变量名，不是变量值

}

