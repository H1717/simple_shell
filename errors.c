<<<<<<< HEAD
include "shell.h"

/**
  * _eputs - prints an input string
  * @str: the string to be printed
  *
  * Return: Nothing
  */
=======
#include "shell.h"

/**
 *_eputs - prints an input string
 * @str: the string to be printed
 *
 * Return: Nothing
 */
>>>>>>> a9168a931ac66252de6b20b0cd3b966bf095f1ba
void _eputs(char *str)
{
	int i = 0;

	if (!str)
		return;
	while (str[i] != '\0')
	{
		_eputchar(str[i]);
		i++;
	}
}

/**
<<<<<<< HEAD
  * _eputchar - writes the character c to stderr
  * @c: the character to print
  *
  * Return: on success 1.
  * On error, -1 is returned, and errno is set appropriately.
  */
=======
 * _eputchar - writes the character c to stderr
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
>>>>>>> a9168a931ac66252de6b20b0cd3b966bf095f1ba
int _eputchar(char c)
{
	static int i;
	static char buf[WRITE_BUF_SIZE];

	if (c == BUF_FLUSH || i >= WRITE_BUF_SIZE)
	{
		write(2, buf, i);
		i = 0;
	}
	if (c != BUF_FLUSH)
		buf[i++] = c;
	return (1);
}
<<<<<<< HEAD
=======

>>>>>>> a9168a931ac66252de6b20b0cd3b966bf095f1ba
/**
 * _putfd - writes the character c to given fd
 * @c: The character to print
 * @fd: The filedescriptor to write to
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putfd(char c, int fd)
{
	static int i;
	static char buf[WRITE_BUF_SIZE];

	if (c == BUF_FLUSH || i >= WRITE_BUF_SIZE)
	{
<<<<<<< HEAD
		write(fd, buf, i)
			i = 0;
=======
		write(fd, buf, i);
		i = 0;
>>>>>>> a9168a931ac66252de6b20b0cd3b966bf095f1ba
	}
	if (c != BUF_FLUSH)
		buf[i++] = c;
	return (1);
}

/**
<<<<<<< HEAD
  * _putsfd - prints an input string
  * @str: the string to be printed
  * @fd: the file descriptor to write to
  *
  * Return: the number of chars put
  */
=======
 *_putsfd - prints an input string
 * @str: the string to be printed
 * @fd: the filedescriptor to write to
 *
 * Return: the number of chars put
 */
>>>>>>> a9168a931ac66252de6b20b0cd3b966bf095f1ba
int _putsfd(char *str, int fd)
{
	int i = 0;

	if (!str)
		return (0);
	while (*str)
	{
		i += _putfd(*str++, fd);
	}
	return (i);
}
