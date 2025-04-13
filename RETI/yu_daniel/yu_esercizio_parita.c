#include <stdio.h>
#include <string.h>
int crea(char *s);


int main(int argc,char **argv){

        return 0;
    }else if(argc != 3){
        printf("Numero di argomenti sbagliato\n");
        return 1;
    }else{
        char* m = *(argv + 2);
        char* c = *(argv + 1);
        

        if(*(m) == 'D'){         
            printf("Bit di parità: %d\nCodice corretto: %s%d\n",!crea(c), c, !(crea(c)));
        }else if(*(m) == 'P'){    
            printf("Bit di parità: %d\nCodice corretto: %s%d\n",crea(c), c, crea(c));
        }else{
            printf(" no\n");
        }
    }
    return 0;

int crea(char *s){
    int s = 0;
    for(int i=0; i < strlen(s); i++){
        if(*(s + i) == '1'){
            s++;
        }
    }
    return s % 2;
}