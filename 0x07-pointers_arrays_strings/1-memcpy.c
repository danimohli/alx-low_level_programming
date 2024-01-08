#include <stdio.h>

char* _memcpy(char *dest, const char *src, unsigned int n) {
    char *start = dest;

    while (n--) {
        *dest++ = *src++;
    }
    
    return start;
}
