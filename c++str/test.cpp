#include <stdio.h>
#include <stdlib.h>
#include "cstring .h"


cstring sb;
cstring A, B, C,D;

int main() {
	printf("%d\n", sizeof A);//���A�ĳ��� 
	sb.setdata("nsdd");//����sb��ֵ 
	A.setdata("dashabi");//����A��ֵ 
	D.cpstr(A);//����A��D 
	B.cpstr(A);//����A��B 
	A.add_str(sb);//��A��sbƴ�ӣ��ӵ�A
	A.add_str(sb);//����һ�������sbƴ�ӣ��ӵ�A 
	A.add_str(A);//����һ�������Aƴ�ӣ��ӵ�A 
	 printf("%s\n", A.data);//��ӡA������ 
	printf("%d\n", len(A.data));//��ӡA�ĳ��ȣ�����Ҳ�������˶����ڴ棩 
	C.setdata("dashaba");//����C��ֵ 
	printf("compres:");
	printf("%d\n", compstr(B, D));//��B��D��ȫ��ͬ��string�Ƚ� 
	printf("%d\n", compstr(D, C));//��D��C������ͬ�����ݲ�ͬ��string�Ƚ� 
	printf("%d\n", compstr(D, sb));//��D��sb���Ȳ�ͬ������ͬ��string�Ƚ� 
	sb.setdata_lim("SHABIDONGXI", 1, 5);//���ַ�����shabidongxi��ȡ[1,5)�滻sb�е����� ����0��ʼ���� 
	printf("%d\n", len(sb.data));//��len���sb�ĳ��� 
	printf("%d\n", sb.length);//����Դ��ṹ����lengthԪ�ص�ֵ����len�Ƚ��Ƿ���ͬ 
	printf("%s\n", sb.data);//���sb������ 
	

}
