#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define min(a,b) (a<b)?a:b
#define max(a,b) (a>b)?a:b
long int gcd(int r,int c){
	while(c)
		gcd(c,r%c);
	return r;
}

long int create(int r,int c,char A[100], int size){
	char *s;
	s=(char*)malloc(sizeof(char)*(size));
	int l=0;
	int dx=1;
	int dy=1;
	int x=0;
	int y=0;
	int ct=2;
	int a;
	while(ct<(r+c)/gcd(r,c)){
		printf("aa");
		if(dx==1 && dy==1){
			a=min(c-x,r-y);
            x+=a;
            y+=a;}
        else if(dx==1 && dy==-1)
            {a=min(c-x,y);
            x+=(a);
            y-=a;}
        else if(dx==-1 && dy==1)
            {a=min(x,r-y);
            x-=a;
            y+=abs(a);}
        else if(dx==-1 && dy==-1)
            {a=min(x,y);
            x-=a;
            y-=a;
			}
		if(x>=c && y<r)
          {  s[l++]='R';
            ct+=1;
            dx=-1*dx; }
        else if(y>=r && x<c)
            {s[l++]='T';
            ct+=1;
            dy*=-1;}
        else if(x<=0 && y<r)
            {s[l++]='L';
            ct+=1;
            dx*=-1;}
        else if(y<=0 && x<c)
            {s[l++]='D';
            ct+=1;
            dy*=-1;}
    }
    int i,flag=0;
    for(i=0;i<l;i++){
    	if(s[i]!=A[i]){flag=1; break;}
	}
    if(flag){return 0;
	}
    else return l+1;
            
}

int main(){
	int t,n,len,i,j,lens;
	long int ans=0;
	char A[100];
	scanf("%d",&t);
	while(t--){
		scanf("%d %d",&n,&lens);
		scanf("%s",A);
		//for(i=0;i<n;i++){
		//	scanf("%c",&A[i]);
		//}
		ans=0;
		for(i=1;i<=n;i++){
			printf("Entering i");
			for(j=1;j<=n;j++){
				printf("Entering j");
				ans+=create(i,j,A,lens);
			}
		}
	printf("%ld",ans);
	}
	return 0;
}
