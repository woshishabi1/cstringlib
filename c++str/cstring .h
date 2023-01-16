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
	//bool isempty=true;//弃用！ 
	void begin(cstring start)
{
		start.data=NULL;//free空指针是安全的 
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
		if(setdata_lim(st,0,len(st)-1)==true){return true;}else{return false;}//害人不浅 
	}
	bool cpstr(cstring tarstr){
		if(setdata(tarstr.data)==true){
			return true;
		}
		else{return false;}
	}
	void add_str(cstring str){
		olddata=data;//备份 
		//if(olddata==NULL){printf("fuck!"); }
		data=(char*)malloc(length-1+str.length);
		for(int i=0;i<length-1;i++){
			*(data+i)=*(olddata+i);//搬家 
		}
					int should=length-1;//调试用 
		for(int i=length-1;i<length+str.length-2;i++){

			*(data+i)=*(str.data+i-should);//嫁接 
		}
		*(data+length+str.length-2)='\0';
		//printf("%d",length-1+str.length+500);//debug 
		length=length+str.length-1;
		free(olddata);//free是个十分甚至九分好的习惯:) 
		
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
