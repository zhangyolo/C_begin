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
//		arr++;  //ָ�����
//	}
//	return cnt;
//}
//int main() {
//	int len = mystrlen("dsdfsf");
//	printf("%d", len);
//	
//	// typedef unsigned int     size_t;
//	/*
//	size_t strlen();   //size_t ����unsigned int
//	int my_strlen();
//	����size_t���͵����������ʼ�մ���0��
//	������н��洢������ʽ��������޷���������ȡ����ֱ�ӽ�������ʽת����10����
//	*/
//	//
//	//if (strlen("sdf") - strlen("SDfsdfsdf") > 0)//�ڽ��ʹ�õ�ʱ��Ҫ����ע�⣬�޷������ķ�Χ������
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
//	dest = *src; //  \0 ����Ҫ��������ǽ�dest��ǰ�沿�ֻ�Ϊsrc������*/
//	
//	//�Ż���
//	while (*dest++ = *src++) {}
//}
//
//char* my_strcpy_p(char* dest, const char* src) {
//	assert(dest != NULL);
//	assert(src != NULL);
//
//	//��src������dest�У�����\0
//	while (*dest++ = *src++) {}
//
//	return dest;
//}
//int main() {
//	char arr1[] = "sdfasf";
//	char arr2[] = "sdsu";
//	//strcpy(arr1, arr2);//ͬʱҲ��\0���� ��ȥ��
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
//	//�ҵ�Ŀ�ĵص����
//	while (*dest) {
//		dest++;
//	}
//	//׷��
//	while (*dest++ = *src++) {}
//	return dest;
//}
//
//int main() {
//	
//	//char arr1[] = "hello";//Ĭ��arr1ֻ��6���ֽڴ�С
//	//Ϊ�˿����������������ʱ����ÿռ��һЩ
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
//	return *s1 - *s2;  //ͨ����ֱֵ�ӱȽ�Ŷ
//}
//
//int main() {
//	char* p1 = "cc";  //�ַ�����  ָ��������ĸ�ĵ�ַ
//	char* p2 = "zym";
//	//�Ƚϵ���ASCII��
//	// 	   /*vs
//	// 	   >1 ==0  <-1
//	// 	   */
//	// 	   /*linux gcc
//	// 	   >1 ==0  <  < 0
//	// 	   */
//	//*"adf"!="sdfs";  �����Ԫ�صĵ�ַ��һ��
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
//ģ��ʵ�֣�
void strncpy();
int main() {
	char arr1[30] = "sdfasdf";
	char arr2[] = "sdfaaaaaa";
	strncpy(arr1, arr2, 6);  //���������ַ���������arr1�ĳ���,�򽫺����ľ���Ϊ\0
	printf("%s", arr1);
}