#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: file to append the text to
 * @text_content: content to append into the file
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
int rd, a, b = 0;

if (!filename)
return (-1);

fd = open(filename, O_WRONLY | O_APPEND);
if (rd < 0)
return (-1);

if (text_content)
{
while (text_content[b])
b++;
a = write(rd, text_content, b);
if (a != b)
return (-1);
}

close(rd);

return (1);
}
