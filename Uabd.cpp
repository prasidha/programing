#include<stdio.h>
#include<string.h>
int main(){
	FILE*fptr;
	char str[50]=" LRIG DOOG YREV";
	char rev[50];
	fptr=fopen("file.txt","w");
	if(fptr==NULL){
		printf("file cannot be open");
		
	}else{
	
	fputs(str,fptr);
	fclose(fptr);}
	FILE*fptr2;
	fptr2=fopen("file.txt","w");
	fputs(strrev(str),fptr2);
	fclose(fptr2);}
