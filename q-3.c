#include<stdio.h>

/*
Q.3 Write a program to find the average of all elements in a 2D array.

*/

void main(){
	int row,col;

	
	printf("Enter row size :");
	scanf("%d",&row);
	printf("Enter column size :");
	scanf("%d",&col);
	
		int a[row][col];
		int i,j, sum=0,avg;
		
		printf("Enter value of A eliment\n");	
	for(i=0; i<row; i++){
		for(j=0; j<col;j++){
		
		printf("enter a[%d][%d]: ",i,j);
		scanf("%d",&a[i][j]);
	}
		
	}
	
		printf("sum of all eliment is :");
	for(i=0; i<row;i++){
		for(j=0;j<col;j++){
			
		sum+=a[i][j];
		avg=sum/5;
	
	}
	printf("\n");
}
	
		printf("%d ",avg);
	
}
