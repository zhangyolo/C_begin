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



//�ӱ�׼�������ж�ȡ������������֮��
int main() {
	char buf[1024] = { 0 };

	//fgets(buf, 1024, stdin);//���뵽��������
	//fputs(buf, stdout);//�������׼���
	
	//����ʶ��ո񣬲����
	gets(buf);
	puts(buf);
}
