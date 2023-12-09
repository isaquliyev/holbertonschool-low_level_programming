/**
 * get_endianness - check endianness
 *
 * Return: 1 if little endian, 0 if big endian.
 */

int get_endianness(void)
{
	int i = 1;

	if (*(char *)&i == 1)
	{
		return (1);
	}
	return (0);
}
