#include <stdio.h>
#include <stdlib.h>
#define true 1
#define false 0   
#define bool short
//原来C没有布尔值 
typedef struct {
	char *data=NULL;
	char *olddata=NULL;
	int length=0;
	//bool isempty=true;//弃用！ 
}cstring;


int len(char* str);
short compstr(cstring Astr,cstring Bstr);
void begin(cstring *start);
void freedata(cstring *tar);
bool setdata_lim(cstring *tar,char* st,unsigned start,unsigned int end);
bool setdata(cstring *tar,char* st);
bool cpstr(cstring *tostr,cstring *tarstr);
void add_str(cstring *todata,cstring *str);
void pushlist(cstring *lis,char val);
char poplist(cstring *lis);
void swapstr(cstring* Astr,cstring* Bstr);
void repstr(cstring* tarstr,int where,char val);
