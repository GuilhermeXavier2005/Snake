#include <bits/stdc++.h>
#include <windows.h>
#include "serpente.h"
using namespace std;

void mostrarCampo(Cobra *cobra, char campo[20][30], int largura, int altura){
	system("cls");
	for(int j=0;j<largura;j++){
		for(int l=0;l<altura;l++){
			cout<< campo[j][l]<<" ";
		}
		cout<<endl;
	}
	
}

void mostrarSerpente(char campo[20][30], struct Cobra *cobra){
	if(cobra->ultimaTeclaX=='d'){
		if(campo[cobra->y+1][cobra->x]=='S'){
		//caso esteja subindo W e vire a direita D, então corrige o campo evitando que um pedaço da serpente fique no campo
			campo[cobra->y+1][cobra->x] = '*';
		}
		else if(campo[cobra->y-1][cobra->x] == 'S'){
		//caso esteja descendo S e aperte D
			campo[cobra->y-1][cobra->x] = '*';
		}
		cobra->x++;
		campo[cobra->y][cobra->x] = 'S';
		campo[cobra->y][cobra->x-2] = '*';
	}
	else if(cobra->ultimaTeclaY=='w'){
		if(campo[cobra->y][cobra->x+1]=='S'){
		//caso esteja a esquerda A e pressione W para cima, então corrige o campo evitando que um pedaço da serpente fique no campo
			campo[cobra->y][cobra->x+1] = '*';
		}
		else if(campo[cobra->y][cobra->x-1]=='S'){
		//caso esteja a direita D e pressione W subindo
			campo[cobra->y][cobra->x-1]='*';
		}
		cobra->y--;
		campo[cobra->y][cobra->x] = 'S';
		campo[cobra->y+2][cobra->x] = '*';
	}
	else if(cobra->ultimaTeclaY=='s'){
		if(campo[cobra->y][cobra->x-1]=='S'){
		//caso esteja a direita D e decida pressionar S para descer, corrige o campo evitando deixar para trás um pedaço da serpente
			campo[cobra->y][cobra->x-1] = '*';
		}
		else if(campo[cobra->y][cobra->x+1]=='S'){
		//caso esteja a esquerda A e pressione S
			campo[cobra->y][cobra->x+1] = '*';
		}
		cobra->y++;
		campo[cobra->y][cobra->x] = 'S';
		campo[cobra->y-2][cobra->x] = '*';
	}
	else if(cobra->ultimaTeclaX=='a'){
		if(campo[cobra->y-1][cobra->x]=='S'){
		//caso esteja descendo S e pressione A para a esquerda evitando deixar parte da serpente no campo
			campo[cobra->y-1][cobra->x] = '*';
		}
		else if(campo[cobra->y+1][cobra->x] == 'S'){
		//caso esteja subindo W e pressione A
			campo[cobra->y+1][cobra->x] = '*';
		}
		cobra->x--;
		campo[cobra->y][cobra->x] = 'S';
		campo[cobra->y][cobra->x+2] = '*';
	}
}

