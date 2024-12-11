#include "strdup.h"
#include "stdlib.h"
#include "string.h"
/**
 *
 * @brief Duplicate a string
 *
 * @return pointer to new string, or NULL if insufficient memory available
 */
char *strdup(const char *s)
{
	char *dest = malloc(strlen(s)+1);
	if (dest) {
		strcpy(dest, s);
	}
	return dest;
}