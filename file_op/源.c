#define  _CRT_SECURE_NO_WARNINGS 1



// .��ʾ��ǰ·��
//..��ʾ��һĿ¼
#include<stdio.h>  //��������
#include <errno.h>
//int main() {
//	int a = 10000;
//
//	//�����Ƶ���ʽд���ļ�
//	//FILE* pf = fopen("ww.txt", "wb"); //�������ͷ�ļ� stdio.h  //��ǰĿ¼��  ���Ŀ¼
//	//FILE* pf = fopen("C:\\test\\ww.txt", "wb"); //Ŀ¼C:\test\ww.txt �£�˫б����Ϊ�˷�ֹת��
//	//if (pf == NULL) {
//	//	printf("%s", strerror(errno));
//	//	return 0;//������ļ�ʧ�ܣ�ֱ�ӽ�������
//	//}
//
//
//	//дһ��4�ֽڵ�����a��pfָ����ļ���
//	//fwrite(&a, 4, 1, pf);
//	
//
//	//��д�ļ�
//	FILE* pfc = fopen("ww.txt", "w"); 
//	//�������ͷ�ļ� stdio.h  //��ǰĿ¼��  ���Ŀ¼
//	//������ֱ��дw,�����Զ�������дwb,�����ڱ��ز鿴��ʱ�򣬾Ϳ���ֱ����ASIIC��ȡ
//	//wb����д֮����Ҫ��vs���Զ����Ʊ������鿴
//	if (pfc==NULL) {
//		printf("%s", strerror(errno));
//		return;
//	}
// 
// ��cд��pfcָ��ָ����ļ���
//	fputc('z', pfc);
//	fputc('z', pfc);
//	fputc('t', pfc);
//	//�ر��ļ�
//	fclose(pfc);
//	pfc = NULL;
//
//
//
//	//��ȡ�ļ�����
//	FILE* pRead = fopen("ww.txt", "r");//һ��ע��������˫���ţ�ע���ʽ������һ�±���Խ�����
//	if(pRead==NULL) {
//		printf("%s", strerror(errno));
//		return;
//	}
//	printf("%c", fgetc(pRead));
//	printf("%c", fgetc(pRead));
//	printf("%c", fgetc(pRead));
//
//	fclose(pRead);
//	pRead = NULL;
//	return 0;
//}

//int main() {
//	int ch = fgetc(stdin);  //���������ж�
//	fputc(ch, stdout);  //�������Ļ��
//}


//��ȡ�ļ�fgets()
//int main() {
//	char buf[1024] = { 0 };
//	FILE* pf = fopen("test.txt", "r");
//	if(pf == NULL){
//		return;
//	}
//
//	fgets(buf, 1024, pf);
//	//��pfָ����ļ��ж�ȡ1024���ռ�����ݣ��洢��buf��   \nҲ���ȡ
//	printf("%s\n", buf); 
//	//%s�ӵ�ַ��ʼ��ȡֱ������\0
//
//
//	puts(buf);//��ӡ��֮����Զ�����
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}




//int main() {
//	char buf[1024] = { 0 };
//	FILE* pf = fopen("test.txt", "w");//ע������Ķ�дȨ�ޣ����ᵼ������Ķ�ȡ�Ƿ�ɹ�
//	if(pf == NULL){
//		return;
//	}
//
//
//	
//	fputs("cclove", pf);
//	//��pfָ����ļ���д����
//	//�������Զ����У������Ҫ���Ӽ����
//	//	fputs("cclove\n", pf);
//
//
//
//	fputs("zz", pf);
//
//	//fgets(buf, 1024, pf);
//	//puts(buf);//��ӡ��֮����Զ�����
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}



////�ӱ�׼�������ж�ȡ������������֮��
//int main() {
//	char buf[1024] = { 0 };
//
//	//fgets(buf, 1024, stdin);//���뵽��������
//	//fputs(buf, stdout);//�������׼���
//	
//	//����ʶ��ո񣬲����
//	gets(buf);
//	puts(buf);
//}



//���ض���ʽд�ļ�

//struct S {
//	int age;
//	char arr[10];
//	float f;
//};
//int main() {
//	//struct S s = { 20,"zhaninmi",3.45 };
//	//FILE* p = fopen("test.txt", "w");
//	//if (!p) { return; }
//	//
//	////���ض��ĸ�ʽ������д��pָ����ļ���
//	//fprintf(p, "%d %s %f",s.age,s.arr,s.f);
//
//
//	//	
//	struct S s = { 0 };
//	FILE* p = fopen("test.txt", "r");
//	if (NULL==p) { return; }
//
//	s.age = 10;
//	s.f = 9.9;
//	strcpy(s.arr, "chenwang"); 
//	//***************************8
//	//ע������Խṹ���е����鸳ֵ������ʹ�ã�strcpy����forѭ����ֵ
//	// 	   ���ǲ�����ʹ��s.arr = "sdfs";����ȥ��ֵ���ᱨ�����󡰱��ʽ����ֵӦΪ���޸ĵ���ֵ��
//	
//	//���ض��ĸ�ʽ������д��pָ����ļ�
//	fscanf(p, "%d %s %f", &(s.age), &(s.arr), &(s.f));
//	//���ض��ĸ�ʽ��pָ������ݴ�ӡ����
//	printf("%d %s %f", s.age, s.arr, s.f);
//
//
//
//	//�ӱ�׼������������Ϣ�����ӱ�׼�����ӡ
//	fscanf(stdin, "%d %s %f", &(s.age), &(s.arr), &(s.f));
//	fprintf(stdout,"%d %s %f", s.age, s.arr, s.f);
//
//	fclose(p);
//	p = NULL;
//}
//


//struct S {
//	int age;
//	float score;
//	char arr[10];
//};
//int main() {
//	struct S s = { 100,3.4,"zz" };
//	char buf[1024];
//	struct S tmp = { 0 };
//	//�����ݰ���ʽд��buf��
//	sprintf(buf, "%d %f %s", s.age, s.score, s.arr);
//	//��ӡbuf�е��������ַ�������ʽ��ӡ����
//	printf("%s\n", buf);
//
//	//��buf�е������Ը�ʽ�����浽tmp��
//	sscanf(buf, "%d %f %s", &(tmp.age), &(tmp.score), &(tmp.arr));
//	//������ʽ��ӡ��tmp�е�����
//	printf("%d %f %s", tmp.age, tmp.score, tmp.arr);
//}



//struct S {
//	char arr[10];
//	int age;
//	float score;
//};
////�Զ�����д�ļ�
//int main() {
//	/*FILE* pf = fopen("test.txt", "wb");
//	if (!pf) { return; }
//	struct S s = { "sds",20,23.9 };
//	//������д�ļ�
//	//��pfָ����ļ���д��ṹ��s������
//	fwrite(&s, sizeof(struct S), 1, pf);
//	fclose(pf);
//*/
//
//
//
//	
//	FILE* pf = fopen("test.txt", "rb");
//	if (!pf) { return; }
//	struct S tmp = { 0 };
//	//�����ƶ��ļ�
//	//��pfָ����ļ���ȡ1�����ݣ��洢��tmp��
//	fread(&tmp, sizeof(struct S), 1, pf);
//
//	printf("%s %d %f", tmp.arr, tmp.age, tmp.score);//sds 20 23.900000
//
//	fclose(pf);
//	pf = NULL;
//}



//��λָ��
int main() {
	FILE* pf = fopen("ww.txt", "r");
	if (!pf) { return; }
	fseek(pf, -2, SEEK_END);
	int ch = fgetc(pf);
	printf("%c\n", ch);
	fclose(pf);
	pf = NULL;

}