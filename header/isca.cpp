#include <bits/stdc++.h>
#include "serpente.h"
#include <cstdlib>
#include <ctime>

using namespace std;

void isca(char campo[20][30], struct fila *f, int largura, int altura, int *eiXo, int *eiYo){
	if(f->tamanho!=f->tamanhoAnterior){
		srand(time(nullptr));
		*eiXo = rand()%largura;
		*eiYo = rand()%altura;
		campo[*eiYo][*eiXo]='i';
		f->tamanhoAnterior = f->tamanho;
//		cout<<eiXo<<" "<<eiYo<<endl;
	}
	else if(f->cabeca->x==*eiXo&&f->cabeca->y==*eiYo){
		f->tamanho++;
		f->velocidade+=10;
		incrementarCobra(f);
	}
	cout<<"tamanho: "<<f->tamanho<<endl;
	return;
}

void incrementarCobra(struct fila *f){
	struct Cobra* c = (Cobra*)malloc(sizeof(Cobra));
	c->proximo = NULL;
	c->anterior = f->cauda;
	if(f==NULL){
		f->cabeca = c;
	}
	else{
		f->cauda->proximo = c;
	}
//	c->x = c->anterior->x;
//	c->y = c->anterior->y;
	c->sentido = c->anterior->sentido;
	f->cauda = c;
	
	cout<<"incrementou"<<endl;
	return;
}

