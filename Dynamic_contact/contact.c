#define  _CRT_SECURE_NO_WARNINGS 1

#include "contact.h"

void CheckCapacity(struct Contact* ps) {
	if (ps->size == ps->capacity) {
		struct PeoInfo* pp = (struct PeoInfo*)realloc(ps->data, (ps->capacity + 2) * sizeof(struct PeoInfo));
		if (pp != NULL) {
			ps->data = pp;
			ps->capacity += 2;
			printf("���ݳɹ�");
		}
		else {
			printf("no kuoda");
		}
		//�������ͷ�
	/*	free(pp);
		pp = NULL;*/
		//��������ͷ�
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
	printf("data is loading����\n");
}
//���ṹ���ʼ��
void InitContact(struct Contact* ps) {
	//memset(ps->data, 0, sizeof(ps->data));
	//ps->size = 0;


	//��̬��ʼ����������һ��С�ռ䣬���
	ps->data = (struct PeoInfo*)malloc(DEFULT * sizeof(struct PeoInfo));//�ʼ���Դ��3���˵���Ϣ
	if (ps->data == NULL) {
		return;
	}
	ps->size = 0;
	ps->capacity = DEFULT;
	//���ļ������е���Ϣ������س���
	//
	LoadContact(ps);
	
}


//��ͨѶ¼��¼����Ϣp
void AddContact(struct Contact* ps) {
	/*if (ps->size == MAX)printf("it is full");
	else {
		printf("�����������Ϣ��\n");
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

	//�ȼ��ռ䣬full�����Ӱ��ռ䣻δ������
	CheckCapacity(ps);
	//��������
	printf("�����������Ϣ��\n");
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


//��ӡȫ������Ϣ
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


//��ӡĳһλ����Ϣ
void print_i(const struct Contact* ps, int i) {
	printf("%-15s\t%-4s\t%-5s\t%-12s\t%-20s\n", "name", "age", "sex", "tel", "addr");

	printf("%-15s\t%-4d\t%-5s\t%-12s\t%-20s\n",
		ps->data[i].name,
		ps->data[i].age,
		ps->data[i].sex,
		ps->data[i].tel,
		ps->data[i].addr);

}

//չʾ������Ϣ
void ShowContact(const struct Contact* ps) {
	if (ps->size == 0)printf("contact is empty,please ADD��");
	else {
		print_all(ps);
	}
}

//static���ε�ȫ�ֱ���ֻ���ڱ��ļ���ʹ�ã�������纯����ͻ
//ͨ�����ֲ���
static int  FindByName(const struct Contact* ps, char name[MAX_NAME]) {
	int i = 0;
	for (i = 0; i < ps->size; i++) {
		if (strcmp(ps->data[i].name, name) == 0) {
			return i;
		}
	}
	return -1;
}

//ɾ��
void DelContact(struct Contact* ps) {//������������ˣ����ƺ�ֻ��ɾ����ǰ�����
	printf("����ɾ����һλ��>");

	char name[MAX_NAME];
	scanf("%s", name);
	//����
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

//����
void SearchContact(const struct Contact* ps) {
	printf("����������ҵ��˵�����:>");
	char name[MAX_NAME];
	scanf("%s", name);
	int i = FindByName(ps, name);
	if (i == -1)printf("no person");
	else {
		print_i(ps, i);
	}

}

//�޸�
void ModifyContact(struct Contact* ps) {
	printf("�����������޸ĵ�������>");
	char name[MAX_NAME];
	scanf("%s", name);
	int i = FindByName(ps, name);
	if (i == -1) {
		printf("no person");
	}
	else {
		printf("�����������Ϣ��\n");
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



//����ð�ݣ���
void SortContact(struct Contact* pa) {

}

void DestoryContact(struct Contact* ps) {
	//����̬���뵽�Ŀռ��ͷ�
	free(ps->data);
	ps->data = NULL;
}

void SaveContact(struct Contact* pa) {
	FILE* pfwrite = fopen("contact.txt", "wb");
	if(!pfwrite) {
		printf("%s\n", strerror(errno));
		return ;
	}
	//дͨѶ¼�е����ݵ��ļ�
	//
	int i = 0;
	for (int i = 0;i < pa->size; i++) {
		fwrite(&(pa->data[i]), sizeof(struct PeoInfo), 1, pfwrite);
	}

	fclose(pfwrite);
	pfwrite = NULL;
}