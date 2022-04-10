#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//int main() {
//	printf("nisd");
//	char c = "ch";
//	printf("%c\n",c);//%c字符格式%d整数%f小数浮点数%f地址%x十六进制
//	float s = 8.0;
//	printf("%f\n", s);
//	double s1 = 9.3;
//	printf("%lf\n", s1);//双精度
//	printf("%d\n", sizeof(long));//8/4
//	printf("%d\n", sizeof(double));//8
//	printf("%d\n", sizeof(char));  //1字节
//	printf("%d\n", sizeof(int));//4
//	printf("%d\n", sizeof(float));//4
//	printf("%d\n", sizeof(short));//2
//	return 0;
//
//}

//int main() {
//	{int a = 90; }
//	pritnf("%d", a);  //报错，未定义标识符，因为a是局部变量，只能在其括号范围内使用
//	//但是如果a为全局变量则是正确的
//	return 0;
//}

/*
int main() {
	extern int num;//相当于声明一个全局变量
	int num1, num2;
	scanf("%d%d", &num1, &num2);  //scanf_s可以使用，但是不利于跨平台使用，去掉警告
	//"%d%d"  中间不能加其他符号
	
	printf("%d", num1+num2);
	return 0;
}*/


//int main() {
//	char arr[6] = { 0 };
//	scanf("%s", arr);//如果注入一个没有空格的连续超过6个的字符2131231，虽输出213231，但会报错的，溢出了。；如果连续输入1 2 1 22 22 22 ，输出只输出第一个元素
//	printf("%s", arr);
//	return 0;
//}
/*
#define MAX 8
int main() {
	int arr[3] = { 0 };
	arr[2] = 123121;
	21321;//没有报错，这是字面常量

	const int n = 9;
	//int arr[n];//报错。n必须为常量表达式

	int sds[MAX];//这里没有报错欸

	const int g = 90;
	//g = 800;  ///报错了，因为g为常变量，不可以修改
	
	enum sex {
		female,
	    male,
		Serect
	};

	enum sex xiao = female;//声明xiao是女性femali
	//female = 89;//报错，不可以修改枚举常量
	// 
	//在枚举中的位置；
	printf("%d\n", female);//0
	printf("%d\n", male);//1
	printf("%d\n", Serect);//2
}*/


//当计算指针的大小时，取决于平台的位数，有8/4
//int main() {
//	int a = 0;
//	int* p = &a;
////	printf("%p\n", p);//00F5F860
////	printf("%d\n", *p);//0
//	printf("%d\n", sizeof(int*));
////	printf("%d", sizeof(char*));
////	printf("%d", sizeof(double*));//4说明在32位平台
//	printf("%d", sizeof(p));
//}




//结构体
//.用于结构体变量，成员
//->用于结构体的 的指向成员
//struct Book {
//	char name[46];
//	short price;
//};
//int main() {
//	struct Book l = { "dd",34 };//创建一个结构体变量l。结构体的初始化
//	printf("%s %d\n", l.name, l.price);
//	//l.name = "dfs'"; //类型不一致。一个时数组，一个是字符串
//	strcpy(l.name, "sdfs");
//	struct Book* pb = &l;
//	printf("%s %d\n", pb->name, pb->price);
//	printf("%s %d\n", (*pb).name, (*pb).price);//*pb=l;
//	return 0;
//}


//int main() {
//	int ch = 0;
//	//ctrl+z退出
//	while ((ch = getchar()) != EOF) {
//		putchar(ch);//打印字符 
//	}
//}

//int main() {
//	int ret = 0;
//	int ch = 0;
//	char password[20] = { 0 };
//	printf("mina:>");
//	scanf("%s", password);
//	//getchar();//读取掉缓冲区多余的\n
//	while ((ch = getchar()) != '\n') {
//		;
//	}//跳过空格的i情况，将空格作为密码的一部分
//	printf("Y/N\n");
//	ret = getchar();
//	printf("%d\n",ret);
//	if (ret =='Y')
//		printf("1");
//	else
//		printf("2");
//
//}



//int main() {
//	int ch;
//	while ((ch=getchar()) != EOF) {//只有输入ctrl+z才会退出
//		//此题中还是会读取\n，但是由于其ASCiI小于0的ASCII，所以不打印，直接读取下一个字符，进行判断
//		 //这里的0和9是字符，不是数字。所以当ASCii值大于9或小于0的ASCii是，就不打印出来，反之则打印
//		if (ch < '0' || ch>'9') {
//			//printf("%d-\n", ch);
//			continue;
//		}
//		putchar(ch);
//	}
//}

int main() {
	int i = 0;
	/*for (int i = 0; i <= 10; i++) {
		if (i == 5) {
			continue;
		}
		printf("%d", i);
	}*/

	/*printf("\n");while (i <= 10) {
		if (i == 5) {
			continue;
		}
		printf("%d", i);
	}*///这里注意continue的用法，while会形成死结
	
	//for (int x = 0, y = 0, z = 0; x = 0; i++) {//条件为假，不进循环
	//	printf("sdfs");
	//}

}