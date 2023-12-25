#include<stdio.h>

/*
Q.1 Write a program to add, subtract, and multiply two 2D arrays of the same size.

*/

void main(){
	int row,col;

	
	printf("Enter row size :");
	scanf("%d",&row);
	printf("Enter column size :");
	scanf("%d",&col);
	
		int a[row][col],b[row][col],c[row][col];
		int i,j;
		
		printf("Enter value of A eliment\n");	
	for(i=0; i<row; i++){
		for(j=0; j<col;j++){
		
		printf("enter a[%d][%d]: ",i,j);
		scanf("%d",&a[i][j]);
	}
		
	}
	
	printf("Enter value of b eliment\n");	
	for(i=0; i<row; i++){
		for(j=0; j<col; j++){
		
		printf("enter b[%d]: ",i,j);
		scanf("%d",&b[i][j]);
	}
	}
	
	
		printf("Addtion eliment is\n");
	for(i=0; i<row;i++){
		for(j=0;j<col;j++){
			
		c[i][j]=a[i][j]+b[i][j];
		printf("%d ",c[i][j]);
	}
	printf("\n");
}
	
	
		printf("subtrect eliment is\n");
	for(i=0; i<row;i++){
		for(j=0;j<col;j++){
			
		c[i][j]=a[i][j]-b[i][j];
		printf("%d ",c[i][j]);
	}
	printf("\n");
}
	
		
		printf("multipication eliment is\n");
	for(i=0; i<row;i++){
		for(j=0;j<col;j++){
			
		c[i][j]=a[i][j]*b[i][j];
		printf("%d ",c[i][j]);
	}
	printf("\n");
}

	
}
