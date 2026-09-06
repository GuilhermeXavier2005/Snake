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

int tempX, tempY;

void mostrarSerpente(char campo[20][30], struct fila *f){
//	f->cauda->x = f->cabeca->x; f->cauda->y = f->cabeca->y;
	controleCabeca(campo, f);
	campo[f->cabeca->y][f->cabeca->x] = 'S';
}

void mexerSerpente(struct Cobra *cobra){
	
}


void controleCabeca(char campo[20][30], struct fila *f){
	controleCorpo(campo, f);
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
void controleCorpo(char campo[20][30], struct fila *f){
	if(f->cauda==f->cabeca){
		cout<<"*******************"<<endl;
		tempX = f->cabeca->x; tempY = f->cabeca->y;
		campo[tempY][tempX] = '*';
	}
	else{	
/*		tempX = f->cauda->anterior->x;
		tempY = f->cauda->anterior->y;
		f->cauda->x = tempX;
		f->cauda->y = tempY;*/
		struct Cobra* percorre = f->cauda;
		while(percorre->anterior!=NULL){
			percorre->x = percorre->anterior->x;
			percorre->y = percorre->anterior->y;
//			campo[percorre->proximo->y][percorre->proximo->x] = 'S';
			campo[percorre->y][percorre->x] = 'S';
			percorre = percorre->anterior;
			
		}
//		cout<<"percorreX: "<<percorre->x<<endl;
//		cout<<"percorreY: "<<percorre->y<<endl;
		campo[f->cauda->y][f->cauda->x] = '*';
	}
}
