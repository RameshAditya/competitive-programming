#include <cstdio>
using namespace std;
int main()
{
 int n;
 scanf("%d",&n);
 int count =0;
 while(true)
 {
  int x = n;
  n=0;
  while(x>0)
  {
   n+= (x%10)*(x%10);  
   x=x/10;
  }
  count++;
  if(n==2||n==4)
               { printf("-1\n");break;}
  else if(n==1)
               {printf("%d\n",count);
                break;}
}
        
return 0;
}
