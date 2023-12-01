/**
 * hash_djb2 - A function to conver a string to a number
 * @str: the unique str for the hash
 *
 * Return: the value
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int x;

	hash = 5381;
	while ((x = *str++))
	{
		hash = ((hash << 5) + hash) + x; /* hash * 33 + x */
	}
	return (hash);
}
