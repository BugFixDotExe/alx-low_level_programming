#include "main.h"

/**
 * string_nconcat - a function that concatinates two strings
 * @s1: first string
 * @s2: second string
 * @n: the first n bytes of s2
 * Return: a pointer to the new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1_len, s2_len;
	char *joined_str;

	if (s1 == NULL)
	{
		s1 = "";
		s1_len = 0;
	}
	if (s2 == NULL)
	{
		s2 = "";
		s2_len = 0;
	}

	if (s1 != NULL)
		for (s1_len = 0; *(s1 + s1_len) != '\0'; s1_len++)
			;
	if (s2 != NULL)
		for (s2_len = 0; *(s2 + s2_len) != '\0'; s2_len++)
			;
	joined_str = malloc(sizeof(char) * (s1_len + s2_len + 1));
	if (joined_str == NULL)
		return (NULL);
	if (s1_len == 0 && s2_len == 0)
	{
		*(joined_str + 0) = '\0';
	}

	if (s1_len > 0 && s2_len == 0)
	{
			for (s1_len = 0; *(s1 + s1_len) != '\0'; s1_len++)
				*(joined_str + s1_len) = *(s1 + s1_len);
			*(joined_str + s1_len) = '\0';
	}

	if (s2_len > 0 && s1_len == 0)
	{
		if (n >= s2_len)
		{
			for (s2_len = 0; *(s2 + s2_len) != '\0'; s2_len++)
				*(joined_str + s2_len) = *(s2 + s2_len);
			*(joined_str + s2_len) = '\0';
		}
		else
		{
			for (s2_len = 0; s2_len < n; s2_len++)
				*(joined_str + s2_len) = *(s2 + s2_len);
			*(joined_str + s2_len) = '\0';
		}
	}

	if (s1_len > 0 && s2_len > 0)
	{
		for (s1_len = 0; *(s1 + s1_len) != '\0'; s1_len++)
			*(joined_str + s1_len) = *(s1 + s1_len);

		if (n >= s2_len)
		{
			for (s2_len = 0; *(s2 + s2_len) != '\0'; s2_len++)
			{
				*(joined_str + s1_len) = *(s2 + s2_len);
				s1_len++;
			}
			*(joined_str + s1_len) = '\0';
		}
		else
		{
			for (s2_len = 0; s2_len < n; s2_len++)
			{
				*(joined_str + s1_len) = *(s2 + s2_len);
				s1_len++;
			}
			*(joined_str + s1_len) = '\0';
		}
	}
	return (joined_str);
}

