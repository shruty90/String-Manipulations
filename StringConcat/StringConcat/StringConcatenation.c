/* Author Shruty Janakiraman
A basic introduction to strings in C
The program concatenates two strings using a built in function strcat*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void main()
{
	char str1[20] = "apple";
	char str2[20];
	char str3[40];
	printf(" enter the string");
	fgets(str2, 20, stdin);
	
	strcpy(str3,"apple");
	strcat(str3, str1);
	printf("%s", str3);
	_getch();


}