#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<assert.h>

//1�����Ǹ��ַ�������洢
//void reserve(char* s) {//ֱ������ָ�뽻��������ͨ�����ݵĲ�����������������ĸ�λ�ã���ʼ�������ַ�����������
//	//ֱ����������һͷһβ��ָ�뽻�����ͺ�����
//	//�������ָ�룬����Ҫ��һͷһβ�ĶԳƹ�ϵ
//	//for(int i=0;i<se/2;i++){swap();}????
//	assert(s);
//	int se = strlen(s);  //һ����ȡ����ַ����һֱ��ȡ��ֱ������\n
//	char* l = s;
//	char* r = s + se - 1;//���һ��Ԫ�ص�ַ
//	while (l<r) {
//		char tmp = *l;
//		*l = *r;
//		*r = tmp;
//		l++;
//		r--;
//	}
//}
//int main() {
//	char arr[256] = { 0 };
//	//scanf("%s", arr);   //��������ո񣬵���ֻ������ո�ǰ������
//	//gets(arr);  //��ȡһ�У�˵����������ո񡣲���ȫ��������
//	reserve(arr);
//
//	printf("%s\n", arr);
//}



//a+aa+aaa+aaaa+aaaaa����
//int main() {
//	int num = 0;
//	int n = 0;	//���ٸ��������
//	scanf("%d%d", &num, &n);
//	
//	int i = 0;
//	int sum = 0;
//	int ret = 0;
//	for (i = 0; i < num; i++) {
//			ret = ret* 10 + num;
//			sum += ret;
//		
//	}
//	printf("%d", sum);
//}

//ˮ�ɻ�������������һ��
//#include<math.h>  //����һ��pow()��������Ҫ����ͷ�ļ�
//int main(){
//	
//
//	for (int i = 0; i <= 100000; i++) {
//		
//		int a = i;
//		int n = 1;
//		while (a = a / 10) {
//			
//			n++;
//		}
//		int sum = 0;
//		a= i;
//		while (a) {
//			sum += pow(a % 10, n);
//		//	sum += (a % 10)^n;//err
//			a = a / 10;
//		}
//		if (i == sum) printf("%d ", i);
//	}
//	return 0;
//	
//}




//��ӡ����
//int main() {
//	int num = 0;
//	printf("�����ӡ��������");
//	scanf("%d", &num);
//	
//	int i = 0;
//	int j = 0;
//	int k = 0;
//	for ( i = 0; i <= num/2; i++) {
//
//		for ( j = 0; j < num/2-i; j++) {
//			printf(" ");
//			//[i][j] = " ";
//		}
//		for ( k = 0; k< 2*( i+1)-1; k++) {
//			printf("*");
//			//arr[i][j + k] = "*";
//		}
//		
//		printf("\n");
//	}
//
//
//
//	for (i = 0; i < num / 2; i++) {
//
//		for (j = 0; j <= i; j++) {
//			printf(" ");
//			//arr[i][j] = " ";
//		}
//		for (k = 0; k < num-2*(i+1); k++) {
//			printf("*");
//			//arr[i][j + k] = " ";
//		}
//
//		printf("\n");
//	}
//
//	//���ʹ��ָ�뽫�ԳƵ�ֱ�Ӹ�ֵ�أ�����
//	////int (*p)[10]
//	//for (int i = 0; i <sum; i++) {
//	//	char(* p)[sum] = &arr[i];
//	//	*arr[12 - i] = *p;
//	//}
//
//	//for (int i = 0; i < sum; i++) {
//	//	for (int j = 0; j < sum; j++) {
//	//		printf("%s", arr[i]);
//	//	
//	//}
//
//
//}


//����20Ԫ��ˮ��2����ƿ���Ի�һƿˮ
//int main() {
//	int pol = 0;
//	scanf("%d", &pol);
//
//	
//	int sum = 0;
//	sum = sum + pol;
//	
//	while (pol>=2) {
//		sum = sum + pol/2;	    
//		pol =  pol%2  + pol/2;
//	}
//
//	/*if(pol) total=2*total-1;
//	else total=0;*/
//	printf("%d", sum);
//}



//������������ǰ��
//void print(int* p,int s) { //��ӡ����ĺ��� 
//	for (int i = 0; i < s; i++) {
//		printf("%d ", *(p + i));
//	}
//}
//void move(int* p, int s) {
//	int l = 0; int r = s- 1;
//	while(l<r){
//		while (p[l] % 2 == 1&&l<r) {
//			l++;
//		}
//		while (p[r] % 2 == 0&&r>l) {
//			r--;
//		}
//		if (r > l) {
//			int tmp = p[l];
//			p[l] = p[r];
//			p[r] = tmp;
//		}
//	}
//}
//int main() {
//	int arr[] = { 1,2,3,4,5,9,6,7 };
//	int se = sizeof(arr) / sizeof(arr[0]);
//	move(arr, se);
//	print(arr,se);
//	return 0;
//}


