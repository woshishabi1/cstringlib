#include "cstring.h"

cstring sb;
cstring A, B, C,D;

int main() {
	begin(&sb);
	begin(&A);
	begin(&B);
	begin(&C);
	begin(&D);
	 
	printf("%d\n", sizeof A);//���A�ĳ��� 
	setdata(&sb,"nsdd");//����sb��ֵ 
	setdata(&A,"dashabi");//����A��ֵ 
	cpstr(&D,&A);//����A��D 
	cpstr(&B,&A);//����A��B
	add_str(&A,&sb);//��A��sbƴ�ӣ��ӵ�A
	add_str(&A,&sb);//����һ�������sbƴ�ӣ��ӵ�A 
	add_str(&A,&A);//����һ�������Aƴ�ӣ��ӵ�A 
	 printf("%s\n", A.data);//��ӡA������ 
	printf("%d\n", len(A.data));//��ӡA�ĳ��ȣ�����Ҳ�������˶����ڴ棩 
	setdata(&C,"dashaba");//����C��ֵ 
	
	printf("compres:");
	printf("%d\n", compstr(B, D));//��B��D��ȫ��ͬ��string�Ƚ� 
	printf("%d\n", compstr(D, C));//��D��C������ͬ�����ݲ�ͬ��string�Ƚ� 
	printf("%d\n", compstr(D, sb));//��D��sb���Ȳ�ͬ������ͬ��string�Ƚ� 
	setdata_lim(&sb,"SHABIDONGXI", 1, 5);//���ַ�����shabidongxi��ȡ[1,5)�滻sb�е����� ����0��ʼ���� 
	printf("%d\n", len(sb.data));//��len���sb�ĳ��� 
	printf("%d\n", sb.length);//����Դ��ṹ����lengthԪ�ص�ֵ����len�Ƚ��Ƿ���ͬ 
	printf("%s\n", sb.data);//���sb������ 
	

}
