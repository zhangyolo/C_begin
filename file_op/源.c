#define  _CRT_SECURE_NO_WARNINGS 1



// .表示当前路径
//..表示上一目录
#include<stdio.h>  //不可以少
#include <errno.h>
//int main() {
//	int a = 10000;
//
//	//二进制的形式写到文件
//	//FILE* pf = fopen("ww.txt", "wb"); //必须包含头文件 stdio.h  //当前目录下  相对目录
//	//FILE* pf = fopen("C:\\test\\ww.txt", "wb"); //目录C:\test\ww.txt 下，双斜杠是为了防止转义
//	//if (pf == NULL) {
//	//	printf("%s", strerror(errno));
//	//	return 0;//如果打开文件失败，直接结束程序
//	//}
//
//
//	//写一个4字节的内容a到pf指向的文件中
//	//fwrite(&a, 4, 1, pf);
//	
//
//	//书写文件
//	FILE* pfc = fopen("ww.txt", "w"); 
//	//必须包含头文件 stdio.h  //当前目录下  相对目录
//	//这里是直接写w,不是以二进制书写wb,这样在本地查看的时候，就可以直接以ASIIC读取
//	//wb的书写之后，需要到vs中以二进制编译器查看
//	if (pfc==NULL) {
//		printf("%s", strerror(errno));
//		return;
//	}
// 
// 把c写到pfc指针指向的文件中
//	fputc('z', pfc);
//	fputc('z', pfc);
//	fputc('t', pfc);
//	//关闭文件
//	fclose(pfc);
//	pfc = NULL;
//
//
//
//	//读取文件内容
//	FILE* pRead = fopen("ww.txt", "r");//一定注意这里是双引号，注意格式，否则一致报错，越界访问
//	if(pRead==NULL) {
//		printf("%s", strerror(errno));
//		return;
//	}
//	printf("%c", fgetc(pRead));
//	printf("%c", fgetc(pRead));
//	printf("%c", fgetc(pRead));
//
//	fclose(pRead);
//	pRead = NULL;
//	return 0;
//}

//int main() {
//	int ch = fgetc(stdin);  //从输入流中读
//	fputc(ch, stdout);  //输出到屏幕上
//}


//读取文件fgets()
//int main() {
//	char buf[1024] = { 0 };
//	FILE* pf = fopen("test.txt", "r");
//	if(pf == NULL){
//		return;
//	}
//
//	fgets(buf, 1024, pf);
//	//从pf指向的文件中读取1024个空间的内容，存储到buf中   \n也会读取
//	printf("%s\n", buf); 
//	//%s从地址开始读取直到遇到\0
//
//
//	puts(buf);//打印完之后会自动换行
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}




//int main() {
//	char buf[1024] = { 0 };
//	FILE* pf = fopen("test.txt", "w");//注意这里的读写权限，将会导致下面的读取是否成功
//	if(pf == NULL){
//		return;
//	}
//
//
//	
//	fputs("cclove", pf);
//	//向pf指向的文件书写内容
//	//它不会自动换行，如果需要，子集添加
//	//	fputs("cclove\n", pf);
//
//
//
//	fputs("zz", pf);
//
//	//fgets(buf, 1024, pf);
//	//puts(buf);//打印完之后会自动换行
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}



////从标准输入流中读取并输出到输出流之中
//int main() {
//	char buf[1024] = { 0 };
//
//	//fgets(buf, 1024, stdin);//输入到输入流中
//	//fputs(buf, stdout);//输出到标准输出
//	
//	//可以识别空格，并输出
//	gets(buf);
//	puts(buf);
//}



//以特定格式写文件

//struct S {
//	int age;
//	char arr[10];
//	float f;
//};
//int main() {
//	//struct S s = { 20,"zhaninmi",3.45 };
//	//FILE* p = fopen("test.txt", "w");
//	//if (!p) { return; }
//	//
//	////以特定的格式将内容写入p指向的文件中
//	//fprintf(p, "%d %s %f",s.age,s.arr,s.f);
//
//
//	//	
//	struct S s = { 0 };
//	FILE* p = fopen("test.txt", "r");
//	if (NULL==p) { return; }
//
//	s.age = 10;
//	s.f = 9.9;
//	strcpy(s.arr, "chenwang"); 
//	//***************************8
//	//注意这里对结构体中的数组赋值，可以使用，strcpy或者for循环赋值
//	// 	   但是不可以使用s.arr = "sdfs";这样去赋值，会报出错误“表达式的左值应为可修改的左值”
//	
//	//以特定的格式将内容写入p指向的文件
//	fscanf(p, "%d %s %f", &(s.age), &(s.arr), &(s.f));
//	//以特定的格式将p指向的内容打印出来
//	printf("%d %s %f", s.age, s.arr, s.f);
//
//
//
//	//从标准输入中输入信息，并从标准输出打印
//	fscanf(stdin, "%d %s %f", &(s.age), &(s.arr), &(s.f));
//	fprintf(stdout,"%d %s %f", s.age, s.arr, s.f);
//
//	fclose(p);
//	p = NULL;
//}
//


//struct S {
//	int age;
//	float score;
//	char arr[10];
//};
//int main() {
//	struct S s = { 100,3.4,"zz" };
//	char buf[1024];
//	struct S tmp = { 0 };
//	//将内容按格式写到buf中
//	sprintf(buf, "%d %f %s", s.age, s.score, s.arr);
//	//打印buf中的内容以字符串的形式打印出来
//	printf("%s\n", buf);
//
//	//将buf中的内容以格式化，存到tmp中
//	sscanf(buf, "%d %f %s", &(tmp.age), &(tmp.score), &(tmp.arr));
//	//并按格式打印出tmp中的内容
//	printf("%d %f %s", tmp.age, tmp.score, tmp.arr);
//}



//struct S {
//	char arr[10];
//	int age;
//	float score;
//};
////以二进制写文件
//int main() {
//	/*FILE* pf = fopen("test.txt", "wb");
//	if (!pf) { return; }
//	struct S s = { "sds",20,23.9 };
//	//二进制写文件
//	//向pf指向的文件中写入结构体s的内容
//	fwrite(&s, sizeof(struct S), 1, pf);
//	fclose(pf);
//*/
//
//
//
//	
//	FILE* pf = fopen("test.txt", "rb");
//	if (!pf) { return; }
//	struct S tmp = { 0 };
//	//二进制读文件
//	//将pf指向的文件读取1个内容，存储到tmp中
//	fread(&tmp, sizeof(struct S), 1, pf);
//
//	printf("%s %d %f", tmp.arr, tmp.age, tmp.score);//sds 20 23.900000
//
//	fclose(pf);
//	pf = NULL;
//}



//定位指针
int main() {
	FILE* pf = fopen("ww.txt", "r");
	if (!pf) { return; }
	fseek(pf, -2, SEEK_END);
	int ch = fgetc(pf);
	printf("%c\n", ch);
	fclose(pf);
	pf = NULL;

}