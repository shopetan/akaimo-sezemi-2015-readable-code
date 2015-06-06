#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    FILE *fname;
    char buf[256];
    char recipe_hash[][256][256] ={};
    int recipe_count;
    int i,j,k;
    
    
    for(i = 0;i < 256;i++)
        for(j = 0;j < 256;j++)
            for(k = 0;k < 256;k++)
                recipe_hash[i][j][k] = "0";
//    printf("recipe_hash[%d][%d] = %s\n",i,j,recipe_hash[i][j]);
    






    
    
    fname = fopen(argv[1], "r");

    /*read recipe.txt*/
    if (fname == NULL) {
        printf("%sが開けません\n", argv[1]);
        exit(1);
    }
    
    for(recipe_count = 0; fgets(buf, 256, fname) != NULL; recipe_count++) {
        printf("%d\n", recipe_count);
        //recipe_hash[recipe_count][0] = recipe_count;
        
        printf("%s", buf);
    }
    
    printf("\n");

    fclose(fname);
       
    /*insert recipeID*/

/*
    fname = fopen(argv[1],"w");
    
    if (fname == NULL) {
        printf("%sが開けません\n", argv[1]);
        exit(1);
    }
    
    for(recipe_count = 0; fgets(buf, 256, fname) != NULL;recipe_count++) {
        fprintf(fname,"%s : %s",recipe_hash[recipe_count][0],recipe_hash[recipe_count][1]);
    }
    printf("\n");
    fclose(fname);
    */
    
    return 0;
}
