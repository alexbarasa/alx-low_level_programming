/**
 * key_index - Calculates the index of a key in the hash table array
 * @key: The key
 * @size: The size of the array of the hash table
 *
 * Return: The index at which the key/value pair should be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value;

	hash_value = hash_djb2(key);
	/* Using modulo to ensure the index is within the bounds of the array */
	return (hash_value % size);
}
