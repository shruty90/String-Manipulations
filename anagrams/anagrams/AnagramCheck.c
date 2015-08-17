/* Author Shruty Janakiraman
This program checks if two strings are anagrams or not in C
includes the algorithm for sorting*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>


void sort(int *,int);
int *pt=NULL;
int *pt1 = NULL;
int check(int*, int*, int);
//to get the ascii value of each character in a string
// assumption is that there are no blank spaces in the string and only characters are present
//main idea is to sort the two strings in ascending order and then compare the sorted strings
void main()
{
	char ex1[10] = "abcd";
	char ex2[10] = "dacbe";
	int val = 0;
	int len = 0;
	int len2 = 0;
	char ch;
	len = strlen(ex1);
	
	pt = (int*)malloc((len-1)* sizeof(int));
	int i = 0;
	for (i = 0; i < len; i++)
	{
		ch = ex1[i] - 'a';
		pt[i] = ch;
		//printf("\n %d", pt[i]);
	}	
	len2 = strlen(ex2);
	
	pt1 = (int*)malloc((len2- 1)* sizeof(int));
	int j= 0;
	for (j = 0; j < len2; j++)
	{
		ch = ex2[j] - 'a';
		pt1[j] = ch;	
		
	}

	sort(pt,len);
	sort(pt1,len2);

	//check if the strings are equal
	if (len != len2)
		printf("not anagrams");

	else
	{
		val = check(pt, pt1, len);
		if (val == 0)
			printf("they are anagrams \n");
		else 
			printf("they are not anagrams \n");
	}

	_getch();
	free(pt1);
	free(pt);
}

void sort(int *p,int l)
{
	int small;
	int j = 0;
	int i = 0;
	int temp = 0;
	int ind = 0;
	for (j = 0; j < l; j++)
	{
		small = p[j];
		//end of this loop gives the smallest element
		for (i = j + 1; i < l; i++)
		{
			if (small > p[i])
			{
				small = p[i];
			    ind = i;
				temp = p[j];
				p[j] = small;
				p[ind] = temp;
		    }
		}
	}

}

int check(int* p1, int* p2,int l)
{
	int h = 0;
	int flag = 0;
	for (h = 0; h < l; h++)
	{
		if (p1[h] == p2[h])
			flag++;		
	}
	if (flag == l )
		return 0;
	else
		return -1;
}


