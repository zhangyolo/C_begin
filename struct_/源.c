#define  _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
//struct stu {
//	int agel;
//	char name[9];
//
//}s1,s2;//����ȫ�ֱ�����������ͬʱ����һ������

struct nv {
	int age;
	char name[9];
	
};
typedef struct stu {
	int age;
	char name[9];
	struct nv z;//Ƕ�� ��һ���ṹ��

}Stu;		//struct stu�ı�����StuҲ��һ���ṹ������


void print(Stu s) {
	printf("%d\n",s.age);//.����������������Ǳ���ֵ
	printf("%s\n", s.name);//.����������������Ǳ���ֵ

}


void print1(Stu* ps) {
	printf("%d\n", ps->age);//.����������������Ǳ���ֵ
	printf("%s\n", ps->name);//.����������������Ǳ���ֵ

}
int main() {
	struct stu s;//�ֲ�����
	Stu s2;//��Ҳ���������ṹ�����

	struct nv zhang = { 22,"zhang" };//Ů����

	Stu chen = { 22,"feng",zhang };//��ʼ������ched�������Ϣ��Ů����

	print(chen);//��ӡchen
	struct nv* q = &zhang;
    print1(q);//��ӡzhang
	
	printf("%s��Ů�����ǣ�%s\n", chen.name, chen.z.name);//.����������������Ǳ���ֵ
	
	 Stu* p = &chen;
	 printf("%s��Ů�����ǣ�%s\n", p->name, p->z.name);//.����������������Ǳ���ֵ

}

