#include <bits/stdc++.h>
#include "serpente.h"

using namespace std;

void mostrarCampo(char campo[20][30], int largura, int altura){
	system("clear");
	for(int j=0; j<largura;j++){
		for(int i=0; i<altura;i++){
			cout<<campo[j][i]<<" ";
		}
		cout<<endl;
	}

}

void mostrarSerpente(char campo[20][30], struct Cobra *cobra){
	if(cobra->ultimaTeclaX=='d'){
		for(int limitador=cobra->tamanho;limitador>=1;limitador--){
			if(campo[cobra->y+limitador][cobra->x]=='S'){
				//caso esteja subindo em W e vire a direita D, isso para uma serpente de tamanho 2
				campo[cobra->y+limitador][cobra->x]='*';
			}
			if(campo[cobra->y-limitador][cobra->x]=='S'){
				//caso esteja descendo S e aperte D
				campo[cobra->y-limitador][cobra->x]='*';
			}
		}
		cobra->x++;
		campo[cobra->y][cobra->x]='S';
		campo[cobra->y][cobra->x-cobra->tamanho]='*';
	}
	else if(cobra->ultimaTeclaY=='w'){
		for(int limitador=cobra->tamanho;limitador>=1;limitador--){
			if(campo[cobra->y][cobra->x+limitador]=='S'){
				//caso esteja a esquerda A e pressione para cima W
				campo[cobra->y][cobra->x+limitador]='*';
			}
			else if(campo[cobra->y][cobra->x-limitador]=='S'){
				//caso esteja a direita D e pressione W
				campo[cobra->y][cobra->x-limitador]='*';
			}
		}
		cobra->y--;
		campo[cobra->y][cobra->x]='S';
		campo[cobra->y+cobra->tamanho][cobra->x]='*';
	}
	else if(cobra->ultimaTeclaY=='s'){
		for(int limitador=cobra->tamanho;limitador>=1;limitador--){
			if(campo[cobra->y][cobra->x-limitador]=='S'){
				//caso esteja a direita D pressione S para baixo
				campo[cobra->y][cobra->x-limitador]='*';
			}
			else if(campo[cobra->y][cobra->x+limitador]=='S'){
				//caso esteja a esquerda A  e pressione S
				campo[cobra->y][cobra->x+limitador]='*';
			}
		}
		cobra->y++;
		campo[cobra->y][cobra->x]='S';
		campo[cobra->y-cobra->tamanho][cobra->x]='*';
	}
	else if(cobra->ultimaTeclaX=='a'){
		for(int limitador=cobra->tamanho;limitador>=1;limitador--){
			if(campo[cobra->y-limitador][cobra->x]=='S'){
				//caso esteja descendo S e pressione A
				campo[cobra->y-limitador][cobra->x]='*';
			}
			else if(campo[cobra->y+limitador][cobra->x]=='S'){
				//caso esteja subindo W e pressione A
				campo[cobra->y+limitador][cobra->x]='*';
			}
		}
		cobra->x--;
		campo[cobra->y][cobra->x]='S';
		campo[cobra->y][cobra->x+cobra->tamanho]='*';
	}
}
