#include <iostream>

#include "velha.hpp"

using namespace std;
//Funcao principal
int VerificaVelha(int velha[3][3]){
    //Se o jogo for possivel, retorna quem ganhou, ou se foi empate.
    if(!jogoimpossivel(velha)){
        
        return vencedor(velha);
    }
    return -2;
    }

    
//Determina se o jogo e impossivel
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
//Verifica se alguem ganhou em alguma coluna, se ninguem ganhou, determina se o jogo deu velha, ou se nao acabou.
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
        int vence = 0;
        for(int i = 0; i<3;i++){
            for (int x = 0; x < 3; x++)
            {
                if(velha[i][x] == 0){
                    vence = -1;
                }
            }
        }
        return vence;
    };
};
