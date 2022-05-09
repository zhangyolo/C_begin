#define  _CRT_SECURE_NO_WARNINGS 1

#include "contact.h"
void menu() {
	printf("------------------------------------\n");
	printf("-------1.add    2.del        -------\n");
	printf("-------3.search    4.modify  -------\n");
	printf("-------5.show	6.sort       -------\n");
	printf("-------7.save   0.exit		 -------\n");
	printf("------------------------------------\n");


}
int main() {
	int in = 0;
	int size = 0;
	//struct Contact* p = (struct Contact*)malloc(sizeof(struct Contact));
	struct Contact con[MAX];


	InitContact(&con);//��ʼ��ͨѶ¼
	do {
		menu();
		printf("��ѡ����:>");

		scanf("%d", &in);
		switch (in) {
		case ADD:  //����ö����ʵ��
			AddContact(&con);
			break;
		case DEL:
			DelContact(&con);
			break;
		case SEARCH:
			SearchContact(&con);
			break;
		case MODIFY:
			ModifyContact(&con);
			break;
		case SHOW:
			ShowContact(&con);
			break;
		case SORT:
			SortContact(&con);
			break;
		case EXIT:
			//����ͨѶ¼
			//�ͷŶ�̬�ڴ�
			SaveContact(&con);
			DestoryContact(&con);
			printf("ʹ����죬�ټ�");
			break;
		case SAVE:
			SaveContact(&con);
			break;
		default:
			printf("��ѡ�����й���");
			break;
		}
	} while (in);
}