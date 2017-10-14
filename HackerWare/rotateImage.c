/*You are given an n x n 2D matrix representing an image.
Rotate the image by 90 degrees (clockwise).
Note:
You have to rotate the image in-place, which means you have to modify the input 2D matrix directly. DO NOT allocate another 2D matrix and do the rotation.

Example 1:
Given input matrix = 
[
  [1,2,3],
  [4,5,6],
  [7,8,9]
],
rotate the input matrix in-place such that it becomes:
[
  [7,4,1],
  [8,5,2],
  [9,6,3]
]
Example 2:
Given input matrix =
[
  [ 5, 1, 9,11],
  [ 2, 4, 8,10],
  [13, 3, 6, 7],
  [15,14,12,16]
], 
rotate the input matrix in-place such that it becomes:
[
  [15,13, 2, 5],
  [14, 3, 4, 1],
  [12, 6, 8, 9],
  [16, 7,10,11]
]
*/

#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

/*
* Complete the function below.
*/
void rotateImage(int matrix[3][3], int numberOfLines, int numberColumns)
{
	int temp; 
	printf("\n");
	//transpose
	for (int i = 1; i < numberOfLines ; i++)
	{
		for (int j = 0; j < i; j++)
		{
			temp = matrix[j][i];
			matrix[j][i] = matrix[i][j];
			matrix[i][j] = temp;
		}
	}
	//swap
	for (int i = 0; i < numberOfLines; i++)
	{
		temp= matrix[i][numberOfLines-1];
		matrix[i][numberOfLines - 1] = matrix[i][0];
		matrix[i][0] = temp;
	}

	//print
	int row, columns;
	printf("\n");

	for (int row = 0; row<numberOfLines; row++)
	{
		for (int columns = 0; columns<numberColumns; columns++)
		{
			printf("%d     ", matrix[row][columns]);
		}
		printf("\n");
	}
}

int main() {
	int numberOfLines = 3; 
	int numberColumns = 3; 
	int matrix[3][3] = {{1,2,3}, {4, 5, 6}, {7, 8,9}};

	int row, columns;
	for (int row = 0; row<numberOfLines; row++)
	{
		for (int columns = 0; columns<numberColumns; columns++)
		{
			printf("%d     ", matrix[row][columns]);
		}
		printf("\n");
	}

	rotateImage(matrix, numberOfLines, numberColumns);
	return 0;
}