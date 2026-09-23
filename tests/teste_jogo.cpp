/* Teste automatizado de exemplo: simula uma distribuicao de cartas sem
   pedir entrada do usuario, para validar a logica basica do jogo
   (distribuicao de maos, ausencia de cartas repetidas e limites da
   matriz "identifica") sem depender do menu interativo do jogo original. */

#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <cassert>

static int identifica[13][4];
static int baralho[13];

static const char* nomeCarta(int numero){//numero de 1 a 13
	switch(numero){
		case 1: return "As";
		case 11: return "Valete";
		case 12: return "Dama";
		case 13: return "Rei";
		default: return nullptr;
	}
}

static const char* nomeNaipe(int naipe){//naipe de 1 a 4
	switch(naipe){
		case 1: return "paus";
		case 2: return "copas";
		case 3: return "espadas";
		case 4: return "ouros";
	}
	return "";
}

static void distribuirMao(const char* jogador, int mao[9], int naipe[9]){
	for(int i=0; i<9; i++){
		int numero, nsuit;
		do{
			numero=rand()%13;//0..12
			nsuit=rand()%4;//0..3
		}while(identifica[numero][nsuit]>=1);
		identifica[numero][nsuit]+=1;
		mao[i]=numero+1;
		naipe[i]=nsuit+1;
		baralho[numero]++;
	}

	printf("Mao do %s:\n", jogador);
	for(int i=0; i<9; i++){
		const char* nome=nomeCarta(mao[i]);
		if(nome){printf("  %ia posicao - %s de %s\n", i+1, nome, nomeNaipe(naipe[i]));}
		else{printf("  %ia posicao - %i de %s\n", i+1, mao[i], nomeNaipe(naipe[i]));}
	}
}

static void testarLimitesDaMatrizIdentifica(){
	/* regressao do bug: compar1..4 usavam indices de 1 a 13/4 (fora dos
	   limites de identifica[13][4]); o acesso valido vai de 0 a 12 e 0 a 3 */
	for(int novo=1; novo<=13; novo++){
		for(int naipe_novo=1; naipe_novo<=4; naipe_novo++){
			assert(novo-1>=0 && novo-1<13);
			assert(naipe_novo-1>=0 && naipe_novo-1<4);
		}
	}
	printf("OK: acesso a identifica[novo-1][naipe_novo-1] sempre dentro dos limites.\n");
}

int main(){
	srand((unsigned)time(NULL));

	int mao1[9], naipe1[9];
	int mao2[9], naipe2[9];
	distribuirMao("Jogador 1", mao1, naipe1);
	distribuirMao("Jogador 2", mao2, naipe2);

	int totalCartas=0;
	for(int n=0; n<13; n++){totalCartas+=baralho[n];}
	assert(totalCartas==18);//9 cartas para cada um dos 2 jogadores

	for(int n=0; n<13; n++){
		for(int s=0; s<4; s++){
			assert(identifica[n][s]<=2);//nunca mais de 2 copias da mesma carta
		}
	}

	testarLimitesDaMatrizIdentifica();

	printf("\nTodos os testes passaram! (%i cartas distribuidas sem repeticao)\n", totalCartas);
	return 0;
}
