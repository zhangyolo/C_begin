#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

//��������Ϸ
void menu() {
	printf("________��������Ϸ_________\n");
	printf("____1.play______0.exit_____\n");
	printf("___________________________\n");
}
#define RAND_MAX 0x7fff
void game() {
	//����һ�������������rand
	//����ǰ��ȱ�ٷֺţ���Ҫ�ѱ���������ǰ
	int ret = 0;
	//srand(�仯ֵ);���仯ֵʹ��rand�������ɲ�ͨ�����ֵ
	//����ʱ����ĸ��ȥ�ٶ��˽�
	//��ǰ�������ʱ��-1970.1.1.0��0��0
	//time_t time(time_t *timer)
	//srand(time);//��Ϊ��ÿһ�ε��������һ��
	 ret = rand()%100+1;//����1~100����
	// printf("%d", ret);
	 int gs;
	 while (1) {
		 printf("���һ�����֣�> ");
	 scanf("%d", &gs);

		 if (gs == ret) {
			 printf("��н���¶���\n");
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
			printf("�˳���Ϸ");
			break;
		default:
			printf("���������룺");
			break;
		}
	} while (in);
	return 0;

}