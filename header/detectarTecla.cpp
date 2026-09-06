#include <bits/stdc++.h>
#include "serpente.h"
#include "lUbuntu.h"

using namespace std;

void detectarTecla(struct fila *f){
	if(kbhit()){
		char tecla = getch();
		if(tecla == 'a'&&f->cabeca->sentido!=DIREITA){
			f->cabeca->sentido = ESQUERDA;
		}
		if(tecla == 'd'&&f->cabeca->sentido!=ESQUERDA){
			f->cabeca->sentido = DIREITA;
		}
		if(tecla == 's'&&f->cabeca->sentido!=CIMA){
			f->cabeca->sentido = BAIXO;
		}
		if(tecla == 'w'&&f->cabeca->sentido!=BAIXO){
			f->cabeca->sentido = CIMA;
		}
	}
}
