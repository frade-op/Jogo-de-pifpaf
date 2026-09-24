#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "biblioteca.h"

void limparTela();

// script de terceiro
void limparTela() {
    // \033[2J limpa a tela, \033[1;1H move o cursor para a linha 1, coluna 1
    std::cout << "\033[2J\033[1;1H"; 
}