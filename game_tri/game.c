

#include "game.h"

#include "game.h"

void InitBoard(char s[ROW][COL]) {
	for (int i = 0; i < ROW; i++) {
		for (int j = 0; j < COL; j++) {
			//printf("%d", board[i][j]);
			s[i][j] = ' ';
		}
	}
}

void DisplayBoard(char s[ROW][COL]) {
	for (int i = 0; i < ROW; i++) {
		for (int j = 0; j < COL; j++) {
			printf(" %c ", s[i][j]);
			if (j < COL-1)printf("|");
		}
		printf("\n");
		//printf("--------------");//yekyid 
		if (i < ROW - 1)
		{
			for (int j = 0; j < COL; j++) {
				printf("---");
				if (j < COL - 1)
					printf("|");
			}
			printf("\n");
		}
	}
}


void FlaayeMove(char s[ROW][COL]) {
	int r = 0;//��
	int l = 0;//��
	while (1) {
		printf("�����:>>");
		scanf("%d%d", &r, &l);//�������ﲻ��Ҫʲô��ʽ

		if (r <= ROW && r>=1 && l >=1 && l <= COL) {//���￼�����귶Χ��1��ʼ���ǿ����û�
			if (s[r - 1][l - 1] == ' ') {
				s[r - 1][l - 1] = '*';   //��ֵֻ��һ���Ⱥ�
				break;
			}
			else {
				printf("��������������\n");
			}
		}
		else {
			printf("�ѳ������̷�Χ���������£�\n");
		}
	}
}


void ComputerMove(char s[ROW][COL]) {
	printf("�����£�>>\n ");
	int r = 0;
	int l = 0;
	while (1) {
		r = rand() % ROW;
		l = rand() % COL;

		/*if (s[r][l] == ' ') {
			s[r][l] = '#';
			break;
		}*/
		if (r <= ROW && r >= 1 && l >= 1 && l <= COL) {//���￼�����귶Χ��1��ʼ���ǿ����û�
			if (s[r - 1][l - 1] == ' ') {
				s[r - 1][l - 1] = '#';   //��ֵֻ��һ���Ⱥ�
				break;
			}
			else {
				printf("��������������\n");
			}
		}
		else {
			printf("�ѳ������̷�Χ���������£�\n");
		}
	}
}


//�ж�˭Ӯ
//��� ��*
//���ԡ�#
//ƽ�� ��Q
//���� ��C
char IsWin(char s[ROW][COL]) {

	for (int i = 0; j < ROW; i++) {
		if (s[i][0] == s[i][1] && s[i][2] == s[i][1] && s[i][1] != ' ')
			return s[i][1];
	}
	for (int i = 0; i < COL; i++) {
		if (s[0][i] == s[1][i] && s[2][i] == s[1][i]  && s[1][i] != ' ')
			return s[1][i];
	}
	//�Խ���
	if (s[0][0] == s[1][1] && s[2][2] == s[1][1] && s[1][1] != ' ')
		return s[1][1];
	if (s[2][0] == s[1][1] && s[1][1] == s[2][2] && s[1][1] != ' ')
		return s[1][1];



}