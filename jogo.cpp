#include <bits/stdc++.h>
#include "Funcoes/serpente.h"
#include <windows.h>
using namespace std;

struct Cobra{
	int tamanho;
	int velocidade;
	int x=0;
	int y=0;
	char cobra = 'S';
	char ultimaTeclaX;
	char ultimaTeclaY;
	int ultimaPosicaoX;
	int ultimaPosicaoY;
};

void jogar(){
	int direcaoX=1;
	int direcaoY=1;
	int ultimaPosicaoX=direcaoX-1;
	char ultimaTeclaX='d';
	char ultimaTeclaY = 'n';
	char campo[9][9] = {{'*', '*', '*', '*', '*', '*', '*', '*', '*'}, {'*', '*', '*', '*', '*', '*', '*', '*', '*'}, {'*', '*', '*', '*', '*', '*', '*', '*', '*'},
						{'*', '*', '*', '*', '*', '*', '*', '*', '*'}, {'*', '*', '*', '*', '*', '*', '*', '*', '*'}, {'*', '*', '*', '*', '*', '*', '*', '*', '*'},
						{'*', '*', '*', '*', '*', '*', '*', '*', '*'}, {'*', '*', '*', '*', '*', '*', '*', '*', '*'}, {'*', '*', '*', '*', '*', '*', '*', '*', '*'}};

	while(true){
		if(direcaoX>=8||direcaoX<=0){
			break;
		}else{
			mostrarSerpente(campo, direcaoX, direcaoY, ultimaTeclaX, ultimaTeclaY);
			detectarTecla(campo, direcaoX, ultimaPosicaoX, ultimaTeclaX, ultimaTeclaY);	
			mostrarCampo(direcaoX, campo);
			Sleep(250);
		}
	}
}
