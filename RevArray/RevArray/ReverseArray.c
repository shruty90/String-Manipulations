/* Author shruty janakiraman
A simple program to illustrate recursive function 
the following program reverses an int array */
#include <stdio.h>
#include <stdlib.h>
void rev(int[]);
int arr[5] = { 2, 5,3, 8, 6 };
int *start = &arr;
int *end = &arr[4];
int temp;

void main()
{
	if (start < end)
	{
		rev(arr);		
	}
	for (int i = 0; i < 5; i++)
		printf("%d ", arr[i]);
	_getch();	    
}

void rev(int arr1[5])
{

	temp = *start;
	*start = *end;
	*end = temp;
	end--;
	start++;
	if (start<end)
	rev(arr1);
}
