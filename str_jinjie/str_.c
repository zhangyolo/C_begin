#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<assert.h>

//###########################################3

//strlen
//int my_strlen(const char* arr) {
//	assert(arr != NULL);
//	int cnt = 0;
//	while (*arr != '\0') {  //while(*arr){
//		cnt++;
//		arr++;  //指针后移
//	}
//	return cnt;
//}
//int main() {
//	int len = mystrlen("dsdfsf");
//	printf("%d", len);
//	
//	// typedef unsigned int     size_t;
//	/*
//	size_t strlen();   //size_t 就是unsigned int
//	int my_strlen();
//	两个size_t类型的数相减，是始终大于0的
//	计算机中将存储补码形式，如果是无符号整数读取，将直接将补码形式转化成10进制
//	*/
//	//
//	//if (strlen("sdf") - strlen("SDfsdfsdf") > 0)//在今后使用的时候要尤其注意，无符号数的范围及运算
//	if (my_strlen("sdf") - my_strlen("SDfsdfsdf") > 0)
//		printf("heh");
//	else printf("haha");
//
//}

//###########################################3

////strcpy()
//void my_strcpy(char* dest, const char* src) {
//	assert(dest != NULL);
//	assert(src != NULL);
//	/*while (*src) {
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	dest = *src; //  \0 必须要，否则就是将dest的前面部分换为src的内容*/
//	
//	//优化：
//	while (*dest++ = *src++) {}
//}
//
//char* my_strcpy_p(char* dest, const char* src) {
//	assert(dest != NULL);
//	assert(src != NULL);
//
//	//将src拷贝到dest中，包括\0
//	while (*dest++ = *src++) {}
//
//	return dest;
//}
//int main() {
//	char arr1[] = "sdfasf";
//	char arr2[] = "sdsu";
//	//strcpy(arr1, arr2);//同时也把\0拷贝 过去了
//	//my_strcpy(arr1, arr2);
//	my_strcpy_p(arr1, arr2);
//	printf("%s", arr1);
//}




//###########################################3
//strcat()

//void my_strcat1(char*dest,const char*src) {
//	assert(dest && src);
//	int len1 = strlen(dest);
//	int len2 = strlen(src);
//	for(int i=0;i<len2;i++){
//		dest[i + len1]=*src;
//		src++;
//	}
//	*(dest+len1+len2) = '\0';
//}
//
//char* my_strcat2(char* dest, const char* src) {
//	assert(dest && src);
//	//找到目的地的最后
//	while (*dest) {
//		dest++;
//	}
//	//追加
//	while (*dest++ = *src++) {}
//	return dest;
//}
//
//int main() {
//	
//	//char arr1[] = "hello";//默认arr1只有6个字节大小
//	//为了拷贝不溢出，声明的时候就让空间大一些
//	char arr1[30] = "hello\0dfadf";
//	char arr2[] = "zymcc";
//
//	//strcat(arr1, arr2);
//	//my_strcat1(arr1, arr2);
//	my_strcat2(arr1, arr2);
//	printf("%s", arr1);
//}


//#######################################33
//strcmp()

//int my_strcmp(const char* s1, const char* s2) {
//	assert(s1 && s2);
//	while (*s1 == *s2) {
//		if (*s1 == '\0') return 0;
//		s1++;
//		s2++;
//	}
//
//	//if (*s1 > *s2) return 1;
//	//else return -1;
//
//	return *s1 - *s2;  //通过差值直接比较哦
//}
//
//int main() {
//	char* p1 = "cc";  //字符常量  指针存放首字母的地址
//	char* p2 = "zym";
//	//比较的是ASCII码
//	// 	   /*vs
//	// 	   >1 ==0  <-1
//	// 	   */
//	// 	   /*linux gcc
//	// 	   >1 ==0  <  < 0
//	// 	   */
//	//*"adf"!="sdfs";  存放首元素的地址不一样
//
//	//int ret = strcmp(p1, p2);
//	int ret = my_strcmp(p1, p2);
//
//	if (ret > 0)printf("p1>p2\n");
//	else if (ret == 0)printf("p1==p2\n");
//	else printf("p1<p2\n");
//
//	printf("%d\n", ret);

//}



////strncpy()
////模拟实现：
//void strncpy();
//int main() {
//	char arr1[30] = "sdfasdf";
//	char arr2[] = "sdfaaaaaa";
//	strncpy(arr1, arr2, 6);  //若拷贝的字符个数擦好arr1的长度,则将后续的均置为\0
//	printf("%s", arr1);
//}




