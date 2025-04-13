#include <stdio.h>
#include <string.h>
int hamming(char *c,char *p);


int main(int argc, char **argv){
 
    }else if(argc != 3){
        printf("Numero di argomenti sbagliato\n");
        return 1;
    }else{
        char* pr = *(argv + 1);
        char* se = *(argv + 2);

        if(strlen(pr) != strlen(se)){
            printf("Lunghezza delle due stringhe di bit diversa\n");
        }else{
            printf("La distanza tra i due è %d\n",hamming(pr,se));
        }
    }
    return 0;

int hamming(char *c,char *p){
    int d=0;
    for(int i=0;i < strlen(c); i++){
        if(*(c + i) != *(p + i)){
            d++;
        }
    }
    return d;
}