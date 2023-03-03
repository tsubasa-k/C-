#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	int arr[5] = {74, 48, 30, 17, 62};
	int max = arr[0];
	int i;
	for(i = 1;i < 5;i++){
		if(arr[i]>max)
			max = arr[i];
	}
	printf("The max of arr is: %d\n",max); 
	
	system("pause");
	return 0;
}
