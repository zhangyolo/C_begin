#define  _CRT_SECURE_NO_WARNINGS 1
#define  _CRT_SECURE_NO_WARNINGS 1

#include "game.h"
void venu(){
	printf("\n");
	printf("_________________________\n");
	printf("___1.play_____0.exit_____\n");
	printf("_________________________\n");
}

void game() {
	char board[ROW][COL] = { 0 };//ȫ���ո�
	InitBoard(board);  //��ʼ������  ///ȫ���ո�
	DisplayBoard(board);
	int ret = 0;
	while (1) {
		//�����
		FlaayeMove(board);
		DisplayBoard(board);
		//�ж�����Ƿ��ʤ
		ret=IsWin(board);
		if (ret != 'C')break;
		//������
		ComputerMove(board);
		DisplayBoard(board);
		//�жϵ����Ƿ��ʤ
		ret = IsWin(board);
		if (ret != 'C')break;
		
	}

	if (ret != '*')printf("���Ӯ");

	if (ret != '#')printf("����Ӯ");

	if (ret != 'Q')printf("ƽ��");

}
void test() {
	srand((unsigned int)time(NULL));
	int in=0;//��������ʼ�������򱨴�ʹ��δ��ʼ���ľֲ�����
	do {
		venu();
		printf("��ѡ��>>");
		scanf("%d", &in);//���벻������&����ѽ
		switch (in) {
		case 1:
			//printf("������");
			game();
			break;
		case 0:
			printf("�˳���Ϸ");
			break;
		default:
			printf("������ѡ����");
			break;
		}
	

	} while (in);

}

int main() {
	
	test();
}