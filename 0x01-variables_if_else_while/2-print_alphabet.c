#include	<stdio.h>
/**
 * main	-	prints	the	alphabet	in	lower	case.
 *
 * Return:	0	if	sucessful
 */
int	main(void)
{
	char	c	=	'a';

	while	(c	<=	'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return	(0);
}
