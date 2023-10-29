/**
 * prime_checker - check the number prime or not
 * @divider: divider for given number
 * @n:given number
 * Return: 1 if the number is prime, otherwise 0
 */
int prime_checker(int divider, int n)
{
	if (n != divider && n % divider == 0)
		return (0);
	else if (divider == n || divider == -1 * n)
		return (1);
	return (prime_checker(divider + 1, n));
}
/**
 * is_prime_number - sends number to prime_checker
 * @n: given number
 * Return: returns same valuse as prime checker
 */
int is_prime_number(int n)
{
	if (n == 0 || n == 1 || n == -1)
		return (0);
	return (prime_checker(2, n));
}
