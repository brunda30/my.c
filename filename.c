#include <stdio.h>
int main(){
    FILE *file;
    char filename[100];
    char newLine[256];
    
    
    printf("enter the name of the file : ");
    scanf("%s",filename);
    
    
    getchar();
    
    printf("enter the line to apprnd : ");
    fgets(newLine,sizeof(newLine),stdin);
    
    
    file = fopen(filename,"a");
    if (file == NULL){
        printf("ERROR : could not oprn file %s\n",filename);
        return 0;
    }
}
    
