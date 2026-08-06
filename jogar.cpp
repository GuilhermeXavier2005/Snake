#include <bits/stdc++.h>
#include "header/serpente.h"

using namespace std;

void jogar(int dificuldadeTempo, int altura, int largura){
	struct Cobra cobra;
	char campo[20][30];
	int eiXo=0, eiYo=0;
	for(int a=0;a<largura;a++){
		for(int l=0;l<altura;l++){
			campo[a][l] = '*';
		}
	}

	while(true){
		if(cobra.x>=largura||cobra.x<=-1||cobra.y<=-1||cobra.y>=altura){
			break;
		}else{
			mostrarSerpente(campo, &cobra);
			detectarTecla(&cobra);
			mostrarCampo(campo, altura, largura);
			isca(campo, &cobra, largura, altura, &eiXo, &eiYo);
			this_thread::sleep_for(chrono::milliseconds(dificuldadeTempo));
//			cout<<cobra.x<<" "<<cobra.y<<endl;
//			cout<<cobra.tamanho<<endl;
		}
	}
}
