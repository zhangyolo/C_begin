

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
	int r = 0;//行
	int l = 0;//列
	while (1) {
		printf("玩家走:>>");
		scanf("%d%d", &r, &l);//输入这里不需要什么格式

		if (r <= ROW && r>=1 && l >=1 && l <= COL) {//这里考虑坐标范围从1开始，是考虑用户
			if (s[r - 1][l - 1] == ' ') {
				s[r - 1][l - 1] = '*';   //赋值只有一个等号
				break;
			}
			else {
				printf("该坐标已有棋子\n");
			}
		}
		else {
			printf("已超出棋盘范围，亲重新下：\n");
		}
	}
}


void ComputerMove(char s[ROW][COL]) {
	printf("电脑下：>>\n ");
	int r = 0;
	int l = 0;
	while (1) {
		r = rand() % ROW;
		l = rand() % COL;

		/*if (s[r][l] == ' ') {
			s[r][l] = '#';
			break;
		}*/
		if (r <= ROW && r >= 1 && l >= 1 && l <= COL) {//这里考虑坐标范围从1开始，是考虑用户
			if (s[r - 1][l - 1] == ' ') {
				s[r - 1][l - 1] = '#';   //赋值只有一个等号
				break;
			}
			else {
				printf("该坐标已有棋子\n");
			}
		}
		else {
			printf("已超出棋盘范围，亲重新下：\n");
		}
	}
}


//判断谁赢
//玩家 ‘*
//电脑’#
//平局 ‘Q
//继续 ’C
char IsWin(char s[ROW][COL]) {

	for (int i = 0; j < ROW; i++) {
		if (s[i][0] == s[i][1] && s[i][2] == s[i][1] && s[i][1] != ' ')
			return s[i][1];
	}
	for (int i = 0; i < COL; i++) {
		if (s[0][i] == s[1][i] && s[2][i] == s[1][i]  && s[1][i] != ' ')
			return s[1][i];
	}
	//对角线
	if (s[0][0] == s[1][1] && s[2][2] == s[1][1] && s[1][1] != ' ')
		return s[1][1];
	if (s[2][0] == s[1][1] && s[1][1] == s[2][2] && s[1][1] != ' ')
		return s[1][1];



}