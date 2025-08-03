#include <stdio.h>

int pares(int n, int *vet){
    int x = 0;
    for (int i = 0; i < n; i++){
        if (vet[i] % 2 == 0)
            x++;
    }
    return x;
}

int main(){
    int vetor[] = {10, 20, 30, 40, 50};
    printf("Há %d pares nesse vetor", pares(5, vetor));
}