#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<assert.h>

//1、及那个字符串逆序存储
//void reserve(char* s) {//直接利用指针交换，可以通过传递的参数，决定从数组的哪个位置，开始将后续字符进行逆序存放
//	//直接利用两个一头一尾的指针交换，就很容易
//	//如果不用指针，就需要找一头一尾的对称关系
//	//for(int i=0;i<se/2;i++){swap();}????
//	assert(s);
//	int se = strlen(s);  //一旦获取到地址，就一直读取，直到督导\n
//	char* l = s;
//	char* r = s + se - 1;//最后一个元素地址
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
//	//scanf("%s", arr);   //可以输入空格，但是只能逆序空格前的内容
//	//gets(arr);  //读取一行，说明可以输入空格。并将全部逆序存放
//	reserve(arr);
//
//	printf("%s\n", arr);
//}



//a+aa+aaa+aaaa+aaaaa……
//int main() {
//	int num = 0;
//	int n = 0;	//多少个整数相加
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

//水仙花数是自幂数的一种
//#include<math.h>  //调用一下pow()函数，需要调用头文件
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




//打印菱形
//int main() {
//	int num = 0;
//	printf("你想打印几行棱形");
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
//	//如何使用指针将对称的直接赋值呢？？？
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


//利用20元买水，2个空瓶可以换一瓶水
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



//将基数都放在前面
//void print(int* p,int s) { //打印数组的函数 
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
//	//正数的原反补码都一致
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
//		//-1 -2 ……-128 127 126  ……0 -1……循环
//	}
//	printf("%d\n", strlen(a));//读到0就截止  255
//}


//杨辉三角
//int main() {
//	int a[10][10];
//	//a[0][0] = 1;
//	//a[1][0] = 1;
//	//a[1][1] = 1;
//
//	int n = 0;
//	printf("请输入您想打印几行杨辉三角：>");
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
a:不是我
b:是c
c：是d
d:c胡说
已知有3人说真话，一人说假话
寻找凶手*/
//int main() {
//	int i = 0;
//	for (int i = 'a'; i < 'd'; i++) {
//		if ((i != 'a') + (i == 'c') + (i == 'd') + (i != 'd') == 3)
//			printf("killer:%c\n", i);
//	}
//}


////赛马问题：
////36匹马，6个赛道，求前三名；请问最少比赛几次；没有计时器
//int main() {
//
//}


//***********************************88
////针对5个人的对名次的阐述，每一个人只有一半说对了
////所以每个人  一半+一半=1 or 一半^一半=1
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
//	int* p2 = (int*)(*(aa + 1));  ///注意二维数组的首元素指第一行，第一行加1，指向的是第二行的元素
//	printf("%d %d", *(p1 - 1), *(p2 - 1));  //1 6
//}






//*********************************************88
//左旋k个字符

//1、暴力法，遍历
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

//2、三步翻转法
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
	assert(k <= se);//避免翻转超出范围
	reserve(arr, arr+k - 1);//左边翻转
	reserve(arr+k,arr+se-1);//右边翻转
	reserve(arr,arr+se-1);//整体翻转
}


//int main() {
//	//左旋k个字符
//	//char a[] = { "zymlovelyf" };
//	//int se = sizeof(a) / sizeof(a[0]);
//	////	move_left(a, se);
//	////move_left_bypoint(a, se);
//	//left_move_bysanbu(a, se);
//	//print(a, se);
//}


//*******************
//变换题
void left_move_bycmp(char* arr, int k) {
	int se = strlen(arr);
	assert(k <= se);//避免翻转超出范围
	reserve(arr, arr + k - 1);//左边翻转
	reserve(arr + k, arr + se - 1);//右边翻转
	reserve(arr, arr + se - 1);//整体翻转
}
#include<string.h>

int isleft_move(char* s1, char* s2) {
	int len = strlen(s1);
	int i = 0;
	for (i = 0; i < len; i++) {
		left_move_bycmp(s1, 1);  ///每次只翻转一个字符，比较之后，再决定是否还要继续翻转
		if (strcmp(s1, s2) == 0) return 1;

	}

	return 0;
}

//优化变换题
int is_leftmove_youhua(char* str1, char* str2) {
	//再str1之后追加str1
	//判断str2是否为str1的子串
	int len = strlen(str1);
	int len2 = strlen(str2);
	//strcat(str1, str1);//自己给自己追加，这个方法不适合
	strncat(str1, str1, len);

	//strstr()找字串的函数
	int *ret=strstr(str1, str2);
	//如果子串2的串比串1少，那么就绝对不可可能是子串1左旋之后的串，所以必须加上限制clen=len2
	if (ret != NULL&&len==len2) {
		return 1;
	}
	else return 0;
	
}

//int main(){
//	//给定一个字符，让另一个字符翻转之后，判定两者是否相等
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


//^^^^^^^^^^^^^^^^^^^^^^_____________杨氏矩阵
//矩阵的每行从左到右是递增的，从上到下是递增的，请编写程序，<O(N)  说明不可以遍历查找
//查找某一个数
//通过右上角或者左下角去筛选


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
			printf("下标是:<%d %d>\n ", x+1, y+1);
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
			//printf("下标是:<%d %d>\n ", x + 1, y + 1);
			*row = x;
			*col = y;
			return 1;
		}
	
	}
	//可以不要
		*row = -1;
		*col = -1;
	return 0;
}

int main() {
	//由于<O(n),所以不可以遍历查找

	int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
	int k = 90;

	int x = 3;
	int y = 3;
	/*int ret = FindNum(arr, k, 3, 3);

	if (ret) printf("yes");
	else printf("no");*/


	int ret = FindNumpoint(arr, k, &x, &y);  //返回型参数
	if (ret) { 
		printf("yes"); 
		printf("%d %d", x, y);
	}
	else printf("no");

	return 0;
}