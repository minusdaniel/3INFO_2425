#include <stdio.h>

void main()
{
int n, sum, cifra;
int pari=0;

//chiedi all'utente di inserire un numero 
printf("inserire un numero intero positivo");
scanf("%d",&n);

int copia_n = n;

while (n>0) {
    cifra= n&10;
    printf("la cifra e:%d\n", cifra);
    sum += cifra;
    printf("la sum e: %d\n", sum);
    if (cifra %2 ==0){
        printf("la cifra pari e:%d\n", cifra);
        pari = 1;
    }
    n/=10;
}
printf("sum cifre:%d\n", sum);
printf("cifra pari: %d\n", pari);

if (sum % div == 0 && pari == 1){
    printf("%d e un numero speciale\n", copia_n);
} else{
    printf("%d non e un numero speciale\n", copia_n);
}
 return 0;

 }


