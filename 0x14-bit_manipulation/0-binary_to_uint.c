#include "main.h"
#include <stddef.h>
/**
 * binary_to_uint - Entry Point
 * @b: const char
 * Return: 0
 */
unsigned int binary_to_uint(const char *b)
{
<<<<<<< HEAD
	unsigned int res = 0;
	int base = 1, i = 0;
=======
unsigned int val = 0;
  int i = 0;
>>>>>>> 98811b50df1a67851f10abeb70de71b53b5495c3

  if (b == NULL)
    return 0;

<<<<<<< HEAD
	while (b[i + 1])
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		i++;
	}

	while (i >= 0)
	{
		res += ((b[i] - '0') * base);
		base *= 2;
		i--;
	}

	return (res);
=======
  while (b[i] == '0' || b[i] == '1')
  {  // Found another digit.
    val <<= 1;
    val += b[i]-'0';
    i++;
  }
  return val;
>>>>>>> 98811b50df1a67851f10abeb70de71b53b5495c3
}
