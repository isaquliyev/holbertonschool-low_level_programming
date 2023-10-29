/**
 * root_finder - finds the root using compharison
 * @root: candidate for real root
 * @n: given number
 * Return: root
 */
int root_finder(int root, int n)
{
	if (root * root == n)
		return (root);
	else if (root == n)
		return (-1);
	root_finder(root + 1, n);
}
/**
 * _sqrt_recursion - finds root of given number using root_finder
 * @n: given number
 * Return: valid root if exists, otherwise -1
 */
int _sqrt_recursion(int n)
{
	if (n <= 0)
		return (-1);
	return (root_finder(1, n));
}
