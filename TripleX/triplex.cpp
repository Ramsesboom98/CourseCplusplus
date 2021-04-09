#include <iostream>
int main(){
    std::cout <<"Secret agent" ;
    std::cout <<std::endl;
    std::cout <<"Hello World";
    const int codeA=4;
    int codeB=3;
    int codeC=2;


    int codeSum = codeA+codeB+codeC;
    int codeProduct = codeA*codeB*codeC;
    std::cout <<std::endl;
    std::cout <<"La suma de los 3 numeros es: "<<codeSum << std::endl;
    std::cout <<"El producto de los 3 numeros es: "<<codeProduct << std::endl;


    //Player guess

    int guessA,guessB,guessC;
    std::cin >>guessA;
    std::cin >>guessB;
    std::cin >>guessC;
    //std::cout <<"el valor ingresado es: "<<guessA<<guessB<<guessC << std::endl;
    int guessSum = guessA+guessB+guessC;
    int guessProd = guessA*guessB*guessC;

    if(guessSum==codeSum && guessProd==codeProduct){
        std::cout <<"Ganaste"<<std::endl;
    }else{
        std::cout <<"Perdiste"<<std::endl;
    }


    
    return 0;
}