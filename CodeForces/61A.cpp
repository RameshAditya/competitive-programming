#include<stdio.h>

int main(){
	char A[101],B[101];
	int aptr=0,bptr=0;
	scanf("%s %s",A,B);
	int i=0;
	char C[101];
	int cptr=0;
	for(;A[i]!='\0';i++)
		C[cptr++]=(A[aptr++]-'0')^(B[bptr++]-'0')+'0';
	for(i=0;i<cptr;i++)printf("%c",C[i]);
	printf("\n");
}
