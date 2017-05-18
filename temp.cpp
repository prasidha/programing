#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,temp,n[10];
	printf("enter 10 numbers\n");
	for(i=0;i<10;i++){
		scanf("%d",&n[i]);
	}
	for(i=0;i<10;i++){
	for(j=0;j<10;j++)
	if (n[i]>n[j]){
		temp=n[i];
		n[i]=n[j];
		n[j]=temp;
	}
	printf("greatest number is %d\n",n[10]);
	printf("lowest number is %d\n",n[0]);
	
