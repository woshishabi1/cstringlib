#include <stdio.h>
#include <stdlib.h>
int len(char* str)
{
	int i=0; 
	for(;;){
		//TODO
		if(*(str+i)=='\0'){return(i+1); break;}
		i++;
	}
}
struct cstring{
	
	
	char *data;
	char *olddata;
	int length;
	//bool isempty=true;//���ã� 
	void begin(cstring start)
{
		start.data=NULL;//free��ָ���ǰ�ȫ�� 
		start.olddata=NULL;
		start.length=0;
	} 
	void freedata(){
			for(int i=0;i<length;i++){
		     *(data+i)=0;
			 }
		
			free(data);
			
			data=NULL;
			length=0;	
	             	}
	bool setdata_lim(char* st,unsigned start,unsigned int end){
					//freedata();
					freedata();
					data=(char*)malloc((end+1-start)*sizeof(char));
				//	printf("\nmem: %d\n",(end+1-start)*sizeof(char));//debug
					if(data==NULL){return false;}
					length=end+1-start;
					for(int i=start;i<end;i++){
				     *(data+i-start)=*(st+i);	
				     
					}
					*(data+end-start)='\0';
					
					return true;
		}
	bool setdata(char* st){
		if(setdata_lim(st,0,len(st)-1)==true){return true;}else{return false;}//���˲�ǳ 
	}
	bool cpstr(cstring tarstr){
		if(setdata(tarstr.data)==true){
			return true;
		}
		else{return false;}
	}
	void add_str(cstring str){
		olddata=data;//���� 
		//if(olddata==NULL){printf("fuck!"); }
		data=(char*)malloc(length-1+str.length);
		for(int i=0;i<length-1;i++){
			*(data+i)=*(olddata+i);//��� 
		}
					int should=length-1;//������ 
		for(int i=length-1;i<length+str.length-2;i++){

			*(data+i)=*(str.data+i-should);//�޽� 
		}
		*(data+length+str.length-2)='\0';
		//printf("%d",length-1+str.length+500);//debug 
		length=length+str.length-1;
		free(olddata);//free�Ǹ�ʮ�������ŷֺõ�ϰ��:) 
		
	}
	
//	free(); 

	
	 
	};


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
