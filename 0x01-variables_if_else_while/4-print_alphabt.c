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
int bb;
for (ch = 'a'; ch < 'e' ; ch++)
{
putchar(ch);
}
for (aa = 'f'; aa < 'q' ; aa++)
{
putchar(aa);
}
for (bb = 'r'; bb <= 'z' ; bb++)
{
putchar(bb);
}
putchar('\n');
return (0);

}
