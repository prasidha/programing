#include<stdio.h>
int main(){
	int i,j,sp;
	for(i=1;i<=5;i++){
		for(sp=5-i;sp>=1;sp--)
		{printf(" ");
		}
		for(j=1;j<=i;j++)
		{printf("* ");
		}
		printf("\n");
	}
}
