#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    FILE *fname;
    char buf[256];

    fname = fopen(argv[1], "r");

    if (fname == NULL) {
        printf("%sが開けません\n", argv[1]);
        exit(1);
    }

    while(fgets(buf, 256, fname) != NULL) {
        printf("%s", buf);
    }
    printf("\n");

    return 0;
}