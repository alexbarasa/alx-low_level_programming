#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#define BUFFER_SIZE 1024
/**
 * print_error_and_exit - Print error message and exit with given code
 * @code: Exit code
 * @message: Error message
 */
void print_error_and_exit(int code, const char *message)
{
	dprintf(STDERR_FILENO, "%s\n", message);
	exit(code);
}
/**
 * main - Entry point of the program
 * @argc: Number of arguments
 * @argv: Array of argument strings
 *
 * Return: 0 on success, 97, 98, 99, or 100 on failure
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	ssize_t bytes_read, bytes_written;
	char buffer[BUFFER_SIZE];
	mode_t permissions = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (argc != 3)
		print_error_and_exit(97, "Usage: cp file_from file_to");
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		print_error_and_exit(98, "Error: Can't read from file");
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, permissions);
	if (fd_to == -1)
		print_error_and_exit(99, "Error: Can't write to file");
	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1)
			print_error_and_exit(99, "Error: Can't write to file");
		if (bytes_written != bytes_read)
			print_error_and_exit(99, "Error: Incomplete write to file");
	}
	if (bytes_read == -1)
		print_error_and_exit(98, "Error: Can't read from file");
	if (close(fd_from) == -1)
		print_error_and_exit(100, "Error: Can't close file descriptor");
	if (close(fd_to) == -1)
		print_error_and_exit(100, "Error: Can't close file descriptor");
	return (0);
}
