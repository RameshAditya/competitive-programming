#include<stdio.h>
#include<string.h>
int main(){
	int isd=0;
	char A[101];
	scanf("%s",A);
	int i;
	int flag=1;
	if(strlen(A)>=7)
		for(i=0;i<=strlen(A)-7;i++)
			if(A[i]==A[i+1]&&A[i+1]==A[i+2]&&A[i]==A[i+3]&&A[i]==A[i+4]&&A[i]==A[i+5]&&A[i]==A[i+6])isd=1;
	if(isd==0||strlen(A)<7)printf("NO\n");
	else printf("YES\n");
	}
