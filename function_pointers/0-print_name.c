/**
 * print_name - prints name using given function
 * @name: name
 * @f: function which prints string
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
