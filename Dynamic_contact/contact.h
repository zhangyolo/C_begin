#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdlib.h>//使用malloc
#include<stdio.h>
#include<string.h>
#include<errno.h>
#define MAX 100
#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TEL 12
#define MAX_ADDR 20
#define DEFULT 3
struct  PeoInfo {
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tel[MAX_TEL];
	char addr[MAX_ADDR];
};


struct  Contact {
	struct PeoInfo *data;
	int size;//当前已有的人数
	int capacity;//当前的最大容量
};

enum Option {
	EXIT,//0
	ADD,//1
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	SORT,
	SAVE
};

void InitContact(struct Contact* pa);
void AddContact(struct Contact* pa);
void ShowContact(const struct Contact* pa);
void DelContact(struct Contact* pa);
void SearchContact(const struct Contact* pa);
void ModifyContact(struct Contact* pa);
void SortContact(struct Contact* pa);
void DestoryContact(struct Contact* pa);
void SaveContact(struct Contact* pa);
void LoadContact(struct Contact* pa);