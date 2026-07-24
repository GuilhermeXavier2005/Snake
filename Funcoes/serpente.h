#ifndef serpente
#define serpente

struct Cobra{
	int tamanho;
	int velocidade;
	int x=1;
	int y=1;
	char cobra = 'S';
	char ultimaTeclaX='d';
	char ultimaTeclaY='n';
	int ultimaPosicaoX=x-1;
	int ultimaPosicaoY=1;
};

const int ALTURA = 20;
const int LARGURA = 30;

struct Campo
{
    char mapa[ALTURA][LARGURA];
    char isca='x';
    int ultimaPosicaoX;
    int ultimaPosicaoY;
};

void mostrarCampo(struct Cobra *cobra, char campo[20][30], int altura, int largura);
void detectarTecla(struct Cobra *cobra);
void jogar(int dificuldadeTempo, int altura, int largura);
void mostrarSerpente(char campo[20][30], struct Cobra *cobra);

#endif