////strcat()
//int main() {
//	char arr1[30] = "sdfasdf";
//	char arr2[] = "sdfaaaaaa";
//	strncat(arr1, arr2, 6);  //若连接的字符个数擦好arr1的长度,则将后面一个的均置为\0
//	printf("%s", arr1);
//}



//int strncmp(const char*s1,const char *s2,size_t count
//int main() {
//	char* p1 = "sdfa";
//	char* p2 = "sdavfvvv";
//
//	//strcmp(p1, p2);
//
//	//strncmp();//可以比较字符串的第n个字符的大小
//	return 0;
//}


//strstr()
//注意kmp函数的优越性，查资料了解，算法设计学过
//#include<stdio.h>
//#include<string.h>
//char* my_strstr(const char* p1, const char* p2) {
//	assert(p1 && p2);
//	char* s1 = p1;
//	char* s2 = p2;
//	char* cur = p1;
//	if (*p2 == '\0') return (char*)p1;
//
//	while (*cur ) { 
//		s1 = cur;
//		s2 = p2;
//		while( (*s1!='\0')&& (*s2 != '\0') && (*s1== *p2)) {
//			//while(*s1&&*s2&&!(*s1-*s2)){
//			s1++;
//			s2++;
//		};
//	
//		if (*s2 == '\0') {//if(!*s2)
//			return (char*)cur;
//		}
//		cur++;
//	} 
//	return NULL;
//}
//
//int main() {
//	char* p1 = "zymLzcc";
//	char* p2 = "cc";
//
////	char*ret=strstr(p1, p2);
//	char* ret = my_strstr(p1, p2);
//	if (ret == NULL) {
//		printf("不存在");
//	}
//	else
//		printf("%s\n", ret);
//}
//




//int main() {
	//char arr[] = "sda@sdfa.sdfs" ;


//	char* p =".@";   ///切割符顺序无所谓
//	//只要超过2个以上的字符，就不能用单引号，
//	//只能用双引号，否则读取内存会出错
//
//	char buf[500] = { 0 };
//	strcpy(buf, arr);
//
//
//
//
//	char *ret = NULL;
//	for (ret = strtok(buf, p); ret != NULL;ret=strtok(NULL,p)) {
//		printf("%s\n", ret);
//	}
//
//	/*char* ret=strtok(buf, p);
//	printf("%s\n", ret);
//
//	 ret = strtok(NULL, p);
//	printf("%s\n", ret);
//
//	ret = strtok(NULL, p);
//	printf("%s\n", ret);*/
//
//}


//strerror
//#include<errno.h>//必须要的
//int main() {
//	/*
//	错误码  描述
//	0 No error
//	1：Operation not permitted
//	……
//	*/
//
//	char* str = strerror(0);///
//	printf("%s\n", str);  //返回错误码代表的信息  //
//
//	/*
//	errorf 是一个全局的错误码的变量
//	当C语言的库函数在执行中，发生了错误，就会把对应的错误码，赋值的到errno中
//	*/
//	FILE* pf = fopen("test.txt", "r");
//	if (!pf) {
//		printf("打开失败,原因是:");
//		printf("%s\n", strerror(errno));
//	}
//	else printf("succeed");
//	//需要在该目录下或指定目录下创建相应的文本，才可以打开
//
//	return 0;
//}


//int main() {
//	char ch = 'W';
//	printf("%d\n", islower(ch));//0  //不是小写字母，返回0
//
//	//isdigit(） 判断是不是0~9的十进制数，是返回非零数字，否返回0  //单引号必须加，
//	printf("%d\n", isdigit('s'));
//	printf("%d\n", isdigit('9')); // 非零 //单引号必须加，
//	printf("%d\n", isdigit(5)); //0
//
//}

//#include<ctype.h>
//int main() {
//	char ch =tolower('q');
//	putchar(ch);
//
//	ch = tolower('Q');
//	putchar(ch);
//
//	char arr[] = "I AM A stuDent!";
//	int i = 0;
//	while (arr[i]) {
//		if ((isupper(arr[i])))  //找出大写字母
//			arr[i] = tolower(arr[i]);  //转换为小写字母
//		i++;
//	}
//
//	printf("%s\n", arr);
//}




//内存拷贝的情况.此自定义i的函数，只限于内存不重叠的内存拷贝
void* my_memcpy(void* p1, const void* p2, size_t se) {
	//se是字节 单位
	//所以强制转换为char*之后，通过字节依次拷贝
	assert(p1 && p2);
	void* ret = p1;
	while (se--) {
		*(char*)p1 = *(char*)p2;

		((char*)p1)++;//强制类型的优先级更低，所以需要加上括号，也可以改为前置加加
		((char*)p2)++;

	}
	return ret;
}


