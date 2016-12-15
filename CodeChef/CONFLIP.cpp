#include<stdio.h>
#include<string.h>
int main(){
	int T;
	scanf("%d",&T);
	int A[10000];
	//printf("Hi");
	while(T--){
int G,I,N,Q;

scanf("%d",&G);
while(G--){

scanf("%d %d %d",&I,&N,&Q);
int i;
for(i=0;i<N;i++){A[i]=I;}
if(I==1){

if(N%2==0){

for(i=1;i<N;i+=2){
A[i]=2;
}
}
else{
for(i=0;i<N;i+=2){
//printf("h%d\n",i);
A[i]=2;
//printf("%dA",A[i]);
}

}
}
else{
if(N%2==0){

for(i=1;i<N;i+=2){
A[i]=1;
}
}
else{
for(i=0;i<N;i+=2){
A[i]=1;
}

}
}
int ct=0;
for(i=0;i<N;i++){
if(A[i]==Q){
ct++;
//printf("%di\n",i);
}
}
printf("%d\n",ct);
}
}
	return 1;
}
