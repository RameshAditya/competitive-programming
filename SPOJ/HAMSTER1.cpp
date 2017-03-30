#include<stdio.h>
#include<math.h>

/*	
	Equations of projectile:
	X=u*u*sin(2a)/2g
	Y=u*u*sin(a)*sin(a)/2g
*/

int main(){
	double t,u,k1,k2;
	scanf("%lf",&t);
	while(t--){
		scanf("%lf %lf %lf",&u,&k1,&k2);
		double theta=(acos(-1)-atan(4*k1/k2))/2;
		double Y=u*u*sin(theta)*sin(theta)/20;
		double X=u*u*sin(2*theta)/10;
		printf("%.3lf %.3lf\n",theta,k1*X+k2*Y);
	}
}
