/* 

ALIEN VS HUNTER GAME

*/
char marciano[20]; 
char cacador[20];
int arvore_marc;
int arvore_atir_1;
int arvore_atir_2;
int arvore_atir_3;
int arvore_atir_4;
int arvore_atir_5;
const char* tiroCerto() {
	printf("O cacador acertou o marciano!");
}
const char* abducao() {
	return "O cacador foi aduzido pelo marciano e levado para Marte!";
}
const char* erro() {
	printf("Esta arvore nao existe");
}

main(){
	printf("Insira o nome do marciano: ");
	scanf("%s", marciano);
	printf("Insira o nome do cacador:");
	scanf("%s", cacador);
	printf("%s", marciano);
	printf(", sua vez de jogar!\n");
	printf("Escolha uma arvore entre 1 e 100 para se esconder do cacador: ");
	scanf("%d", &arvore_marc);
	if (arvore_marc < 1 || arvore_marc > 100)
		return erro();
	printf("%s, agora e sua vez! Escolha uma arvore entre 1 e 100 para atirar: ", cacador);
	scanf("%d", &arvore_atir_1);
	if (arvore_atir_1 < 1 || arvore_atir_1 > 100)
		return erro();
	if (arvore_atir_1 == arvore_marc)
		return tiroCerto();
	else 
	{
	    if (arvore_atir_1 > arvore_marc)
			printf("%s diz: estou mais a esquerda!\n", marciano);
		else if (arvore_atir_1 < arvore_marc)
			printf("%s diz: estou mais a direita!\n", marciano);
	}
	printf("%s, escolha outra arvore entre 1 e 100 para atirar: ", cacador);
	scanf("%d", &arvore_atir_2);
	if (arvore_atir_2 < 1 || arvore_atir_2 > 100)
		return erro();
	if (arvore_atir_2 == arvore_marc)
		return tiroCerto();
	else 
	{
		if (arvore_atir_2 > arvore_marc)
			printf("%s diz: estou mais a esquerda!\n", marciano);
		else if (arvore_atir_2 < arvore_marc)
			printf("%s diz: estou mais a direita!\n", marciano);
	}
	
	printf("%s, escolha outra arvore entre 1 e 100 para atirar: ", cacador);
	scanf("%d", &arvore_atir_3);
	if (arvore_atir_3 < 1 || arvore_atir_3 > 100)
		return erro();
	if (arvore_atir_3 == arvore_marc)
		return tiroCerto();
	else 
	{
		if (arvore_atir_3 > arvore_marc)
			printf("%s diz: estou mais a esquerda!\n", marciano);
		else if (arvore_atir_3 < arvore_marc)
			printf("%s diz: estou mais a direita!\n", marciano);
	}
	
	printf("%s, escolha outra arvore entre 1 e 100 para atirar: ", cacador);
	scanf("%d", &arvore_atir_4);
	if (arvore_atir_4 < 1 || arvore_atir_4 > 100)
		return erro();
	if (arvore_atir_4 == arvore_marc)
		return tiroCerto();
	else 
	{
		if (arvore_atir_4 > arvore_marc)
			printf("%s diz: estou mais a esquerda!\n", marciano);
		else if (arvore_atir_4 < arvore_marc)
			printf("%s diz: estou mais a direita!\n", marciano);
	}
	
	printf("%s, escolha outra arvore entre 1 e 100 para atirar: ", cacador);
	scanf("%d", &arvore_atir_5);
	if (arvore_atir_5 < 1 || arvore_atir_5 > 100)
		return erro();
	if (arvore_atir_5 == arvore_marc)
		return tiroCerto();
	else
		printf("%s", abducao());
	
	
			
	

}
