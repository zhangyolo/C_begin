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


	InitContact(&con);//初始化通讯录
	do {
		menu();
		printf("请选择功能:>");

		scanf("%d", &in);
		switch (in) {
		case ADD:  //利用枚举来实现
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
			//销毁通讯录
			//释放动态内存
			SaveContact(&con);
			DestoryContact(&con);
			printf("使用愉快，再见");
			break;
		case SAVE:
			SaveContact(&con);
			break;
		default:
			printf("请选择已有功能");
			break;
		}
	} while (in);
}