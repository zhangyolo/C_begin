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



//针对5个人的对名次的阐述，每一个人只有一半说对了
//所以每个人  一半+一半=1 or 一半^一半=1
int main() {
	int a, b, c, d, e = 0;
	for (a = 1; a <= 5; a++) {
		for (b = 1; b <= 5; b++) {
			for (c = 1; c <= 5; c++) {
				for (d = 1; d <= 5; d++) {
					for (e = 1; e <= 5; e++) {
						if ((((b == 2) ^ (a == 3)) == 1) && (((b == 2) ^ (e == 4))== 1 )&&
							(((c == 1) ^ (d == 2)) == 1) && (((c == 5) ^ (d == 3))== 1 )&&
							(((e == 4) ^ (a == 1)) == 1) ){
							if(a*b*c*d*e==120)
							printf("%d %d %d %d %d\n", a, b, c, d, e);//3 1 5 2 4
						}

					}
				}
			}
		}
	}
}