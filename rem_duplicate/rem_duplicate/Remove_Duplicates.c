/* Author Shruty Janakiraman
A simple program to remove duplicates from a given string*/

#include <stdio.h>
#include<conio.h>
#include<string.h>

void shift(int pos, int length);
char ex[100];
void main()
{
	char buff;
	printf("enter the string :\n ");
	fgets(ex, 100, stdin);
	printf_s("\n %s", ex);
	int len = 0;
	len = strlen(ex);
	int i = 0;
	int j = 0;
	while (ex[i] != NULL)
	{
		buff = ex[i];
		for (j = i + 1; j < len ; j++)
		{
			if (buff == ex[j])
			{
				shift(j, len);
				len = len - 1;
				
			}
		}
		i++;

	}
	printf("\n %s", ex);
	_getch();
}
void shift(int pos, int l)
{
	int j = pos;
	for (j = pos; j < l; j++)
	{
		ex[j] = ex[j + 1];
		continue;
	}
	
}
