#include <bits/stdc++.h>
#include "header/serpente.h"

using namespace std;

void iniciarFila(struct fila *f){
	f->cabeca=NULL;
	f->cauda=NULL;
}

void enfileirar(struct fila *f){
	struct Cobra* cobra = (Cobra*)malloc(sizeof(Cobra));
	cobra->proximo = NULL;
	cobra->anterior = NULL;
	f->cabeca = cobra;
	f->cauda = cobra;
}

void jogar(int dificuldadeTempo, int altura, int largura){
	struct fila f;
	iniciarFila(&f);
	char campo[20][30];
	int eiXo=0, eiYo=0;
	for(int a=0;a<largura;a++){
		for(int l=0;l<altura;l++){
			campo[a][l] = '*';
		}
	}
	enfileirar(&f);
	int temporizador = dificuldadeTempo - f.velocidade;
	while(true){
		if(f.cabeca->x>=largura||f.cabeca->x<=-1||f.cabeca->y<=-1||f.cabeca->y>=altura){
			break;
		}else{
			mostrarSerpente(campo, &f);
			detectarTecla(&f);
			mostrarCampo(campo, altura, largura);
			cout<<"velocidade: "<<temporizador + f.velocidade<<endl;
//			if(f.cauda!=NULL){
//				cout<<"Xcauda: "<<f.cauda->x<<" Ycauda: "<<f.cauda->y<<endl;}
			isca(campo, &f, largura, altura, &eiXo, &eiYo);
			this_thread::sleep_for(chrono::milliseconds(temporizador - f.velocidade));
		}
	}
}
