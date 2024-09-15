#include<stdio.h>
#include<math.h>

int GCD(int x,int y){

int rem = 0;
int GCD;
int a=x;//a dividend // b divisor
int b =y;

if(b >a ){
	int swap;
	swap = a;
	a = b;
	b = swap;
}
while(b!=0){
rem = a%b;
if(rem == 0){
	GCD = b;
break;
	
}
a = b;
b = rem;


}
return GCD;
}

int frobenius(int a,int b){
	if(GCD(a,b) == 1){
		int ans = (a*b)-a-b;
//		printf("UNACHIEVABLE COMBINATION BETWEEN %dL-%dL JUGS IS %d",a,b,ans);
		return ans;
	}
}





int main(){

frobenius(7,9);











	return 0 ;
}
