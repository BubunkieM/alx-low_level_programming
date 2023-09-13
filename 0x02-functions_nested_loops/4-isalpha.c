#include "main.h"
/**
 * _isalpha - checking alphabets order
 *
 * @c: alphabet to be checked for
 *
 * Return:(1); otherwise (0)
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
