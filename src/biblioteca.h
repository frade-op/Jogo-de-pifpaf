#ifndef BIBLIOTECA_H
#define BIBLIOTECA_H

#include <cstdio>

/* variaveis globais compartilhadas entre os arquivos .cpp (definidas em principal.cpp) */
extern int identifica[13][4];
extern int x, y;
extern int baralho[13];
extern int mao1[9], mao2[9], mao3[9], mao4[9];
extern int i, j, numero, numero2, numero3, numero4;
extern int naipe1[9], naipe2[9], naipe3[9], naipe4[9];
extern int naipe, naipe5, naipe6, naipe7;
extern int sair, nova_posicao, posicao, novo, naipe_novo, modo, jogadores, partida, jogada, jogadas, ganha;
extern int total, b1, b2, simnao, naipe_lixo, lixo, cartas_lixo, cartateste, naipeteste;
extern int alt, alt1, alt2, alt3, alt4;

/* prototipos das funcoes compartilhadas entre os arquivos .cpp */
int jogador1();
int jogador2();
int jogador3();
int jogador4();

int apresenta1();
int apresenta2();
int apresenta3();
int apresenta4();

int mudar1();
int mudar2();
int mudar3();
int mudar4();

int compar1();
int compar2();
int compar3();
int compar4();

int monte1();
int monte2();
int monte3();
int monte4();

int mostrar1();
int mostrar2();
int mostrar3();
int mostrar4();

int menu();
int opcao();

#endif
