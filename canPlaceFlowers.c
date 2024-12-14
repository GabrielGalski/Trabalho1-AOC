    #include <stdio.h>
    #include <stdbool.h>


    bool canPlaceFlowers(int* flowerbed, int flowerbedSize, int n) {


    // 605 can place flowers
    // temos uma array flowerbed contendo 0's e 1's; 
    // 0 = vazia, 1 = cheia; é necessario manter a distancia de 1 
    // retornar true se novas flores podem ser plantar
    // retornar false se não podem ser plantadas

    // criar um for para ler o vetor

    // fazer uma comparação e retornar true ou false como se pede

    // int flowerbed = vetor
    // int flowerbedSize = tamanho do vetor
    // int n = o numero de opções para comparação

    // criar um contador e comparar ele com n


    int count = 0;

    for(int i=0; i < flowerbedSize; i++){
        for(int j = i + 1; j < flowerbedSize - 1; j++){
        if(flowerbed[i] != flowerbed[j]){
        count++;
        }
    }

    // teoricamente se o count < n entao seria possivel alocar todas as flores
    if(count < n){
        return true; // voltava true
    } 
    // se fosse > n então não seria possivel 
    else{
        return false; // voltava false
    }
    } }

int main(){
int flowerbed[] = {1,0,0,0,1};
int flowerbedSize = 5;
int n = 2;


canPlaceFlowers(flowerbed, flowerbedSize, n);

return 0;
}