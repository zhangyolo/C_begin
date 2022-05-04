#define  _CRT_SECURE_NO_WARNINGS 1

#include "contact.h"

//将结构体初始化
void InitContact( struct Contact* ps) {
	memset(ps->data, 0, sizeof(ps->data));
	ps->size = 0;
}

//向通讯录中录入信息
void AddContact( struct Contact* ps) {
	if (ps -> size == MAX)printf("it is full");
	else {
		printf("请输入相关信息：\n");
		printf("name:>\t");
		scanf("%s", ps->data[ps->size].name);
		printf("age:>\t");
		scanf("%d", &(ps->data[ps->size].age));

		printf("sex:>\t");
		scanf("%s", ps->data[ps->size].sex);

		printf("tel:>\t");
		scanf("%s", ps->data[ps->size].tel);

		printf("addr:>\t");
		scanf("%s", ps->data[ps->size].addr);

		(ps->size)++;
		printf("Add successfully\n\n");
		printf("%d", ps->size);
	}
}


//打印全部的信息
void print_all(const struct Contact* ps) {
	printf("%-15s\t%-4s\t%-5s\t%-12s\t%-20s\n", "name", "age", "sex", "tel", "addr");
	for (int i = 0; i < ps->size; i++) {
		printf("%-15s\t%-4d\t%-5s\t%-12s\t%-20s\n",
			ps->data[i].name,
			ps->data[i].age,
			ps->data[i].sex,
			ps->data[i].tel,
			ps->data[i].addr);
	}
}


//打印某一位的信息
void print_i(const struct Contact* ps,int i) {
	printf("%-15s\t%-4s\t%-5s\t%-12s\t%-20s\n", "name", "age", "sex", "tel", "addr");
	
		printf("%-15s\t%-4d\t%-5s\t%-12s\t%-20s\n",
			ps->data[i].name,
			ps->data[i].age,
			ps->data[i].sex,
			ps->data[i].tel,
			ps->data[i].addr);
	
}

//展示所有信息
void ShowContact(const struct Contact* ps) {
	if (ps->size == 0)printf("contact is empty,please ADD！");
	else {
		print_all(ps);
	}
}

//static修饰的全局变量只能在本文件中使用，不与外界函数冲突
//通过名字查找
static int  FindByName(const struct Contact* ps,char name[MAX_NAME]) {
	int i = 0;
	for (i = 0; i < ps->size; i++) {
		if (strcmp(ps->data[i].name, name )== 0) {
			return i;
		}
	}
	return -1;
}

//删除
void DelContact(struct Contact* ps) {//如果有重名的人，则似乎只能删除在前面的人
	printf("你想删除哪一位？>"); 
	
	char name[MAX_NAME];
	scanf("%s", name);
	//查找
	int i=FindByName(ps, name);
	if (ps->size == i)printf("no person");
	//del
	else {
		int j = 0; 
		for (j = i; j < ps->size-1; j++) {
			ps->data[j] = ps->data[j + 1];
		}
		ps->size--;
		printf("delete successfully");
	}
	
}

//查找
void SearchContact(const struct Contact* ps) {
	printf("请输入想查找的人的名字:>");
	char name[MAX_NAME];
	scanf("%s", name);
	int i = FindByName(ps, name);
	if (i == -1)printf("no person");
	else {
		print_i(ps,i);
	}

}

//修改
void ModifyContact(struct Contact* ps) {
	printf("请输入你想修改的人名：>");
	char name[MAX_NAME];
	scanf("%s", name);
	int i=FindByName(ps,name);
	if (i == -1) {
		printf("no person");
	}
	else {
		printf("请输入相关信息：\n");
		printf("name:>\t");
		scanf("%s", ps->data[i].name);
		printf("age:>\t");
		scanf("%d", &(ps->data[i].age));

		printf("sex:>\t");
		scanf("%s", ps->data[i].sex);

		printf("tel:>\t");
		scanf("%s", ps->data[i].tel);
							 
		printf("addr:>\t");	 
		scanf("%s", ps->data[i].addr);
		
		printf("update successfully");
	}
}



//排序，冒泡？？
void SortContact(struct Contact* pa) {

}