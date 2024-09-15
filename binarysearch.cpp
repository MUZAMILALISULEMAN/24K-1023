#include<stdio.h>
#include<math.h>

int main(){

int arr[5] = {1,25,34,35,76};
int s = 0; int e = (sizeof(arr)/4)-1;
int mid;
int key;

printf("Enter key: ");
scanf("%d",&key);

bool a =  false;
while(s<=e){
	mid = (s+e)/2;
	if(arr[mid] == key){	
		a = true;
		break;
	}
	else if(key < arr[mid]){
		e = mid -1;
	
	}
	else if(key > arr[mid]){
		s = mid+1;
	}
}

if(a){
	printf("found");
}else{
	printf("not found");
}


	return 0 ;
}
