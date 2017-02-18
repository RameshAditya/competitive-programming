#include<stdio.h>
#include<string.h>
int main(){
	int ans,temp,back,front;
	ans=0;
	front=0;
	char buf[2005];
	scanf("%s",buf);
	int t=0;
	while(buf[0]!='-'){
		ans=0;
		front=0;
		int i;
		for(i=0;i<strlen(buf);i++){
		if(buf[i]=='{')ans++;
		else{
			ans--;
			if(ans<0){ans=1;front++;}
		}
		}
		printf("%d. %d\n",t+1,front+ans/2);
		scanf("%s",buf);
		t++;
}

}
