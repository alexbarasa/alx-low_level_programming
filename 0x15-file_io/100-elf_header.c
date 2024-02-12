#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdint.h>
#include <elf.h>
#define BUF_SIZE 64
/**
 * print_error_and_exit - Print error message and exit with given code
 * @code: Exit code
 * @message: Error message
 */
void print_error_and_exit(int code, const char *message)
{
	fprintf(stderr, "%s\n", message);
	exit(code);
}
/**
 * print_elf_header_info - Print ELF header information
 * @header: Pointer to ELF header structure
 */
void print_elf_header_info(Elf64_Ehdr *header)
{
	printf("  Magic:   ");
	for (int i = 0; i < EI_NIDENT; i++)
		printf(" %02x", header->e_ident[i]);
	printf("\n");
	printf("Class: %s\n", header->e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64" : "ELF32");
	printf("Data: %s\n", header->e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "2's complement, big endian");
	printf("Version: %d (current)\n", header->e_ident[EI_VERSION]);
	printf("OS/ABI: %d\n", header->e_ident[EI_OSABI]);
	printf("ABI Version: %d\n", header->e_ident[EI_ABIVERSION]);
	printf("  Type:                              ");
	switch (header->e_type)
	{
		case ET_NONE:
			printf("NONE (No file type)\n");
			break;
		case ET_REL:
			printf("REL (Relocatable file)\n");
			break;
		case ET_EXEC:
			printf("EXEC (Executable file)\n");
			break;
		case ET_DYN:
			printf("DYN (Shared object file)\n");
			break;
		case ET_CORE:
			printf("CORE (Core file)\n");
			break;
		default:
			printf("<unknown: %x>\n", header->e_type);
			break;
	}
	printf("Entry point address:  0x%llx\n", (unsigned long long)header->e_entry);
}
/**
 * main - Entry point of the program
 * @argc: Number of arguments
 * @argv: Array of argument strings
 *
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
		print_error_and_exit(98, "Usage: elf_header elf_filename");
	int fd = open(argv[1], O_RDONLY);

	if (fd == -1)
		print_error_and_exit(98, "Error: Cannot open file");
	Elf64_Ehdr header;

	if (read(fd, &header, sizeof(header)) != sizeof(header))
		print_error_and_exit(98, "Error: Cannot read ELF header");
	if (header.e_ident[EI_MAG0] != ELFMAG0 ||
			header.e_ident[EI_MAG1] != ELFMAG1 ||
			header.e_ident[EI_MAG2] != ELFMAG2 ||
			header.e_ident[EI_MAG3] != ELFMAG3)
		print_error_and_exit(98, "Error: Not an ELF file");
	print_elf_header_info(&header);
	close(fd);
	return (0);
}
