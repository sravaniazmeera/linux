#include <stdio.h>
#include<string.h>

#define STR_COPY(dest, src)  strcpy(dest,src)

int main() {
    char source[] = "Hello, world!";
    char destination[20];

    STR_COPY(destination,source);

    printf("Source: %s\n", source);
    printf("Destination: %s\n", destination);

    return 0;
}
