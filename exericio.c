#include <stdio.h>
#include <stdlib.h> 

/* QUESTAO 5 */

void palavraNova(char* palavra, char* palavranova) {
	int n = 0;
	for (int i = 0; palavra[i] != '\0'; i++) {
		int repetido = 0; 
		for (int j = 0; palavranova[j] != '\0'; j++) {
			if (palavra[i] == palavranova[j]){
				repetido = 1; 
				break; 
			}
		}
		if (repetido == 0) {
			palavranova[n] = palavra[i];
			n++;
		}
	}
	palavranova[n] = '\0';
}

	/* QUESTAO 6*/
	int ehPrefixo(char* s1, char* s2) {
		int valor;
		for (int i = 0; s2[i] = '\0'; i++) {
			if (s2[i] == s1[i]){
				valor = 1; 
			}
			else {
				valor = 0; 
				break; 
			}
		}
		if (s2[0] == '\0' || s1[0] == '\0') {
			valor = 1;
		}
		return valor; 
	}

    /* QUESTAO 7 */



/*MAIN */

void palavraNova(char* palavra, char* palavranova); 
int ehPrefixo(char* s1, char* s2);

int main(void) {
    /* TESTE QUESTAO 5 */

/*
	int n = 81; 
	char* palavra = (char*)malloc(n * sizeof(char)); 
	if (palavra == NULL) {
		printf("Erro na alocacao da memoria"); 
		exit(1); 
	}
	printf("Digite uma palavra: "); 
	scanf(" %80[^\n]", palavra); 
	char* nova_palavra = (char*)malloc(n * sizeof(char)); 
	if (nova_palavra == NULL) {
		printf("Erro na alocacao da memoria"); 
		exit(1); 
	}
	printf("Paralvra: %s\n", palavra); 
	palavraNova(palavra, nova_palavra);
	printf("Nova palavra: %s\n", nova_palavra); 
	
	free(palavra); 
	free(nova_palavra); 
*/

	/* TESTE QUESTAO 6 */
/*
	int n = 81; 
	char* s1 = (char*)malloc(n * sizeof(char)); 
	if (s1 == NULL) {
		printf("Erro na alocacao de memoria"); 
		exit(1); 
	}
    printf("Digite a primeira palavra: "); 
    scanf("% 80[^\n]", s1); 
	char* s2 = (char*)malloc(n * sizeof(char)); 
	if (s2 == NULL) {
		printf("Erro na alocacao de memoria"); 
		exit(1); 
	}
    printf("Digite a segunda palavra: "); 
    scanf("% 80[^\n]", s2); 

	int valor = ehPrefixo(s1, s2); 
	if (valor == 1) {
		printf("%s eh prefixo de %s", s2, s1); 
	}
	else {
		printf("%s NAO eh prefixo de %s", s2, s1);
	}
	free(s1); 
	free(s2); 
	
*/

    /* TESTE QUESTAO 7 */
    
    return 0;
}