//int main() {
//	//������ԭ�����붼һ��
//
//	unsigned char a = 200;
//	unsigned char b = 100;
//	unsigned char c = 0;
//	c = a + b;
//	printf("%d %d", a + b, c); //300 44
//	return  0; 
//
//}


//int main() {
//	unsigned int a = 0x1234;
//	unsigned char b = *(unsigned char*) { &a };
//	printf("%d\n", b);
//	return 0;
//}



//#include<string.h>
//int main() {
//	char a[1000] = { 0 };
//	int i = 0;
//	for (i = 0; i < 1000; i++) {
//		a[i] = -1 - i;
//		//-1 -2 ����-128 127 126  ����0 -1����ѭ��
//	}
//	printf("%d\n", strlen(a));//����0�ͽ�ֹ  255
//}


//�������
//int main() {
//	int a[10][10];
//	//a[0][0] = 1;
//	//a[1][0] = 1;
//	//a[1][1] = 1;
//
//	int n = 0;
//	printf("�����������ӡ����������ǣ�>");
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++) {
//
//		for (int j = 0; j <= i ; j++) {
//			if(j==0|j==i) a[i][j] = 1;
//			else {
//				a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
//			}
//		}
//	}
//
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j <= i; j++) {
//			printf("%d ", a[i][j]);
//		}
//		printf("\n");
//	}
//}



//****************************************&&&&&&&&&&&&&&&&
/*
a:������
b:��c
c����d
d:c��˵
��֪��3��˵�滰��һ��˵�ٻ�
Ѱ������*/
//int main() {
//	int i = 0;
//	for (int i = 'a'; i < 'd'; i++) {
//		if ((i != 'a') + (i == 'c') + (i == 'd') + (i != 'd') == 3)
//			printf("killer:%c\n", i);
//	}
//}


////�������⣺
////36ƥ��6����������ǰ�������������ٱ������Σ�û�м�ʱ��
//int main() {
//
//}


//***********************************88
////���5���˵Ķ����εĲ�����ÿһ����ֻ��һ��˵����
////����ÿ����  һ��+һ��=1 or һ��^һ��=1
//int main() {
//	int a, b, c, d, e = 0;
//	for (a = 1; a <= 5; a++) {
//		for (b = 1; b <= 5; b++) {
//			for (c = 1; c <= 5; c++) {
//				for (d = 1; d <= 5; d++) {
//					for (e = 1; e <= 5; e++) {
//						if ((((b == 2) ^ (a == 3)) == 1) && (((b == 2) ^ (e == 4))== 1 )&&
//							(((c == 1) ^ (d == 2)) == 1) && (((c == 5) ^ (d == 3))== 1 )&&
//							(((e == 4) ^ (a == 1)) == 1) ){
//							if(a*b*c*d*e==120)
//							printf("%d %d %d %d %d\n", a, b, c, d, e);//3 1 5 2 4
//						}
//
//					}
//				}
//			}
//		}
//	}
//}

//int main() {
//	int a[] = { 1,2,3,4,5 };
//	int* p = (int*)(&a + 1);
//	printf("%d %d", *(a + 1), *(p - 1));//2 5
//}

//int main() {
//	int aa[2][5] = { 10,9,8,7,6,5,4,3,2,1 };
//	int* p1 = (int*)(&aa + 1);
//	int* p2 = (int*)(*(aa + 1));  ///ע���ά�������Ԫ��ָ��һ�У���һ�м�1��ָ����ǵڶ��е�Ԫ��
//	printf("%d %d", *(p1 - 1), *(p2 - 1));  //1 6
//}






//*********************************************88
//����k���ַ�

//1��������������
void move_left(char a[20],int se) {
	int k = 0;
	scanf("%d", &k);
	for (int j = 0; j < k; j++) {
		int temp = a[0];
		for (int i = 0; i < se; i++) {
			a[i] = a[i + 1];
		}
		a[se - 1] = temp;
	}
}
void print(char a[30], int se) {
	for (int i = 0; i < se; i++)
	{
		printf("%c ", a[i]);
	}

	printf("\n");
}


#include<assert.h>
void move_left_bypoint(char* arr, int se) {
	assert(arr != NULL);
	int k = 0;
	scanf("%d", &k);
	for (int j = 0; j < k; j++) {
		int temp = *arr;
		for (int i = 0; i < se; i++) {
			*(arr+i) = *(arr+i + 1);
		}
		*(arr+se-1) = temp;
	}
}

//2��������ת��
//abcdef
//ab cdef
//ba fedc
//cdef ab

void reserve(char* l,char* r) {
	assert(l != NULL);
	assert(r != NULL);
	while (l < r) {
		char tmp = *l;
		*l = *r;
		*r = tmp;
		l++;
		r--;
	}
}
void left_move_bysanbu(char* arr, int se) {
	int k = 0;
	scanf("%d", &k);
	assert(k <= se);//���ⷭת������Χ
	reserve(arr, arr+k - 1);//��߷�ת
	reserve(arr+k,arr+se-1);//�ұ߷�ת
	reserve(arr,arr+se-1);//���巭ת
}


//int main() {
//	//����k���ַ�
//	//char a[] = { "zymlovelyf" };
//	//int se = sizeof(a) / sizeof(a[0]);
//	////	move_left(a, se);
//	////move_left_bypoint(a, se);
//	//left_move_bysanbu(a, se);
//	//print(a, se);
//}


//*******************
//�任��
void left_move_bycmp(char* arr, int k) {
	int se = strlen(arr);
	assert(k <= se);//���ⷭת������Χ
	reserve(arr, arr + k - 1);//��߷�ת
	reserve(arr + k, arr + se - 1);//�ұ߷�ת
	reserve(arr, arr + se - 1);//���巭ת
}
#include<string.h>

int isleft_move(char* s1, char* s2) {
	int len = strlen(s1);
	int i = 0;
	for (i = 0; i < len; i++) {
		left_move_bycmp(s1, 1);  ///ÿ��ֻ��תһ���ַ����Ƚ�֮���پ����Ƿ�Ҫ������ת
		if (strcmp(s1, s2) == 0) return 1;

	}

	return 0;
}

//�Ż��任��
int is_leftmove_youhua(char* str1, char* str2) {
	//��str1֮��׷��str1
	//�ж�str2�Ƿ�Ϊstr1���Ӵ�
	int len = strlen(str1);
	int len2 = strlen(str2);
	//strcat(str1, str1);//�Լ����Լ�׷�ӣ�����������ʺ�
	strncat(str1, str1, len);

	//strstr()���ִ��ĺ���
	int *ret=strstr(str1, str2);
	//����Ӵ�2�Ĵ��ȴ�1�٣���ô�;��Բ��ɿ������Ӵ�1����֮��Ĵ������Ա����������clen=len2
	if (ret != NULL&&len==len2) {
		return 1;
	}
	else return 0;
	
}

//int main(){
//	//����һ���ַ�������һ���ַ���ת֮���ж������Ƿ����
//	char arr1[30] = "abcdef";
//	char arr2[] = "cdef";
//	int se= sizeof(arr1) / sizeof(arr1[0]);
//	//int ret = isleft_move(arr1, arr2);
//	int ret = is_leftmove_youhua(arr1, arr2);
//	if (ret==1)printf("y");
//	else printf("no");
//
//	print(arr1, se);
//
//}


//^^^^^^^^^^^^^^^^^^^^^^_____________���Ͼ���
//�����ÿ�д������ǵ����ģ����ϵ����ǵ����ģ����д����<O(N)  ˵�������Ա�������
//����ĳһ����
//ͨ�����Ͻǻ������½�ȥɸѡ


int FindNum(int arr[3][3], int k, int row, int col) {
	int x = 0;
	int y = col - 1;
	while (y>=0&&x<=row-1) {
		if (k < arr[x][y])
			y--;
		else if (k > arr[x][y])
		{
			x++;
		}
		else
		{
			printf("�±���:<%d %d>\n ", x+1, y+1);
			return 1;
		}
	}
	return 0;
}


int FindNumpoint(int arr[3][3], int k, int *row, int* col) {
	int x = 0;
	int y = *col - 1;
	while (y >= 0 && x <= *row - 1) {
		if (k < arr[x][y])
			y--;
		else if (k > arr[x][y])
		{
			x++;
		}
		else
		{
			//printf("�±���:<%d %d>\n ", x + 1, y + 1);
			*row = x;
			*col = y;
			return 1;
		}
	
	}
	//���Բ�Ҫ
		*row = -1;
		*col = -1;
	return 0;
}

int main() {
	//����<O(n),���Բ����Ա�������

	int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
	int k = 90;

	int x = 3;
	int y = 3;
	/*int ret = FindNum(arr, k, 3, 3);

	if (ret) printf("yes");
	else printf("no");*/


	int ret = FindNumpoint(arr, k, &x, &y);  //�����Ͳ���
	if (ret) { 
		printf("yes"); 
		printf("%d %d", x, y);
	}
	else printf("no");

	return 0;
}