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



////strncpy()
////ģ��ʵ�֣�
//void strncpy();
//int main() {
//	char arr1[30] = "sdfasdf";
//	char arr2[] = "sdfaaaaaa";
//	strncpy(arr1, arr2, 6);  //���������ַ���������arr1�ĳ���,�򽫺����ľ���Ϊ\0
//	printf("%s", arr1);
//}




////strcat()
//int main() {
//	char arr1[30] = "sdfasdf";
//	char arr2[] = "sdfaaaaaa";
//	strncat(arr1, arr2, 6);  //�����ӵ��ַ���������arr1�ĳ���,�򽫺���һ���ľ���Ϊ\0
//	printf("%s", arr1);
//}



//int strncmp(const char*s1,const char *s2,size_t count
//int main() {
//	char* p1 = "sdfa";
//	char* p2 = "sdavfvvv";
//
//	//strcmp(p1, p2);
//
//	//strncmp();//���ԱȽ��ַ����ĵ�n���ַ��Ĵ�С
//	return 0;
//}


//strstr()
//ע��kmp��������Խ�ԣ��������˽⣬�㷨���ѧ��
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
//		printf("������");
//	}
//	else
//		printf("%s\n", ret);
//}
//




//int main() {
	//char arr[] = "sda@sdfa.sdfs" ;


//	char* p =".@";   ///�и��˳������ν
//	//ֻҪ����2�����ϵ��ַ����Ͳ����õ����ţ�
//	//ֻ����˫���ţ������ȡ�ڴ�����
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
//#include<errno.h>//����Ҫ��
//int main() {
//	/*
//	������  ����
//	0 No error
//	1��Operation not permitted
//	����
//	*/
//
//	char* str = strerror(0);///
//	printf("%s\n", str);  //���ش�����������Ϣ  //
//
//	/*
//	errorf ��һ��ȫ�ֵĴ�����ı���
//	��C���ԵĿ⺯����ִ���У������˴��󣬾ͻ�Ѷ�Ӧ�Ĵ����룬��ֵ�ĵ�errno��
//	*/
//	FILE* pf = fopen("test.txt", "r");
//	if (!pf) {
//		printf("��ʧ��,ԭ����:");
//		printf("%s\n", strerror(errno));
//	}
//	else printf("succeed");
//	//��Ҫ�ڸ�Ŀ¼�»�ָ��Ŀ¼�´�����Ӧ���ı����ſ��Դ�
//
//	return 0;
//}


//int main() {
//	char ch = 'W';
//	printf("%d\n", islower(ch));//0  //����Сд��ĸ������0
//
//	//isdigit(�� �ж��ǲ���0~9��ʮ���������Ƿ��ط������֣��񷵻�0  //�����ű���ӣ�
//	printf("%d\n", isdigit('s'));
//	printf("%d\n", isdigit('9')); // ���� //�����ű���ӣ�
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
//		if ((isupper(arr[i])))  //�ҳ���д��ĸ
//			arr[i] = tolower(arr[i]);  //ת��ΪСд��ĸ
//		i++;
//	}
//
//	printf("%s\n", arr);
//}




//�ڴ濽�������.���Զ���i�ĺ�����ֻ�����ڴ治�ص����ڴ濽��
void* my_memcpy(void* p1, const void* p2, size_t se) {
	//se���ֽ� ��λ
	//����ǿ��ת��Ϊchar*֮��ͨ���ֽ����ο���
	assert(p1 && p2);
	void* ret = p1;
	while (se--) {
		*(char*)p1 = *(char*)p2;

		((char*)p1)++;//ǿ�����͵����ȼ����ͣ�������Ҫ�������ţ�Ҳ���Ը�Ϊǰ�üӼ�
		((char*)p2)++;

	}
	return ret;
}


