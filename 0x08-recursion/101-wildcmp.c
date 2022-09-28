#include "main.h"

/**
*  * test - tests if wildcard is a proper match
*   * @s5: string to compare
*    * @s6: wildcard match to compare
*     * @t5: first spot that was checked
*      * @t6: first spot in wildcard comparison
*       *
*        * Return: spot that matches or NULL
*/
char *test(char *s5, char *s6, char *t5, char *t6)
{
		if (s6 == '' || (*s5 == '\0' && *s6 == '\0'))
		return (t5);
		else if (*s5 != *s6)
		return (wildcard(s5, t6));
		else
		return (test(s5 + 1, s6 + 1, t5, t6));
}
/**
*  * wildcard - checks for the wildcards
*   * @s3: string to compare to
*    * @s4: string to check
*     *
*      * Return: pointer to spot in s3 that matches s4
*/
char *wildcard(char *s3, char *s4)
{
		if (*s3 != *s4)
	{
		if (*s3 == '\0')
		return (0);
		return (wildcard(s3 + 1, s4));
									}
		return (test(s3 + 1, s4 + 1, s3, s4));
}
