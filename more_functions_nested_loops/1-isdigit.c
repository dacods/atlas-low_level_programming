#include "main.h"
#include <ctype.h>
/**
 * _isdigit
 * @c:
 * Return:
 */
int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
