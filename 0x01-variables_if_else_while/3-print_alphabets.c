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
for (ch = 'a'; ch <= 'z' ; ch++)
{
putchar(ch);
}
for (aa = 'A'; aa <= 'Z' ; aa++)
{
putchar(aa);
}
putchar('\n');
return (0);

}
