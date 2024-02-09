/**
 * get_endianness - little or big
 * Return: void
 */
int get_endianness(void)
{
	unsigned int value = 0x01020304;
	unsigned char *bytePtr = (unsigned char *)&value;

	if (*bytePtr == 1)
		return (1);
	else
		return (0);
}
