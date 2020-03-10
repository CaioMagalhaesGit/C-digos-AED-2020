/*

03 - Uma struct ou estrutura em portugues.Uma struct é um tipo de variável especial que contem outras 
variaveis dentro de si mesma, que podem ser de tipos diferentes. No caso da struct ficha do aluno possui
o nome, disciplina, a nota da prova 1 e nota da prova 2.

04 - Criar um for que repetiria o código 10 vezes.

05 
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main(void)
{
	
	struct ficha_de_aluno
	{
		char nome[40];
		char disciplina[40];
		float notaprova1;
		float notaprova2;
	};
	
	struct ficha_de_aluno aluno;
	int i;
	
	for (i=1 ; i<=10 ; i++){
	
	
	printf("Digite o nome do aluno: \n");
	fflush(stdin);
	fgets(aluno.nome, 40,stdin);
	
	
	printf("Digite a disciplina: \n");
	fflush(stdin);
	fgets(aluno.disciplina, 40,stdin);
	
	
	printf("Digite a nota da prova 1: \n");
	scanf("%f",&aluno.notaprova1);
	
	
	printf("Digite o nome do aluno: \n");
	scanf("%f",&aluno.notaprova2);
}
	printf("Nome: %s",aluno.nome);
	printf("Disciplina: %s",aluno.disciplina);
	printf("Nota 1: %.2f \n",aluno.notaprova1);
	printf("Nota 2: %.2f \n",aluno.notaprova2);

	system("pause");
	return 0;
		
}
