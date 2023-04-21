#include <stdlib.h>
/**
 * strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings (words) or NULL
 */
char **strtow(char *str)
{
        char **words, *word;
        int i, j, k, len, count = 0;

        if (str == NULL || *str == '\0')
                return (NULL);

        for (i = 0; str[i] != '\0'; i++)
                if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
                        count++;

        words = malloc(sizeof(char *) * (count + 1));
        if (words == NULL)
                return (NULL);

        for (i = 0, j = 0; j < count; i++)
                if (str[i] != ' ')
                {
                        len = 0;
                        for (k = i; str[k] != '\0' && str[k] != ' '; k++)
                                len++;
                        word = malloc(sizeof(char) * (len + 1));
                        if (word == NULL)
                        {
                                while (j--)
                                        free(words[j]);
                                free(words);
                                return (NULL);
                        }
                        for (k = 0; k < len; k++)
                                word[k] = str[i + k];
                        word[k] = '\0';
                        words[j++] = word;
                        i += len;
                }

        words[j] = NULL;
        return (words);
}

