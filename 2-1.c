#include <stdio.h>
#include <iostream>


unsigned int stringLength(char *first)
{
	unsigned int counter = 0;

	for (unsigned int i = 0; first[i] != '\0'; ++i)
	{
		++counter;
	}
	return counter;
}


int main()
{

	char text[6] = "hello";
	unsigned int count = stringLength(text);

	printf("Count %d", count);
	printf("\n");

	system("pause");  // just to pause the consol, included in iostream
	return 0;
}