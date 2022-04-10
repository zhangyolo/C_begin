#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
//某数组中只有一个元素出现一次，其余元素均出现两次
//最初想法是，先排序。然后在比较前后两个数字是否相同，


//暴力法
//int main() {
//	int arr[] = { 1,3,4,5,1,2,3,4,5};
//	
//	for (int j = 0; j < sizeof(arr); j++) {
//		int total = 0;
//		for (int k = 0; k <  sizeof(arr)/sizeof(arr[0]); k++) {
//			if (arr[k] == arr[j]) total++;
//		}
//		if (total == 1) {
//			printf("单身狗：%d", arr[j]);
//			break;
//			//这里使用break提高了效率，因为题目中只有一个单身狗，一旦找到单身狗，后续就不用再统计，直接跳出循环
//		}
//	}
//}


// sizeof(arr)/sizeof(arr[0])计算元素的个数----C语言中
//sizeof()计算长度，单位字节
//通过异或同0异1，可以得知 如果两个异或为0，则该数组该数不是单身狗
//任何数和0异或，都不变；
int main() {
	int arr[] = { 1,3,4,5,1,2,3,4,5 };
	int s = 0;
	for (int j = 0; j < sizeof(arr) / sizeof(arr[0]); j++) {
		s = s^arr[j];
	}
	printf("%d", s);
	return 0;

}
