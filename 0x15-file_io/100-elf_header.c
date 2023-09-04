#include "main.h"
/**
  *
  *
  */
void displayElfHeader(const ElfHeader *header) {
	int i;

    printf("Magic: ");
    for (i = 0; i < 16; i++) {
        printf("%02x ", header->e_ident[i]);
    }
    printf("\nClass: %d-bit\n", header->e_ident[4] == 1 ? 32 : 64);
    printf("Data: %s-endian\n", header->e_ident[5] == 1 ? "little" : "big");
    printf("Version: %d\n", header->e_ident[6]);
    printf("OS/ABI: %d\n", header->e_ident[7]);
    printf("ABI Version: %d\n", header->e_ident[8]);
    printf("Type: 0x%x\n", header->e_type);
    printf("Entry point address: 0x%x\n", header->e_entry);
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
        return 98;
    }

    const char *filename = argv[1];
    int fd = open(filename, O_RDONLY);

    if (fd == -1) {
        perror("Error opening file");
        return 98;
    }

    ElfHeader header;

    if (read(fd, &header, sizeof(ElfHeader)) != sizeof(ElfHeader)) {
        fprintf(stderr, "Error reading ELF header\n");
        close(fd);
        return 98;
    }

    // Check if it's a valid ELF file
    if (header.e_ident[0] != 0x7F || header.e_ident[1] != 'E' || header.e_ident[2] != 'L' || header.e_ident[3] != 'F') {
        fprintf(stderr, "%s is not an ELF file\n", filename);
        close(fd);
        return 98;
    }

    displayElfHeader(&header);

    close(fd);
    return 0;
}
