#define  _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>


//***********************8
//struct stu {
//	int agel;
//	char name[9];
//
//}s1,s2;//����ȫ�ֱ�����������ͬʱ����һ������

//struct nv {
//	int age;
//	char name[9];
//	
//};
//typedef struct stu {
//	int age;
//	char name[9];
//	struct nv z;//Ƕ�� ��һ���ṹ��
//
//}Stu;		//struct stu�ı�����StuҲ��һ���ṹ������
//
//
//void print(Stu s) {
//	printf("%d\n",s.age);//.����������������Ǳ���ֵ
//	printf("%s\n", s.name);//.����������������Ǳ���ֵ
//
//}
//
//
//void print1(Stu* ps) {
//	printf("%d\n", ps->age);//.����������������Ǳ���ֵ
//	printf("%s\n", ps->name);//.����������������Ǳ���ֵ
//
//}
//int main() {
//	struct stu s;//�ֲ�����
//	Stu s2;//��Ҳ���������ṹ�����
//
//	struct nv zhang = { 22,"zhang" };//Ů����
//
//	Stu chen = { 22,"feng",zhang };//��ʼ������ched�������Ϣ��Ů����
//
//	print(chen);//��ӡchen
//	struct nv* q = &zhang;
//    print1(q);//��ӡzhang
//	
//	printf("%s��Ů�����ǣ�%s\n", chen.name, chen.z.name);//.����������������Ǳ���ֵ
//	
//	 Stu* p = &chen;
//	 printf("%s��Ů�����ǣ�%s\n", p->name, p->z.name);//.����������������Ǳ���ֵ
//
//}



//��������������������������������������������������������������������
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




//�ṹ���������
//������ı�ʾ
//struct node {
//	int data;
//	//struct node n;//����д���Ǵ����
//	struct node* next;//�����һ�����ĵ�ַ
//};


//�ṹ����ض�������
//typedef struct node {  //�ṹ�����͵��ض���
//	int data;
//	struct node* next;
//}node_t;
//
////typedef struct {  //�����ṹ�壬������Ҫʹ�����͵ı�������������������
////	int data;
////	node_tn* next;
////}node_tn;
//
//
//int main() {
//	node_t n;  //�����ض����
//	struct node n1;
//
//}


//�ṹ��Ĵ�С���ڴ����
//struct s {
//	int a;
//	double b;
//};
//
//int main() {
//	struct s se = { "3,3.4" };
//	printf("%d", sizeof(se));//16
//}




//#pragma pack(4) //����Ĭ�ϵĶ�����Ϊ4
//struct S {
//	char c1;
//	double d;
//};
//#pragma pack()  //�ָ�Ĭ�ϵĶ�����
//
//#pragma pack(1) //����Ĭ�ϵĶ�����Ϊ1
//struct SS{
//	char c1;
//	double d;
//};
//#pragma pack()  //�ָ�Ĭ�ϵĶ�����
//
//int main() {
//	struct S s1;
//	printf("%d\n", sizeof(s1));
//
//	struct SS s2;
//	printf("%d\n", sizeof(struct SS));
//}




//�ٶ�������  offsetof���������
//#include<stddef.h>  //��������
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




//���εĽṹ��
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

void print_struct_point(const struct SS* tmp) {//��Ϊ����ָ��tmp�ı�������������Ͳ����Ըı���
	printf("%d %c %f", tmp->a, tmp->b, tmp->d);
}
//int main() {
//	struct SS s;
//	s.a = 9; s.b = 'w'; s.d = 3.16;
//
//
//	struct SS s1 = { 0 };
//	Ini_struct_p(&s);//����ַ��ͨ������ַ���������ⲿ�ı����ں����ڲ��ı䣬ͨ����ַ�ҵ��������иı�
//	//Ini_struct(s);//�����Ǵ�ֵ���������Ǹı��ˣ���������ṹ���������û�б仯����ʼ�����ɹ�
//	//ֻҪ�漰���ڱ��������ڸı����������ı���������Ҫ����ַ������������
//	//�ṹ��̫��֮�󣬴�ֵЧ��̫�ͣ�һ��ṹ�彨�鴫�ݵ�ַ
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