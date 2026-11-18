#include "main.h"

int is_separator(char c)
{
	char seps[] = " \t\n,;.!?\"(){}";
	int i;

	for (i = 0; seps[i] != '\0'; i++)
	{
		if (c == seps[i])
			return (1);
	}

	return (0);
}

char *cap_string(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z' &&
		    (i == 0 || is_separator(str[i - 1])))
			str[i] = str[i] - 32;
		i++;
	}

	return (str);
}
