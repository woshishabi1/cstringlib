#include "cstring.h"
int len(char* str)
{
	int i=0; 
	for(;;){
		//TODO
		if(*(str+i)=='\0'){return(i+1); break;}
		i++;
	}
}
short compstr(cstring Astr,cstring Bstr){
if(Astr.length == Bstr.length){
		for(int i=0;i<Astr.length;i++){
		if(*(Astr.data+i)==*(Bstr.data+i)){
		
			//break;
		}else if(*(Astr.data+i) !=*(Bstr.data+i)){return 1;}
						
		}
}else{return -1;}
	return 0;
}
void begin(cstring* start)
{
		start->data=NULL;//free��ָ���ǰ�ȫ�� 
		start->olddata=NULL;
		start->length=0;
	} 
void freedata(cstring* tar){
		for(int i=0;i<(*tar).length;i++){
		*((*tar).data+i)=0;
		}
			free(tar->data);
			tar->data=NULL;
			tar->length=0;
				}
bool setdata_lim(cstring *tar,char* st,unsigned start,unsigned int end){
					//freedata();
					freedata(tar);
					tar->data=(char*)malloc((end+1-start)*sizeof(char));
					if(tar->data==NULL){printf("fuck!"); } 
				//printf("\nmem: %d\n",(end+1-start)*sizeof(char));//debug
					if(tar->data==NULL){return false;}
					tar->length=end+1-start;
					for(int i=start;i<end;i++){
				     *(tar->data+i-start)=*(st+i);	
				     //printf("%c",*(tar->data+i-start));
				     
					}
					*(tar->data+end-start)='\0';
					
					
					return true;
		}
bool setdata(cstring *tar,char* st){
		if(setdata_lim(tar,st,0,len(st)-1)==true){return true;}else{return false;}
	}
	
bool cpstr(cstring *tostr,cstring *tarstr){
		if(setdata(tostr,tarstr->data)==true){
			
			return true;
		}
		else{return false;}
	}
void add_str(cstring *todata,cstring *str){
		todata->olddata=todata->data;//���� 
		//if(olddata==NULL){printf("fuck!"); } 
		todata->data=(char*)malloc(todata->length-1+str->length);
		for(int i=0;i<todata->length-1;i++){
			*(todata->data+i)=*(todata->olddata+i);//��� 
		}
					int should=todata->length-1;//������ 
		for(int i=should;i<todata->length+str->length-2;i++){

			*(todata->data+i)=*(str->data+i-should);//�޽� 
		}
		*(todata->data+todata->length+str->length-2)='\0';
		//printf("%d",length-1+str.length+500);//debug 
		todata->length=todata->length+str->length-1;
		free(todata->olddata);
		
		
	}
