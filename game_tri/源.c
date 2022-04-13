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
	char board[ROW][COL] = { 0 };//全部空格
	InitBoard(board);  //初始化棋盘  ///全部空格
	DisplayBoard(board);
	int ret = 0;
	while (1) {
		//玩家下
		FlaayeMove(board);
		DisplayBoard(board);
		//判断玩家是否获胜
		ret=IsWin(board);
		if (ret != 'C')break;
		//电脑下
		ComputerMove(board);
		DisplayBoard(board);
		//判断电脑是否获胜
		ret = IsWin(board);
		if (ret != 'C')break;
		
	}

	if (ret != '*')printf("玩家赢");

	if (ret != '#')printf("电脑赢");

	if (ret != 'Q')printf("平局");

}
void test() {
	srand((unsigned int)time(NULL));
	int in=0;//这里必须初始化，否则报错：使用未初始化的局部变量
	do {
		venu();
		printf("请选择：>>");
		scanf("%d", &in);//输入不能少了&符号呀
		switch (in) {
		case 1:
			//printf("三子棋");
			game();
			break;
		case 0:
			printf("退出游戏");
			break;
		default:
			printf("勤重新选择功能");
			break;
		}
	

	} while (in);

}

int main() {
	
	test();
}