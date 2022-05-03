#include "main.h"

/**
* create_file - Function that creates a file
*@filename: name of the file to create
*@text_content: text to write in the file
*Return: 1 in succes, -1 on failure
*/
int create_file(const char *filename, char *text_content)
{
	int file, retval, count = 0;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (file == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[count] != '\0')
		{
			count++;
		}
		retval = write(file, text_content, count);
	}

	if (retval == -1 || retval != count)
		return (-1);

	return (1);
}