//�Զ���һ�������������ڴ��ص����ڴ濽��
//���ڲ���ʹ���ı�ı��������԰�������Ϊ������
void* my_memcpy_move(void* dest, const void* src, size_t se) {
	//se���ֽ� ��λ
	//����ǿ��ת��Ϊchar*֮��ͨ���ֽ����ο���
	assert(dest && src);
	void* ret = dest; //��ֹdest�ı仯���ȴ洢��һ��������

	if (dest < src) {
		//ǰ->��
		while (se--) {
			*(char*)dest = *(char*)src;
			((char*)dest)++;
			((char*)src)++;
		}
	}
	else {
		//��->ǰ
		while (se--) {
			*((char*)dest + se ) =*( (char*)src + se );
		}
	}
	return ret;
}

void* my_memcpy_move2(void* dest, const void* src, size_t se) {
	//se���ֽ� ��λ
	//����ǿ��ת��Ϊchar*֮��ͨ���ֽ����ο���
	assert(dest && src);
	void* ret = dest; //��ֹdest�ı仯���ȴ洢��һ��������

	if (dest < src||dest>(char*)src+se) {
		//ǰ->��
		while (se--) {
			*(char*)dest = *(char*)src;
			((char*)dest)++;
			((char*)src)++;
		}
	}
	else {
		//��->ǰ
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
//	//strcpy(const char*p,const char*q) //������char���ͣ�
//	//strcpy(arr2, arr1);  //�˴�������int���ͣ������ݣ��ᾯ�汨��
//
//	//memcpy(arr2, arr1, sizeof(arr1));//���Բ鿴�仯
//
//	struct stu ss[] = { { "cc",20 }, { "zz",23 } };
//	struct stu s[5] = { 0 }; 
//	//memcpy(s, ss,sizeof(ss));
//	my_memcpy(s, ss, sizeof(ss));
//}



//int main() {
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	//my_memcpy(arr+2,arr,5*sizeof(arr[0]));//�����Զ����memcpy�Ĺ��ܣ�ֻ������ɲ��ص��ڴ�Ŀ�������
//	//for (int i = 0; i < 10; i++) {
//	//	printf("%d ", arr[i]);   //1 2 1 2 1 2 1 8 9 10  //�����ˡ�֮ǰ3��4λ���ϵ�����������
//	//}
//	
//	//�ڴ��ص������õ�������ת��
//	//int tarr[30] = { 0 };
//	//my_memcpy(tarr, arr, 5 * sizeof(arr[0]));
//	//my_memcpy(arr + 2, tarr, 5 * sizeof(arr[0]));
//	//for (int i = 0; i < 10; i++) {
//	//	printf("%d ", arr[i]);   //1 2 1 2 1 2 1 8 9 10  //�����ˡ�֮ǰ3��4λ���ϵ�����������
//	//}
//
//
//	//�ڴ��ص�
//	//���ÿ⺯��memmove���
//	//memmove(arr + 2, arr, 5 * sizeof(arr[0]));
//	////memcpy(arr + 2, arr, 20);//�⺯���е�memcpy��ʵҲ���Խ���ڴ��ص��Ŀ���
//	////C�����У�memcpyֻ��Ҫ����Ĳ��ص����ڴ濽���Ϳ�����
//	////memmove �����ڴ��ص����ڴ濽��
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
//	//puts(str);  //���Դ�ӡ�ַ�������
//	//puts(arr);   //�����Դ�ӡint arr[] = { 1,2,3,4,5,6,7,8,9,10 };��ɢ��
//}



//memcmp�ڴ�Ƚ�
//int main() {
//	//�ڴ��еĴ洢��С�˴洢
//	//01 00 00 00 06 00 00 00 03 00 00 00 ����
//	//01 00 00 00 04 00 00 00 05 00 00 00 ����
//	int arr1[] = { 1,6,3,4,5 };
//	int arr2[] = { 1,4,5,6,7, };
//	int ret = memcmp(arr1, arr2, 9);  //9���ֽڣ��Ƚϵ�λ���ֽ�
//	printf("%d ", ret);
//}

//memset�ڴ�����
int main() {
	char arr[10] = ""; //δ��ʼ��������\0
	memset(arr, '#', 10);//���ڴ��10���ֽ�����Ϊ#


	int ar[10] = { 0 }; //int  40���ֽ�
	memset(ar, 1, 10); //ֻȡ10���ֽڸı䣬��Ϊ1
	//01 01 01 01 01 01 01 01 01 01 00 000 00����
}
