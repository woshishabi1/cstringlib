#include "cstring.h"

cstring sb;
cstring A, B, C,D;

int main() {
	begin(&sb);
	begin(&A);
	begin(&B);
	begin(&C);
	begin(&D);
	 
	printf("%d\n", sizeof A);//输出A的长度 
	setdata(&sb,"nsdd");//设置sb的值 
	setdata(&A,"dashabi");//设置A的值 
	cpstr(&D,&A);//复制A到D 
	cpstr(&B,&A);//复制A到B
	add_str(&A,&sb);//把A与sb拼接，加到A
	add_str(&A,&sb);//把上一个结果与sb拼接，加到A 
	add_str(&A,&A);//把上一个结果与A拼接，加到A 
	 printf("%s\n", A.data);//打印A的数据 
	printf("%d\n", len(A.data));//打印A的长度（在这也是申请了多少内存） 
	setdata(&C,"dashaba");//设置C的值 
	
	printf("compres:");
	printf("%d\n", compstr(B, D));//把B和D完全相同的string比较 
	printf("%d\n", compstr(D, C));//把D与C长度相同但内容不同的string比较 
	printf("%d\n", compstr(D, sb));//把D与sb长度不同内容相同的string比较 
	setdata_lim(&sb,"SHABIDONGXI", 1, 5);//把字符串“shabidongxi”取[1,5)替换sb中的数据 ，从0开始数！ 
	printf("%d\n", len(sb.data));//用len输出sb的长度 
	printf("%d\n", sb.length);//输出自带结构体中length元素的值，与len比较是否相同 
	printf("%s\n", sb.data);//输出sb的数据 
	

}
