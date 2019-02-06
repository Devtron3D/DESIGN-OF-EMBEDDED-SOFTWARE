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

char *locate(char *haystack, char *needle)
{
	unsigned int h_size = stringLength(haystack);
	unsigned int n_size = stringLength(needle);
	unsigned int found = 0; // found number of chars in haystack matching the needle
	char *ptr = NULL;  // holds the position of where the needle starts

	for (unsigned int i = 0; i < h_size; ++i)
	{
		if (haystack[i] == needle[found])
		{
			++found;
			if (found == 1)
			{
				ptr = &haystack[i];
			}
			if (found == n_size)
			{
				// stop the loop
				i = h_size;
			}
		}
		else
		{
			found = 0;  // did not find another match, reset found.
			ptr = NULL;	// reset pointer to not found.
		}
	}

	return ptr;
}


int main()
{

	char text[12] = "hello world";
	char find[4] = "wor";
	unsigned int count = stringLength(text);

	printf("Count %d", count);
	printf("\n");
	printf("Sizeof(char) %d", sizeof(char));
	printf("\n");
	printf("text ptr: %d", &text);
	printf("\n");
	printf("needle ptr %d", locate(text, find));
	printf("\n");

	system("pause");  // just to pause the consol, included in iostream
	return 0;
}