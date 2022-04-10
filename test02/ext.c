#define  _CRT_SECURE_NO_WARNINGS 1

 //int g_val = 2020;//在另一个文件中可以调用g_val的值
 static int g_val = 2303;//static修饰之后，
// 就不能跨文件使用，只能在本文件中使用


 int ADD(int a,int b) {
	 return a + b;
 }
 //static int ADD(int a, int b) {
	// return a + b;
 //}//添加stsic之后，外部源文件不能再调用这个函数了