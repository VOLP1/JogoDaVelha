#include <iostream>

#include "velha.hpp"

using namespace std;

int vencedor(int velha[3][3]){   

    // if(velha[0][0] == velha[0][1] == velha[0][2] == '2' || velha[1][0] == velha[1][1] == velha[1][2] == '2' || velha[2][0] == velha[2][1] == velha[2][2] == '2'|| velha[0][0] == velha[1][1] == velha[2][2] == '2' || velha[2][0] == velha[1][1] == velha[0][2] == '2'|| velha[0][0] == velha[1][0] == velha[2][0] == '2' || velha[0][1] == velha[1][1] == velha[2][1] == '2' || velha[0][2] == velha[1][2] == velha[2][2] == '2'){
    //     return 2;
    // }else if(velha[0][0] == velha[0][1] == velha[0][2] == '1' || velha[1][0] == velha[1][1] == velha[1][2] == '1' || velha[2][0] == velha[2][1] == velha[2][2] == '1'|| velha[0][0] == velha[1][1] == velha[2][2] == '1' || velha[2][0] == velha[1][1] == velha[0][2] == '1'|| velha[0][0] == velha[1][0] == velha[2][0] == '1' || velha[0][1] == velha[1][1] == velha[2][1] == '1' || velha[0][2] == velha[1][2] == velha[2][2] == '1'){
    //     return 1;
    // }else{
    //     return 0;
    // };

    if(velha[0][0] == '1' && velha[0][1] == '1' && velha[0][2] == '1'){
        return 1;
    }else if(velha[1][0] == '1' && velha[1][1] == '1' && velha[1][2] == '1' ){
        return 1;
    }else if(velha[2][0] == '1' && velha[2][1] == '1' && velha[2][2] == '1'){
        return 1;
    }else if(velha[0][0] == '2' && velha[0][1] == '2' && velha[0][2] == '2'){
        return 2;
    }else if(velha[1][0] == '2' && velha[1][1] == '2' && velha[1][2] == '2' ){
        return 2;
    }else if(velha[2][0] == '2' && velha[2][1] == '2' && velha[2][2] == '2'){
        return 2;
    }else if(velha[0][0] == '2' && velha[1][0] == '2' && velha[2][0] == '2'){
        return 2;
    }else if(velha[0][1] == '2' && velha[1][1] == '2' && velha[2][1] == '2'){
        return 2;
    }else if(velha[0][2] == '2' && velha[1][2] == '2' && velha[2][2] == '2'){
        return 2;
    }else if(velha[0][0] == '1' && velha[1][0] == '1' && velha[2][0] == '1'){
        return 1;
    }else if(velha[0][1] == '1' && velha[1][1] == '1' && velha[2][1] == '1'){
        return 1;
    }else if(velha[0][2] == '1' && velha[1][2] == '1' && velha[2][2] == '1'){
        return 1;
    }else if(velha[0][0] == '2' && velha[1][1] == '2' && velha[2][2] == '2'){
        return 2;
    }else if(velha[0][0] == '1' && velha[1][1] == '1' && velha[2][2] == '1'){
        return 1;
    }else if(velha[0][2] == '2' && velha[1][1] == '2' && velha[2][0] == '2'){
        return 2;
    }else if(velha[0][2] == '1' && velha[1][1] == '1' && velha[2][0] == '1'){
        return 1;
    } else{
        return 0;
    };
        
}  

int VerificaVelha(int velha[3][3]){
    int resultado = 10;
    resultado = vencedor(velha);
    if(resultado == 0){
        return 0;
    }else{
        return resultado;
    }

};


