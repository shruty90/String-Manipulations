/* author Shruty Janakiraman
A simple program to reverse a string in C with no built in function
illustrates the use of malloc and free, function call and return */
#include<stdio.h>
#include<conio.h>
#include<string.h>
char *reverse(const char*);
void main()
{
	const char *str = "Shruty abc";
	char *rev = NULL;
	rev = reverse(str);
	printf("%s", rev);
	free(rev);
	_getch();
}

char *reverse(const char *str)
{
	char *revstr = NULL;
	int len = 0;
	len = strlen(str);
	revstr = (char*)malloc(len+1*sizeof(char));

	if (revstr == NULL)
	{
		printf("invalid memory allocation");
		return(-1); //error
	}
	else
	{
		revstr[len] = '\0';
		int j = len - 1;
		for (int i = 0; i < len; i++)
		{
			revstr[j] = str[i];
			j--;
		}

		return(revstr);
	}
}