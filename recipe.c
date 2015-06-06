#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    FILE *fname;
    char buf[256];
    char recipe_hash[][256][256] ={};
    int recipe_count;
    
    
    fname = fopen(argv[1], "r");

    /*read recipe.txt*/
    if (fname == NULL) {
        printf("%sが開けません\n", argv[1]);
        exit(1);
    }
    
    for(recipe_count = 0; fgets(buf, 256, fname) != NULL; recipe_count++) {
        recipe_hash[recipe_count][] = buf;
        printf("%s", buf);
    }
    printf("\n");

    fclose(fname);
       
    /*insert recipeID*/
    fname = fopen(argv[1],"w");
    
    if (fname == NULL) {
        printf("%sが開けません\n", argv[1]);
        exit(1);
    }
    
    for(recipe_count = 0; fgets(buf, 256, fname) != NULL;recipe_count++) {
        fprintf(fname,"%d : %s",recipe_count,recipe_hash[recipe_count][]);
    }
    printf("\n");
    fclose(fname);

    return 0;
}
