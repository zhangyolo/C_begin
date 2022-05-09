#define  _CRT_SECURE_NO_WARNINGS 1

#include "contact.h"

void CheckCapacity(struct Contact* ps) {
	if (ps->size == ps->capacity) {
		struct PeoInfo* pp = (struct PeoInfo*)realloc(ps->data, (ps->capacity + 2) * sizeof(struct PeoInfo));
		if (pp != NULL) {
			ps->data = pp;
			ps->capacity += 2;
			printf("增容成功");
		}
		else {
			printf("no kuoda");
		}
		//好像不能释放
	/*	free(pp);
		pp = NULL;*/
		//在最后再释放
	}
}



void LoadContact(struct Contact* ps) {

	FILE* pread = fopen("Contact.txt", "rb");
	if (pread == NULL) {
		printf("%s\n", strerror(errno));
		return;
	}
	struct PeoInfo tmp = { 0 };
	while (fread(&tmp, sizeof(struct PeoInfo), 1, pread) ){
		CheckCapacity(ps);
		ps->data[ps->size] = tmp;
		ps->size++;
	
	}

	fclose(pread);
	pread = NULL;
	printf("data is loading……\n");
}
//将结构体初始化
void InitContact(struct Contact* ps) {
	//memset(ps->data, 0, sizeof(ps->data));
	//ps->size = 0;


	//动态初始化，先申请一个小空间，存放
	ps->data = (struct PeoInfo*)malloc(DEFULT * sizeof(struct PeoInfo));//最开始可以存放3个人的信息
	if (ps->data == NULL) {
		return;
	}
	ps->size = 0;
	ps->capacity = DEFULT;
	//把文件中已有的信息读入加载出来
	//
	LoadContact(ps);
	
}


//向通讯录中录入信息p
void AddContact(struct Contact* ps) {
	/*if (ps->size == MAX)printf("it is full");
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
	}*/

	//先检测空间，full就增加啊空间；未满不做
	CheckCapacity(ps);
	//增加数据
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
	//printf("%d", ps->size);
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
void print_i(const struct Contact* ps, int i) {
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
static int  FindByName(const struct Contact* ps, char name[MAX_NAME]) {
	int i = 0;
	for (i = 0; i < ps->size; i++) {
		if (strcmp(ps->data[i].name, name) == 0) {
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
	int i = FindByName(ps, name);
	if (ps->size == i)printf("no person");
	//del
	else {
		int j = 0;
		for (j = i; j < ps->size - 1; j++) {
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
		print_i(ps, i);
	}

}

//修改
void ModifyContact(struct Contact* ps) {
	printf("请输入你想修改的人名：>");
	char name[MAX_NAME];
	scanf("%s", name);
	int i = FindByName(ps, name);
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

void DestoryContact(struct Contact* ps) {
	//将动态申请到的空间释放
	free(ps->data);
	ps->data = NULL;
}

void SaveContact(struct Contact* pa) {
	FILE* pfwrite = fopen("contact.txt", "wb");
	if(!pfwrite) {
		printf("%s\n", strerror(errno));
		return ;
	}
	//写通讯录中的数据到文件
	//
	int i = 0;
	for (int i = 0;i < pa->size; i++) {
		fwrite(&(pa->data[i]), sizeof(struct PeoInfo), 1, pfwrite);
	}

	fclose(pfwrite);
	pfwrite = NULL;
}