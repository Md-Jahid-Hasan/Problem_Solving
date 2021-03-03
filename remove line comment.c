#include<stdio.h>
FILE *readFile, *writeFile;


int main(){
char c,d;
readFile = fopen("input.txt","r");
writeFile = fopen("output.txt", "w");

while((c=fgetc(readFile))!=EOF){
    if(c=='/'){
        d = fgetc(readFile);
        if(d == '/'){
            while((c=fgetc(readFile))!=EOF){
                if(c=='\n')
                    break;
            }
        }
        else{
            fputc(c, writeFile);
            fputc(d, writeFile);
        }
    }
    else
        fputc(c, writeFile);
}


fclose(readFile);
fclose(writeFile);
return 0;
}
