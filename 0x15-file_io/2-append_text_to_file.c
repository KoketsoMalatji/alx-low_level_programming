#include "main.h"

/**
* append_text_to_file - Function that appends text at the end of a file
*@filename: name of the file
*@text_content: text to write in the file
*Return: 1 on success or -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int file, retval, count;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_RDWR | O_APPEND);
	if (file == -1)
		return (-1);

	if (text_content == NULL)
		return (1);

	while (text_content[count] != '\0')
		count++;

	retval = write(file, text_content, count);

	if (retval == -1)
		return (-1);

	return (1);
}
