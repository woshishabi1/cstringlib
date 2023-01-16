#include <stdio.h>
#include <stdlib.h>

#define true 1
#define false 0   
#define bool short

typedef struct {
	char *data;
	char *olddata;
	int length;
	//bool isempty=true;//ÆúÓÃ£¡ 
}cstring;

int len(char* str);
short compstr(cstring Astr,cstring Bstr);
void begin(cstring *start);
void freedata(cstring *tar);
bool setdata_lim(cstring *tar,char* st,unsigned start,unsigned int end);
bool setdata(cstring *tar,char* st);
bool cpstr(cstring *tostr,cstring *tarstr);
void add_str(cstring *todata,cstring *str);
