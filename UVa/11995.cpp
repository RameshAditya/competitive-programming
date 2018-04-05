//Adi confusion
#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	while(scanf("%d",&n) == 1){
		
		stack<int> st;
		queue<int> qu;
		priority_queue<int> pq;
		
		int iss=1;
		int isq=1;
		int isp=1;
		
		int type, val;
		while(n--){
			scanf("%d %d",&type, &val);
			if(type==1){
				st.push(val);
				qu.push(val);
				pq.push(val);	
			}
			else if(type==2){
				if(st.top()!=val||st.size()==0)iss=0;
				else if(st.top()==val) st.pop();
				
				if(qu.front()!=val||qu.size()==0)isq=0;
				else if(qu.front()==val)qu.pop();
				
				if(pq.top()!=val||pq.size()==0)isp=0;	
				else if(pq.top()==val)pq.pop();
			}
		}
		if(iss+isq+isp>1)printf("not sure\n");
		else if(iss+isq+isp==0)printf("impossible\n");
		else if(iss==1)printf("stack\n");
		else if(isq==1)printf("queue\n");
		else if(isp==1)printf("priority queue\n");
	}	
}
