# Lista - Programação e Algoritmos / Vetores e Matrizes

Breve resumo dos exercícios em C organizados por pastas. Cada exercício é um programa independente com um arquivo principal chamado `main.c` (ou um binário `main`).

Estrutura principal:

- [Lista - Algoritmos](Lista - Algoritmos/)
  - [`main`](Lista - Algoritmos/Questão-01/main.c) — [`main`](Lista - Algoritmos/Questão-02/main.c) — [`main`](Lista - Algoritmos/Questão-03/main.c) — [`main`](Lista - Algoritmos/Questão-04/main) — [`main`](Lista - Algoritmos/Questão-05/main) — [`main`](Lista - Algoritmos/Questão-06/main.c) — [`main`](Lista - Algoritmos/Questão-07/main.c) — [`main`](Lista - Algoritmos/Questão-08/main.c) — [`main`](Lista - Algoritmos/Questão-09/main) — [`main`](Lista - Algoritmos/Questão-10/main)
- [Lista - Vetores e Matrizes](Lista - Vetores e Matrizes/)
  - [Questão-01](Lista - Vetores e Matrizes/Questão-01/main.c) — [Questão-02](Lista - Vetores e Matrizes/Questão-02/main.c) — [Questão-03](Lista - Vetores e Matrizes/Questão-03/main.c) — [Questão-04](Lista - Vetores e Matrizes/Questão-04/main.c) — [Questão-05](Lista - Vetores e Matrizes/Questão-05/main.c) — [Questão-06](Lista - Vetores e Matrizes/Questão-06/main) — [Questão-07](Lista - Vetores e Matrizes/Questão-07/main) — [Questão-08](Lista - Vetores e Matrizes/Questão-08/main.c) — [Questão-09](Lista - Vetores e Matrizes/Questão-09/main.c) — [Questão-10](Lista - Vetores e Matrizes/Questão-10/main.c)

Como compilar (exemplo):

- Compilar um arquivo C:
  - gcc -o bin/questao01 "Lista - Algoritmos/Questão-01/main.c"
- Rodar:
  - ./bin/questao01

Dicas rápidas após análise do código:

- Padrão: cada exercício usa input via scanf e imprime via printf — ótimo para testes manuais.
- Validações: muitos arquivos já fazem validação de entrada (ex.: notas entre 0 e 10, ano/mês/dia). Mantê-las evita entradas inválidas.
- Matrizes/vetores: os exercícios em `Lista - Vetores e Matrizes` têm alocações estáticas; para tamanhos maiores, considere alocação dinâmica.
- Compilação por lote: criar um script simples (Makefile ou shell) facilita compilar todos os mains existentes.

Exemplos de arquivos principais (para abrir/edit):

- [Lista - Algoritmos/Questão-01/main.c](Lista - Algoritmos/Questão-01/main.c) — função [`main`](Lista - Algoritmos/Questão-01/main.c)
- [Lista - Algoritmos/Questão-06/main.c](Lista - Algoritmos/Questão-06/main.c) — trata delta e raízes reais
- [Lista - Vetores e Matrizes/Questão-10/main.c](Lista - Vetores e Matrizes/Questão-10/main.c) — soma de matrizes A e B em C
- [Lista - Vetores e Matrizes/Questão-09/main.c](Lista - Vetores e Matrizes/Questão-09/main.c) — soma por linha e diagonal principal
