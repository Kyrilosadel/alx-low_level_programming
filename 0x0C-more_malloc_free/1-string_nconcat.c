#include <stdlib.h>
#include "main.h"

/**

*string_nconcat - concatenates n bytes of a string to another string

@str1: string to append to

@str2: string to concatenate from

@n: number of bytes from str2 to concatenate to str1

Return: pointer to the resulting string
*/
char *string_nconcat(char *str1, char *str2, unsigned int n)
{
char *result;
unsigned int i = 0, j = 0, len1 = 0, len2 = 0;

while (str1 && str1[len1])
len1++;
while (str2 && str2[len2])
len2++;

if (n < len2)
result = malloc(sizeof(char) * (len1 + n + 1));
else
result = malloc(sizeof(char) * (len1 + len2 + 1));

if (!result)
return (NULL);

while (i < len1)
{
result[i] = str1[i];
i++;
}

while (n < len2 && i < (len1 + n))
result[i++] = str2[j++];

while (n >= len2 && i < (len1 + len2))
result[i++] = str2[j++];

result[i] = '\0';

return (result);
}
