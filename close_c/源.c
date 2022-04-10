#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>//system
#include<limits.h>
#include<string.h>//strcmp
//int main() {
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//	again:
//	printf("您的电脑即将关机");
//	scanf("%s", &input);
//	if (!strcmp(input, "我是猪"))  //两个字符串相等为0
//		system("shutdown -a");
//	else {
//		goto again;
//	}
//	return 0;
//}

int main() {
	printf("请您输入密码");
	int n = 0;
	char pass[23] = { 123456 }  ;
	char pwd[23] = { 0 };
	
	while (n < 3) {
		scanf("%s", &pwd);
		if ((strcmp(pass, pwd)))
		{
			printf("登录成功");
			break;
		}
		else
			printf("密码错误，亲重新输入密码");
		n++;
	}
	if (n == 3)printf("三次密码均错误，退出程序"); 
}