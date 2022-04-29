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



//strncpy()
//模拟实现：
void strncpy();
int main() {
	char arr1[30] = "sdfasdf";
	char arr2[] = "sdfaaaaaa";
	strncpy(arr1, arr2, 6);  //若拷贝的字符个数擦好arr1的长度,则将后续的均置为\0
	printf("%s", arr1);
}