#ifndef serpente_h
#define serpente_h

enum direcao {
	DIREITA, BAIXO, ESQUERDA, CIMA
};

struct Cobra{
	int x=1;
	int y=1;
	struct Cobra *proximo;
	struct Cobra *anterior;
	char serpente =  'S';
	direcao sentido = DIREITA;
};

struct fila{
	Cobra *cabeca;
	Cobra *cauda;
	int tamanho=1;
	int tamanhoAnterior=0;
	int velocidade=0;
};

void controleCabeca(char campo[20][30], struct fila *f);
void mostrarSerpente(char campo[20][30], struct fila *f);
void jogar(int dificuldadeTempo, int altura, int largura);
void detectarTecla(struct fila *f);
void mostrarCampo(char campo[20][30], int largura, int altura);
void isca(char campo[20][30], struct fila *f, int largura, int altura, int *eiXo, int *eiYo);
void mexerSerpente(struct Cobra *cobra);
void incrementarCobra(struct fila *f);
void controleCorpo(char campo[20][30], struct fila *f);
#endif
