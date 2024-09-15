#include<stdio.h>
#include<math.h>


int main(){
	int n,factors = 2;
	int facts = 0;
	printf("ENTER NUMBER TO CHECK :  ");
	scanf("%d",&n);
	 
	 for(int i = 2;i<n/2;i++){
	   if(n%i == 0){
	   	factors += 1;
	   	if(factors > 2){
	   		break;
		   }
	   }	
	 }
	 if (factors > 2){
	 		printf("NUMBER IS OPTIMUS");
		 }
		 else{
		 	printf("%d IS PRIME NUMBER",n);
		 }
	
	
	
	
}
