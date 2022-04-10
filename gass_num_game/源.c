#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

//猜数字游戏
void menu() {
	printf("________猜数字游戏_________\n");
	printf("____1.play______0.exit_____\n");
	printf("___________________________\n");
}
#define RAND_MAX 0x7fff
void game() {
	//生成一个随机数。利用rand
	//类型前面缺少分号，就要把变量声明在前
	int ret = 0;
	//srand(变化值);，变化值使后rand（）生成不通的随机值
	//引入时间戳的概念，去百度了解
	//当前计算机的时间-1970.1.1.0：0：0
	//time_t time(time_t *timer)
	//srand(time);//是为了每一次的随机数不一样
	 ret = rand()%100+1;//生成1~100的数
	// printf("%d", ret);
	 int gs;
	 while (1) {
		 printf("请猜一个数字：> ");
	 scanf("%d", &gs);

		 if (gs == ret) {
			 printf("工薪，猜对了\n");
			 break;
		 }
		 else if (gs > ret) printf("dal\n");
		 else printf("xiao\n");

	 }

}
int main() {
	srand((unsigned int)time(NULL));

	int in = 0;
	do {
		menu();
		printf(":>");
		scanf("%d", &in);
		switch (in) {
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏");
			break;
		default:
			printf("请重新输入：");
			break;
		}
	} while (in);
	return 0;

}