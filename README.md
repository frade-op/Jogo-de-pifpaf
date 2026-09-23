# Jogo de Pif Paf

Este é um projeto **antigo e simples**, feito lá na época da faculdade — um dos
meus primeiros jogos em C/C++. Não espere código moderno ou boas práticas
atuais: é um simulador de cartas do jogo "Pif Paf" (também conhecido como
Rummy/Buraco em algumas variações regionais) para 2 a 4 jogadores, todo
baseado em `printf`/`scanf` no terminal.

O código foi escrito de forma bem direta, com variáveis globais compartilhadas
entre os arquivos e bastante uso de `goto`, no estilo comum de quem estava
aprendendo C. Ele está aqui organizado e compilável novamente, mas a lógica
do jogo em si foi mantida praticamente intacta, como registro histórico do
aprendizado.

## Estrutura do projeto

```
src/            Código-fonte do jogo
  principal.cpp     Ponto de entrada (main), menu inicial e variáveis globais
  jogadores.cpp     Distribuição e apresentação das mãos dos 4 jogadores
  jogador1.cpp      Ações do jogador 1 (mudar carta, comprar, monte, mostrar)
  jogador2.cpp      Ações do jogador 2
  jogador3.cpp      Ações do jogador 3
  jogador4.cpp      Ações do jogador 4
  menu.cpp          Loop principal de turnos/jogadas
  opcao.cpp         Impressão do menu de opções durante a jogada
  biblioteca.h      Declarações compartilhadas (variáveis globais e protótipos)
tests/
  teste_jogo.cpp    Exemplo/teste automatizado de uma distribuição de cartas
.vscode/          Configuração de build/debug para VS Code (MinGW-w64/GCC)
```

## Como compilar e jogar

Requer um compilador C++ (recomendado: [MinGW-w64/WinLibs](https://winlibs.com/)
no Windows, ou `g++` no Linux/macOS).

No VS Code, use a tarefa de build padrão (`Ctrl+Shift+B`) ou rode manualmente:

```powershell
g++ -std=gnu++17 src/principal.cpp src/jogador1.cpp src/jogador2.cpp src/jogador3.cpp src/jogador4.cpp src/jogadores.cpp src/menu.cpp src/opcao.cpp -o pifpaf.exe
.\pifpaf.exe
```

## Teste de exemplo

Como o jogo original é totalmente interativo (via `scanf`), o arquivo
[tests/teste_jogo.cpp](tests/teste_jogo.cpp) reimplementa de forma isolada a
lógica de distribuição de cartas (sem pedir entrada do usuário) e valida
automaticamente que:

- são distribuídas 18 cartas (9 para cada um de 2 jogadores simulados);
- nenhuma carta é repetida (mesmo número + mesmo naipe);
- os índices usados na matriz de controle `identifica` nunca ficam fora dos
  limites do array.

Para compilar e rodar o teste:

```powershell
g++ -std=gnu++17 tests/teste_jogo.cpp -o teste_jogo.exe
.\teste_jogo.exe
```

## Bug corrigido

Nas funções `compar1()`–`compar4()` (arquivos `src/jogadorN.cpp`), a carta
comprada usava `novo` (1 a 13) e `naipe_novo` (1 a 4) diretamente como índice
da matriz `identifica[13][4]`, que só aceita índices de 0 a 12 e 0 a 3. Quando
a carta sorteada era um Rei (13) ou naipe "ouros" (4), o acesso ficava fora
dos limites do array (comportamento indefinido). Foi corrigido para usar
`identifica[novo-1][naipe_novo-1]`.
