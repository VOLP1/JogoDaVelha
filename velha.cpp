#include <iostream>

#include "velha.hpp"

using namespace std;

int VerificaVelha(int velha[3][3]){
    int result = -2;
    if(!jogoimpossivel(velha)){
        switch (vencedor(velha))
        {
        case 0:
            result = -1;
            break;
        case 1:
            result = 1;
            break;
        case 2:
            result = 2;
            break;
        
        default:
            break;
    }
    }

    return result;
    // if(vencedor(velha) == 0){
    //     return 0;
    // }else{
    //     return vencedor(velha);
    // }

}

bool jogoimpossivel(int velha[3][3]){
    int contador = 0;
    for(int i = 0; i<3;i++){
        for (int x = 0; x < 3; x++)
        {
            if(velha[i][x] == 1){
                contador++;
            }
            if(velha[i][x] == 2){
                contador--;
            }
        }
        
    }
    if(contador < -1 || contador > 1){
        return true;
    }
    return false;
}

int vencedor(int velha[3][3])
{
    if(velha[0][0] == 1 && velha[0][1] == 1 && velha[0][2] == 1){
        return 1;
    }else if(velha[1][0] == 1 && velha[1][1] == 1 && velha[1][2] == 1 ){
        return 1;
    }else if(velha[2][0] == 1 && velha[2][1] == 1 && velha[2][2] == 1){
        return 1;
    }else if(velha[0][0] == 2 && velha[0][1] == 2 && velha[0][2] == 2){
        return 2;
    }else if(velha[1][0] == 2 && velha[1][1] == 2 && velha[1][2] == 2 ){
        return 2;
    }else if(velha[2][0] == 2 && velha[2][1] == 2 && velha[2][2] == 2){
        return 2;
    }else if(velha[0][0] == 2 && velha[1][0] == 2 && velha[2][0] == 2){
        return 2;
    }else if(velha[0][1] == 2 && velha[1][1] == 2 && velha[2][1] == 2){
        return 2;
    }else if(velha[0][2] == 2 && velha[1][2] == 2 && velha[2][2] == 2){
        return 2;
    }else if(velha[0][0] == 1 && velha[1][0] == 1 && velha[2][0] == 1){
        return 1;
    }else if(velha[0][1] == 1 && velha[1][1] == 1 && velha[2][1] == 1){
        return 1;
    }else if(velha[0][2] == 1 && velha[1][2] == 1 && velha[2][2] == 1){
        return 1;
    }else if(velha[0][0] == 2 && velha[1][1] == 2 && velha[2][2] == 2){
        return 2;
    }else if(velha[0][0] == 1 && velha[1][1] == 1 && velha[2][2] == 1){
        return 1;
    }else if(velha[0][2] == 2 && velha[1][1] == 2 && velha[2][0] == 2){
        return 2;
    }else if(velha[0][2] == 1 && velha[1][1] == 1 && velha[2][0] == 1){
        return 1;
    } else{
        return 0;
    };
};
