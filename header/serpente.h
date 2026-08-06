#ifndef serpente_h
#define serpente_h

struct Cobra{
	int tamanho=1;
	int tamanhoAnterior=0;
	int velocidade=1;
	int x=1, y=1;
	char cobra = 'S';
//	int ultimaPosicaoX=x-1;
//	int ultimaPosicaoY=1;
	char ultimaTeclaX='d';
	char ultimaTeclaY='n';
};

void mostrarSerpente(char campo[20][30], struct Cobra *cobra);
void jogar(int dificuldadeTempo, int altura, int largura);
void detectarTecla(struct Cobra *cobra);
void mostrarCampo(char campo[20][30], int largura, int altura);
void isca(char campo[20][30], struct Cobra *cobra, int largura, int altura, int *eiXo, int *eiYo);

#endif
