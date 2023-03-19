#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int ch;
int aa;

for (ch = '0'; ch <= '9'; ch++)
{
putchar(ch);
}
for (aa = 'a'; aa <= 'f'; aa++)
{
putchar(aa);    
}
putchar('\n');
return (0);
}
