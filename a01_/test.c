#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//int main() {
//	printf("nisd");
//	char c = "ch";
//	printf("%c\n",c);//%c�ַ���ʽ%d����%fС��������%f��ַ%xʮ������
//	float s = 8.0;
//	printf("%f\n", s);
//	double s1 = 9.3;
//	printf("%lf\n", s1);//˫����
//	printf("%d\n", sizeof(long));//8/4
//	printf("%d\n", sizeof(double));//8
//	printf("%d\n", sizeof(char));  //1�ֽ�
//	printf("%d\n", sizeof(int));//4
//	printf("%d\n", sizeof(float));//4
//	printf("%d\n", sizeof(short));//2
//	return 0;
//
//}

//int main() {
//	{int a = 90; }
//	pritnf("%d", a);  //����δ�����ʶ������Ϊa�Ǿֲ�������ֻ���������ŷ�Χ��ʹ��
//	//�������aΪȫ�ֱ���������ȷ��
//	return 0;
//}

/*
int main() {
	extern int num;//�൱������һ��ȫ�ֱ���
	int num1, num2;
	scanf("%d%d", &num1, &num2);  //scanf_s����ʹ�ã����ǲ����ڿ�ƽ̨ʹ�ã�ȥ������
	//"%d%d"  �м䲻�ܼ���������
	
	printf("%d", num1+num2);
	return 0;
}*/


//int main() {
//	char arr[6] = { 0 };
//	scanf("%s", arr);//���ע��һ��û�пո����������6�����ַ�2131231�������213231�����ᱨ��ģ�����ˡ��������������1 2 1 22 22 22 �����ֻ�����һ��Ԫ��
//	printf("%s", arr);
//	return 0;
//}
/*
#define MAX 8
int main() {
	int arr[3] = { 0 };
	arr[2] = 123121;
	21321;//û�б����������泣��

	const int n = 9;
	//int arr[n];//����n����Ϊ�������ʽ

	int sds[MAX];//����û�б���G

	const int g = 90;
	//g = 800;  ///�����ˣ���ΪgΪ���������������޸�
	
	enum sex {
		female,
	    male,
		Serect
	};

	enum sex xiao = female;//����xiao��Ů��femali
	//female = 89;//�����������޸�ö�ٳ���
	// 
	//��ö���е�λ�ã�
	printf("%d\n", female);//0
	printf("%d\n", male);//1
	printf("%d\n", Serect);//2
}*/


//������ָ��Ĵ�Сʱ��ȡ����ƽ̨��λ������8/4
//int main() {
//	int a = 0;
//	int* p = &a;
////	printf("%p\n", p);//00F5F860
////	printf("%d\n", *p);//0
//	printf("%d\n", sizeof(int*));
////	printf("%d", sizeof(char*));
////	printf("%d", sizeof(double*));//4˵����32λƽ̨
//	printf("%d", sizeof(p));
//}




//�ṹ��
//.���ڽṹ���������Ա
//->���ڽṹ��� ��ָ���Ա
//struct Book {
//	char name[46];
//	short price;
//};
//int main() {
//	struct Book l = { "dd",34 };//����һ���ṹ�����l���ṹ��ĳ�ʼ��
//	printf("%s %d\n", l.name, l.price);
//	//l.name = "dfs'"; //���Ͳ�һ�¡�һ��ʱ���飬һ�����ַ���
//	strcpy(l.name, "sdfs");
//	struct Book* pb = &l;
//	printf("%s %d\n", pb->name, pb->price);
//	printf("%s %d\n", (*pb).name, (*pb).price);//*pb=l;
//	return 0;
//}


//int main() {
//	int ch = 0;
//	//ctrl+z�˳�
//	while ((ch = getchar()) != EOF) {
//		putchar(ch);//��ӡ�ַ� 
//	}
//}

//int main() {
//	int ret = 0;
//	int ch = 0;
//	char password[20] = { 0 };
//	printf("mina:>");
//	scanf("%s", password);
//	//getchar();//��ȡ�������������\n
//	while ((ch = getchar()) != '\n') {
//		;
//	}//�����ո��i��������ո���Ϊ�����һ����
//	printf("Y/N\n");
//	ret = getchar();
//	printf("%d\n",ret);
//	if (ret =='Y')
//		printf("1");
//	else
//		printf("2");
//
//}



//int main() {
//	int ch;
//	while ((ch=getchar()) != EOF) {//ֻ������ctrl+z�Ż��˳�
//		//�����л��ǻ��ȡ\n������������ASCiIС��0��ASCII�����Բ���ӡ��ֱ�Ӷ�ȡ��һ���ַ��������ж�
//		 //�����0��9���ַ����������֡����Ե�ASCiiֵ����9��С��0��ASCii�ǣ��Ͳ���ӡ��������֮���ӡ
//		if (ch < '0' || ch>'9') {
//			//printf("%d-\n", ch);
//			continue;
//		}
//		putchar(ch);
//	}
//}

int main() {
	int i = 0;
	/*for (int i = 0; i <= 10; i++) {
		if (i == 5) {
			continue;
		}
		printf("%d", i);
	}*/

	/*printf("\n");while (i <= 10) {
		if (i == 5) {
			continue;
		}
		printf("%d", i);
	}*///����ע��continue���÷���while���γ�����
	
	//for (int x = 0, y = 0, z = 0; x = 0; i++) {//����Ϊ�٣�����ѭ��
	//	printf("sdfs");
	//}

}