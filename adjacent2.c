#include <stdio.h>
#include <string.h>

int main() {
    /*no null terminator (0) at the end
    c will only implicitly insert null terminator at end of string literal
    hi array ad helloeveryone array are stored in adjacent memory locations
    neither is null terminated*/

    char hi[] = {'H', 'i', ' ', 'a', 'l', 'l', '!', '!', 0 };
    char helloeveryone[] = { 'H', 'e', 'l', 'l', 'o', ',', ' ',
                             'e', 'v', 'e', 'r', 'y', 'o', 'n', 'e', '!', 0 };
    puts(hi);
    puts(helloeveryone);
    printf("%ld\n", strlen(hi));
    printf("%ld\n", strlen(helloeveryone));
}
