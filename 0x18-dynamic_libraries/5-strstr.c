#include "holberton.h"
#define NULL 0

/**
 * _strstr - search string in string
 *
 * @haystack: input pointer
 *
 * @needle: input search pointer
 *
 * Return: s
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int h_count = 0, n_count = 0, count = 0;

	while (haystack[h_count] != '\0' && needle[n_count] != '\0')
	{
		if (haystack[h_count] != needle[n_count])
		{
			h_count++;
			n_count = 0;
			if (count > 0)
				h_count -= count;
			count = 0;
		}
		else
		{
			h_count++;
			n_count++;
			count++;
			if (needle[n_count] == '\0')
				return (&haystack[h_count - count]);
		}
	}
	if (needle[0] == '\0')
		return (haystack);
	return (NULL);
}
