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

void mostrarSerpente(char campo[20][30], struct fila *f){
	controleCabeca(f);
	campo[f->cabeca->y][f->cabeca->x] = 'S';
//	campo[f->cauda->y][f->cauda->x] = '*';
}

void mexerSerpente(struct Cobra *cobra){
	
}


void controleCabeca(struct fila *f){
	switch(f->cabeca->sentido){
		case DIREITA:
			f->cabeca->x++;
			break;
		case CIMA:
			f->cabeca->y--;
			break;
		case BAIXO:
			f->cabeca->y++;
			break;
		case ESQUERDA:
			f->cabeca->x--;
			break;
	}
}
void controleCorpo(){}
