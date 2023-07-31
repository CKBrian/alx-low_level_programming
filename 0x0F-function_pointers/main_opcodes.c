#include <stdio.h>
#include <stdlib.h>

void print_opcodes(int num_bytes) {
    unsigned char *main_addr = (unsigned char *)__builtin_return_address(0);
    int count = 0;

    while (count < num_bytes) {
        printf("%02x ", main_addr[count]);
        count++;
    }

    printf("\n");
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Error\n");
        return 1;
    }

    int num_bytes = atoi(argv[1]);

    if (num_bytes <= 0) {
        printf("Error\n");
        return 2;
    }

    print_opcodes(num_bytes);

    return 0;
}

