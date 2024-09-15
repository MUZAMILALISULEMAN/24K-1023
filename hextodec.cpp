#include<stdio.h>
#include<math.h>
int main(){
	int n_hex  = 1673;
	printf("%d",n_hex);
	int n_dec = 0,i=0,temp;
	while(n_hex!=0){
		temp = n_hex%10;
		n_hex/=10;
		n_dec += temp * pow(16,i);
		i++;
	}

printf("\n%d",n_dec);	
	
}