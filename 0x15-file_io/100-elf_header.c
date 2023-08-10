#include "main.h"
/**
 * print_elf_class - prints ELf file class
 * @elf_h: pointer to elf struct
 * Return: Nothing
 */
void print_elf_class(Elf64_Ehdr *elf_h)
{
	printf("\n  Class:                           ");
	switch (elf_h->e_ident[EI_CLASS])
	{
		case ELFCLASSNONE:
			printf("None\n");
			break;
		case ELFCLASS32:
			printf("ELF32\n");
			break;
		case ELFCLASS64:
			printf("ELF64\n");
			break;
		default:
			printf("Unknown\n");
			break;
	}
}
/**
 * print_elf_data - prints ELf file data and version
 * @elf_h: pointer to elf struct
 * Return: Nothing
 */
void print_elf_data(Elf64_Ehdr *elf_h)
{
	printf("  Data:                            ");

	switch (elf_h->e_ident[EI_DATA])
	{
		case ELFDATANONE:
			printf("None\n");
			break;
		case ELFDATA2LSB:
			printf("2's complement, little endian\n");
			break;
		case ELFDATA2MSB:
			printf("2's complement, big endian\n");
			break;
		default:
			printf("Unknown\n");
			break;
	}
}
/**
 * print_elf_os_abi - prints ELf file OS/ABI
 * @elf_h: pointer to elf struct
 * Return: Nothing
 */
void print_elf_os_abi(Elf64_Ehdr *elf_h)
{
	printf("  OS/ABI:                          ");
	switch (elf_h->e_ident[EI_OSABI])
	{
		case ELFOSABI_SYSV:
			printf("UNIX - System V\n");
			break;
		case ELFOSABI_HPUX:
			printf("HP-UX\n");
			break;
		case ELFOSABI_NETBSD:
			printf("NetBSD\n");
			break;
		case ELFOSABI_LINUX:
			printf("Linux\n");
			break;
		case ELFOSABI_SOLARIS:
			printf("Solaris\n");
			break;
		case ELFOSABI_AIX:
			printf("AIX\n");
			break;
		case ELFOSABI_IRIX:
			printf("IRIX\n");
			break;
		case ELFOSABI_FREEBSD:
			printf("FreeBSD\n");
			break;
		case ELFOSABI_TRU64:
			printf("TRU64 UNIX\n");
			break;
		case ELFOSABI_MODESTO:
			printf("Novell Modesto\n");
			break;
		case ELFOSABI_OPENBSD:
			printf("OpenBSD\n");
			break;
		case ELFOSABI_ARM_AEABI:
			printf("ARM EABI\n");
			break;
		case ELFOSABI_ARM:
			printf("ARM\n");
			break;
		case ELFOSABI_STANDALONE:
			printf("Standalone (embedded) application\n");
			break;
		default:
			printf("Unknown\n");
			break; } }
/**
 * print_elf_type - prints ELf file type and ABI version
 * @elf_h: pointer to elf struct
 * Return: Nothing
 */
void print_elf_type(Elf64_Ehdr *elf_h)
{
	printf("  ABI Version: \t\t\t   %d\n", elf_h->e_ident[EI_ABIVERSION]);
	printf("  Type:                            ");
	switch (elf_h->e_type)
	{
		case ET_NONE:
			printf("No file type\n");
			break;
		case ET_REL:
			printf("Relocatable file\n");
			break;
		case ET_EXEC:
			printf("Executable file\n");
			break;
		case ET_DYN:
			printf("Shared object file\n");
			break;
		case ET_CORE:
			printf("Core file\n");
			break;
		default:
			printf("Unknown\n");
			break;
	}

}
/**
 * main - entry point
 * @argc: argument count
 * @argv: pointer to array of arguments
 * Return: EXIT_SUCCESS
 */
int main(int argc, char **argv)
{
	int fdr, fdo, i;
	Elf64_Ehdr elf_h;

	if (argc != 2)
	{
		for (i = 0; argv[0][i] != '\0'; i++)
		{}
		write(2, "Usage: ", 7);
		write(2, argv[0], i);
		write(2, " Elf_file\n", 10);
		exit(98);
	}
	fdo = open(argv[1], O_RDONLY);
	if (fdo < 0)
	{
		close(fdo);
		exit(98);
	}
	fdr = read(fdo, &elf_h, sizeof(Elf64_Ehdr));
	if (fdr < 0)
	{
		close(fdo);
		exit(98);
	}
	printf("ELF Header:\n");
	printf("  Magic:   ");
	for (i = 0; i < 16; i++)
	{
		printf(" %02x", elf_h.e_ident[i]);
	}
	print_elf_class(&elf_h);
	print_elf_data(&elf_h);
	printf("  Version:                         %d (current)\n",
			elf_h.e_ident[EI_VERSION]);
	print_elf_os_abi(&elf_h);
	print_elf_type(&elf_h);
	printf("  Entry point address:             %#lx\n", elf_h.e_entry);
	close(fdo);
	return (EXIT_SUCCESS);
}
