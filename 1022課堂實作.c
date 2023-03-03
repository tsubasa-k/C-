// 實作一 
#include<stdio.h>
#include<stdlib.h>

int main(){
	int arr[5] = {1, 14, 5, 9, 10};
	int i;
	for(i = 0;i < 5;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
	
	
	system("pause");
	return 0;
}

// 實作二 
#include<stdio.h>
#include<stdlib.h>

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

// 實作三
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	srand(time(NULL));
	int tem;
	int arr[5] = {};
	int i;
	double avg = 0, sum = 0;
	for(i = 0;i < 5;i++){
		tem = (rand()%100) + 1;
		arr[i] = tem;
		printf("%d ",arr[i]);
	}
	printf("\n"); 
	
	for(i = 0 ;i < 5;i++){
		sum+=arr[i];
	}
	avg = sum/5;
	printf("The average of the sum of arr is: %.2lf\n",avg);
	
	system("pause");
	return 0;
} 

// 實作四
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	srand(time(NULL));
	int tem;
	int arr[5] = {};
	int i;
	double avg = 0, sum = 0;
	for(i = 0;i < 5;i++){
		tem = (rand()%100) + 1;
		arr[i] = tem;
		printf("%d ",arr[i]);
	}
	printf("\n"); 
	
	int min = arr[0], max = arr[0]; 
	int index1, index2;
	
	for(i = 0 ;i < 5;i++){
		if(arr[i]<min){
			min = arr[i];
			index1 = i+1;
		}
		if(arr[i]>max){
			max = arr[i];
			index2 = i+1;
		}
	}
	
	for(i = 0 ;i < 5;i++){
		sum+=arr[i];
	}
	avg = sum/5;
	printf("The average of the sum of arr is: %.2lf\n",avg);
	printf("The min of the of arr is: %d\n",min);
	printf("The max of the of arr is: %d\n",max);
	
	system("pause");
	return 0;
} 

// 實作五
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	srand(time(NULL));
	
	int arr[10] = {0};
	int i,num,num2;
	printf("A: ");
	for(i = 9;i >= 0;i--){
		num = rand()%10;
		arr[9-i] = num;
		if(i==0)
			printf("%d",num);
		else
			printf("%-3dx^%d  ",num , i);
		if(i!= 0)
			printf("+");
	}
	
	printf("\nB: ");
	for(i = 9;i >= 0;i--){
		num2 = rand()%10;
		arr[9-i] += num2;
		if(i==0)
			printf("%d",num2);
		else
			printf("%-3dx^%d  ",num2 , i);
		if(i!= 0)
			printf("+");
	}
	
	printf("\nC: ");
	for(i = 9;i >= 0;i--){
		if(i==0)
			printf("%d",arr[9-i]);
		else
			printf("%-3dx^%d  ",arr[9-i] , i);
		if(i!= 0)
			printf("+");
	}
	
	
	
	system("pause");
	return 0;
}

// 實作六
#include<stdio.h>
#include<stdlib.h>

int main(){
	int arr[2][3] = {{0, 1, 2}, {3, 4, 5}};
	
	int row = 0, col = 0;
	int tem = 0;
	int i, j;
	printf("交換前:\n");
	for(i = 0;i < 2;i++){
		for(j = 0;j < 3;j++){
			printf("[%d]",arr[i][j]);
		}
		printf("\n");
	}
	printf("交換後:\n");
	for(i = 0;i < 2;i++){
		tem = arr[i][0];
		arr[i][0] = arr[i][2];
		arr[i][2] = tem;
	}
	for(i = 0;i < 2;i++){
		for(j = 0;j < 3;j++){
			printf("[%d]",arr[i][j]);
		}
		printf("\n");
	}
	
	
	system("pause");
	return 0;
} 
