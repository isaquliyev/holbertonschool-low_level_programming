/**
 * _pow_recursion - finds power of x raised y
 * @x: value
 * @y: power
 * Return: power of x raised y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (x * (_pow_recursion(x, y - 1)));
}
