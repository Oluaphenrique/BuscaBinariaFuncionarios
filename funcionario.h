//Implementação da interface das funções
#include <stdio.h>
typedef struct funcionario Funcionario;

void resgitra_funcionario(Funcionario *funcionario, FILE *arquivo);

int quantifica_funcionarios(FILE *arquivo);

Funcionario *carrega_dados(Funcionario *funcionarios, FILE *arquivo);

void libera_funcionarios(Funcionario *funcionarios);