//自定义一个函数，满足内存重叠的内存拷贝
//对于不想使它改变的变量，可以把它设置为常变量
void* my_memcpy_move(void* dest, const void* src, size_t se) {
	//se是字节 单位
	//所以强制转换为char*之后，通过字节依次拷贝
	assert(dest && src);
	void* ret = dest; //防止dest的变化，先存储到一个变量中

	if (dest < src) {
		//前->后
		while (se--) {
			*(char*)dest = *(char*)src;
			((char*)dest)++;
			((char*)src)++;
		}
	}
	else {
		//后->前
		while (se--) {
			*((char*)dest + se ) =*( (char*)src + se );
		}
	}
	return ret;
}

void* my_memcpy_move2(void* dest, const void* src, size_t se) {
	//se是字节 单位
	//所以强制转换为char*之后，通过字节依次拷贝
	assert(dest && src);
	void* ret = dest; //防止dest的变化，先存储到一个变量中

	if (dest < src||dest>(char*)src+se) {
		//前->后
		while (se--) {
			*(char*)dest = *(char*)src;
			((char*)dest)++;
			((char*)src)++;
		}
	}
	else {
		//后->前
		while (se--) {
			*((char*)dest + se) = *((char*)src + se);
		}
	}
	return ret;
}

struct stu {
	char name[20];
	int age;
};
//int main() {
//	int arr1[] = { 1,2,3,4,5,6 };
//	int arr2[5] = { 0 };
//
//	//strcpy(const char*p,const char*q) //参数是char类型，
//	//strcpy(arr2, arr1);  //此处参数是int类型，不兼容，会警告报错
//
//	//memcpy(arr2, arr1, sizeof(arr1));//调试查看变化
//
//	struct stu ss[] = { { "cc",20 }, { "zz",23 } };
//	struct stu s[5] = { 0 }; 
//	//memcpy(s, ss,sizeof(ss));
//	my_memcpy(s, ss, sizeof(ss));
//}



//int main() {
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	//my_memcpy(arr+2,arr,5*sizeof(arr[0]));//我们自定义的memcpy的功能，只限于完成不重叠内存的拷贝功能
//	//for (int i = 0; i < 10; i++) {
//	//	printf("%d ", arr[i]);   //1 2 1 2 1 2 1 8 9 10  //出错了。之前3，4位置上的数被覆盖了
//	//}
//	
//	//内存重叠。利用第三方来转接
//	//int tarr[30] = { 0 };
//	//my_memcpy(tarr, arr, 5 * sizeof(arr[0]));
//	//my_memcpy(arr + 2, tarr, 5 * sizeof(arr[0]));
//	//for (int i = 0; i < 10; i++) {
//	//	printf("%d ", arr[i]);   //1 2 1 2 1 2 1 8 9 10  //出错了。之前3，4位置上的数被覆盖了
//	//}
//
//
//	//内存重叠
//	//利用库函数memmove解决
//	//memmove(arr + 2, arr, 5 * sizeof(arr[0]));
//	////memcpy(arr + 2, arr, 20);//库函数中的memcpy其实也可以解决内存重叠的拷贝
//	////C语言中，memcpy只需要处理的不重叠的内存拷贝就可以了
//	////memmove 处理内存重叠的内存拷贝
//	//for (int i = 0; i < 10; i++) {
//	//	printf("%d ", arr[i]);//1 2 1 2 3 4 5 8 9 10
//	//}
//
//
//	my_memcpy_move2(arr+2 , arr, 5 * sizeof(arr[0]));
//	for (int i = 0; i < 10; i++) {
//		printf("%d ", arr[i]);//1 2 1 2 3 4 5 8 9 10
//	}
//
//	//char str[] = "sdfacc";
//	//puts(str);  //可以打印字符串常量
//	//puts(arr);   //不可以打印int arr[] = { 1,2,3,4,5,6,7,8,9,10 };分散的
//}



//memcmp内存比较
//int main() {
//	//内存中的存储是小端存储
//	//01 00 00 00 06 00 00 00 03 00 00 00 ……
//	//01 00 00 00 04 00 00 00 05 00 00 00 ……
//	int arr1[] = { 1,6,3,4,5 };
//	int arr2[] = { 1,4,5,6,7, };
//	int ret = memcmp(arr1, arr2, 9);  //9个字节，比较单位是字节
//	printf("%d ", ret);
//}

//memset内存设置
int main() {
	char arr[10] = ""; //未初始化，都是\0
	memset(arr, '#', 10);//将内存的10个字节设置为#


	int ar[10] = { 0 }; //int  40个字节
	memset(ar, 1, 10); //只取10个字节改变，置为1
	//01 01 01 01 01 01 01 01 01 01 00 000 00……
}
