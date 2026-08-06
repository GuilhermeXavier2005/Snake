#include <bits/stdc++.h>
#include "serpente.h"
#include <cstdlib>
#include <ctime>

using namespace std;

void isca(char campo[20][30], struct Cobra *cobra, int largura, int altura, int *eiXo, int *eiYo){
	if(cobra->tamanhoAnterior!=cobra->tamanho){
		srand(time(nullptr));
		*eiXo = rand()%largura;
		*eiYo = rand()%altura;
		campo[*eiYo][*eiXo]='i';
		cobra->tamanhoAnterior = cobra->tamanho;
		
		
//		cout<<eiXo<<" "<<eiYo<<endl;
	}
	else if(cobra->x==*eiXo&&cobra->y==*eiYo){
		cobra->tamanho++;
//		cout<<cobra->tamanho<<endl;
	}
	cout<<cobra->tamanho<<endl;

	return;
}
