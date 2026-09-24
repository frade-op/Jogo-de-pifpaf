#ifndef BIBLIOTECA_H
#define BIBLIOTECA_H

#include <cstdio>

/* variaveis globais compartilhadas entre os arquivos .cpp (definidas em principal.cpp) */

// constantes
constexpr int VALORES = 13;
constexpr int NAIPES = 4;

extern int identifica[VALORES][NAIPES];
extern int x, y;
extern int baralho[VALORES];
extern int mao1[9], mao2[9], mao3[9], mao4[9];
extern int i, j, numero, numero2, numero3, numero4;
extern int naipe1[9], naipe2[9], naipe3[9], naipe4[9];
extern int naipe, naipe5, naipe6, naipe7;
extern int sair, nova_posicao, posicao, novo, naipe_novo, modo, jogadores, partida, jogada, jogadas, ganha;
extern int total, b1, b2, simnao, naipe_lixo, lixo, cartas_lixo, cartateste, naipeteste;
extern int alt, alt1, alt2, alt3, alt4;

/* prototipos das funcoes compartilhadas entre os arquivos .cpp */
void jogador1();
void jogador2();
void jogador3();
void jogador4();

void apresenta1();
void apresenta2();
void apresenta3();
void apresenta4();

void mudar1();
void mudar2();
void mudar3();
void mudar4();

void compar1();
void compar2();
void compar3();
void compar4();

void monte1();
void monte2();
void monte3();
void monte4();

void mostrar1();
void mostrar2();
void mostrar3();
void mostrar4();

void menu();
void opcao();

#endif
