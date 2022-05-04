#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#define MAX 100
#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TEL 12
#define MAX_ADDR 20

struct  PeoInfo {
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tel[MAX_TEL];
	char addr[MAX_ADDR];
};


struct  Contact {
	struct PeoInfo data[MAX];
	int size;//当前已有的人数
};

enum Option {
	EXIT ,//0
	ADD,//1
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	SORT
};

void InitContact( struct Contact* pa);
void AddContact ( struct Contact* pa);
void ShowContact(const struct Contact* pa);
void DelContact(struct Contact* pa);
void SearchContact (const struct Contact* pa);
void ModifyContact(struct Contact* pa);
void SortContact(struct Contact* pa);