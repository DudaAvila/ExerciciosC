/*      VETOR       */

/* QUESTAO 1 */

/* 
int main(void) {
	int v[5]; 
	for (int i = 0; i < 5; i++){
		int valor; 
		printf("Entre com um valor para posição v[%d] = ", i); 
		scanf("%d", &valor); 
		v[i] = valor; 
	}
	printf("Posicoes com valores pares: "); 
	for (int n = 0; n < 5; n++) {
		if ((v[n] % 2) == 0) {
			printf("%d ", n); 
		}
	}
	return 0; 
}
*/

/* QUESTAO 3  */
/* verificar com o thadeu */
/*
int main(void) {
	int v[5]; 
	int* u = v; 
	for (int i = 0; i < 5; i++) {
		printf("*(v+%d) = ", i); 
		scanf("%d", &v[i]); 
	}
	printf("Imprima o dobro:\n "); 
	for (int j = 0; j < 5; j++) {
		u[0] = v[j] * 2; 
		printf(" 2 x *(v + j) = %d\n", u[0]);
	}
	return 0; 
}
 
*/ 
/* QUESTAO 5 */

/*
int negativos(float* vet, int N);

int main(void) {
	int n; 
	printf("Digite o tamanho do vetor: "); 
	scanf("%d", &n); 
    float v[n]; 
    printf("Preencha o vetor:\n "); 
    for(int i=0; i<n; i++){
        printf("v[%d]= ", i); 
        scanf("%f", &v[i]);
    }
    int neg= negativos (v, n); 
    printf("O vetor possui %d numeros negativos", neg); 
	return 0; 
}

int negativos(const float* vet, int N){ /*COLOCA CONST POR QUE A FNC NAO ALTERA O VETOR
    int cont=0; 
    for (int i=0; i<N; i++){
        if (vet[i]<0){
            cont++; 
        }
    }
    return cont; 
}
*/

/*QUESTAO 7*/
/*PESQUISAR QUESTAO */

/* 
int teste_PA (int n, float *v);


int main (void){ 
    int n; 
    printf("Digite o tamanho do vetor: "); 
    scanf("%d", n); 
    float vet[n]; 
    for (int i=0; i<n; i++){
        printf("vet[%d]= ", i); 
        scanf("%f", &vet[i]); 
    }
    int ehPA = teste_PA (n, v); 
    if (ehPA == 0){
        printf("O vetor dado como entrada nao eh uma PA de razao! "); 
    }else{
        printf("O vetor dado como entrada eh uma PA de razao %d ! ", ehPA); 
    }
    return 0; 
}

int teste_PA (int n, float *v){
    int valor = 0; 
    for(int i=0; i<n; i++){
        for(int pa=0; pa<=9; pa++){
            if ((v[i])== (v[0] + i*pa) ){
                valor = pa; 
            }
        }
    }
    return valor; 
}
*/ 

/*LISTA VETORES E ALOCACAO DINAMICA */
/* questao 9 */
#include <stdio.h> 
#include <stdlib.h> 


void criaAprovados(numAluno, int *v_matricula, float *v_notas, int *aprovado ); 

int main (void){
    /* Criar vetor matriculas */
    int quant; 
    printf("Digite a quantidade de alunos: "); 
    scanf("%d", quant);
    int vmatri[quant]; 

    /* Criar vetor notas */
    float vnotas[quant]; 

    /*variavel de aprovados*/
    int aprovados; 

    matriculas[quant]; 
    int *v= (int*)  malloc ( quant *sizeof(int)); 
    if (v == NULL) {
        printf("Memoria insuficiente.\n");
        exit(1); 
    }
    criaAprovados(quant, vmatri, vnotas, &aprovados, v); 
    free(v); 
    return 0; 
}

void criaAprovados(numAluno, int *v_matricula, float *v_notas, int *aprovado, int *v_aprovado ){
    for(int i=0; i<numAlunos; i++){
        int j=0; 
        if (v_notas>=5 ){
            v_aprovado[j]= v_matricula[i]; /* ??? */
            *aprovado++; 
        }
    }
    
}

