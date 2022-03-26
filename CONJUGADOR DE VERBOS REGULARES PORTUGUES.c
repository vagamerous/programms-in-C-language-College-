/* 
TERCEIRO TRABALHO DE PROGRAMAÇÃO - VETOR E MATRIZ
- QUESTÃO 1 -

Participantes:
- Diogo Marques
- Gabriel Vasconcellos
- Gabrielle Nogueira
- Igor Toste
- Isaque Soares

*/
#include <string.h>
#include <stdio.h>

main(){
	char verbo[11];
	char verbo1[11];
	char verbo2[11];
	char verbo3[11];
	char verbo4[11];
	char verbo5[11];
	char verbo6[11];
	int i;
	int c;
	int nv;
	char gq[] = "gqc";  
	char term[] = "r";
	char prim_s_pres[1] = "o";
	char vazio[1] = " ";
	char seg_s_pres[2] = "as";
	char ter_s_pres[1] = "a";
	char prim_p_pres[5] = "amos";
	char seg_p_pres[3] = "ais";
	char ter_p_pres[2] = "am";
	char sc_seg_s_pres[2] = "es";
	char sc_ter_s_pres[1] = "e";
	char sc_prim_p_pres[5] = "emos";
	char sc_seg_p_pres[3] = "eis";
	char sc_ter_p_pres[2] = "em";
	char tc_seg_s_pres[2] = "es";
	char tc_ter_s_pres[1] = "e";
	char tc_prim_p_pres[5] = "imos";
	char tc_seg_p_pres[3] = "is";
	char tc_ter_p_pres[2] = "em";
	char prim_s_pret[] = "uei";
	char seg_s_pret[] = "aste";
	char ter_s_pret[] = "ou";
	char prim_p_pret[] = "amos";
	char seg_p_pret[] = "astes";
	char ter_p_pret[] = "aram";
	char sc_prim_s_pret[] = "i";
	char sc_seg_s_pret[] = "este";
	char sc_ter_s_pret[] = "eu";
	char sc_prim_p_pret[] = "emos";
	char sc_seg_p_pret[] = "estes";
	char sc_ter_p_pret[] = "eram";
	char tc_prim_s_pret[] = "i";
	char tc_seg_s_pret[] = "iste";
	char tc_ter_s_pret[] = "iu";
	char tc_prim_p_pret[] = "imos";
	char tc_seg_p_pret[] = "istes";
	char tc_ter_p_pret[] = "iram";
	char prim_s_fut[] = "arei";
	char seg_s_fut[] = "aras";
	char ter_s_fut[] = "ara";
	char prim_p_fut[] = "aremos";
	char seg_p_fut[] = "areis";
	char ter_p_fut[] = "arao";
	char sc_prim_s_fut[] = "erei";
	char sc_seg_s_fut[] = "eras";
	char sc_ter_s_fut[] = "era";
	char sc_prim_p_fut[] = "eremos";
	char sc_seg_p_fut[] = "ereis";
	char sc_ter_p_fut[] = "erao";
	char tc_prim_s_fut[] = "irei";
	char tc_seg_s_fut[] = "iras";
	char tc_ter_s_fut[] = "ira";
	char tc_prim_p_fut[] = "iremos";
	char tc_seg_p_fut[] = "ireis";
	char tc_ter_p_fut[] = "irao";
	
	
	printf("Digite um verbo regular no infinitivo: ");
	
	scanf("%s", verbo);
	i = strlen(verbo) - 1;
	
	while (verbo[i] != term[0])
		{
		printf("O verbo deve estar no infinitivo. Tente novamente: ");
		scanf("%s", verbo);
		i = strlen(verbo) - 1;
		}
	
	strcpy(verbo1, verbo);
	strcpy(verbo2, verbo);
	strcpy(verbo3, verbo);
	strcpy(verbo4, verbo);
	strcpy(verbo5, verbo);
	strcpy(verbo6, verbo);
	c = strlen(verbo) - 2;
	nv = strlen(verbo) - 3;
	
	//primeira conjugacao
	if (verbo[c] == ter_s_pres[0] ){
		printf("Presente do indicativo\n");
		printf("Eu ");
		verbo1[i] = vazio[0];
		verbo1[c] = prim_s_pres[0];
		printf("%s\n", verbo1);
		printf("Tu ");
		verbo2[i] = seg_s_pres[1];
		verbo2[c] = seg_s_pres[0];
		printf("%s\n", verbo2);
		printf("Ele ");
		verbo3[i] = vazio[0];
		verbo3[c] = ter_s_pres[0];
		printf("%s\n", verbo3);
		printf("Nos ");
		verbo4[i] = prim_p_pres[1];
		verbo4[c] = prim_p_pres[0];
		strcat(verbo4, "os");
		printf("%s\n", verbo4);
		printf("Vos ");
		verbo5[i] = seg_p_pres[1];
		verbo5[c] = seg_p_pres[0];
		strcat(verbo5, "s");
		printf("%s\n", verbo5);
		printf("Eles ");
		verbo6[i] = ter_p_pres[1];
		verbo6[c] = ter_p_pres[0];
		printf("%s\n\n", verbo6);
		strcpy(verbo1, verbo);
		strcpy(verbo2, verbo);
		strcpy(verbo3, verbo);
		strcpy(verbo4, verbo);
		strcpy(verbo5, verbo);
		strcpy(verbo6, verbo);
		printf("Preterito Perfeito\n");
		printf("Eu ");
		if (verbo[nv] == gq[0]){
			verbo1[i] = prim_s_pret[1];
			verbo1[c] = prim_s_pret[0];
			strcat(verbo1, "i");
		} 
		
		if (verbo[nv] == gq[2]){
			verbo1[nv] = gq[1];
			verbo1[i] = prim_s_pret[1];
			verbo1[c] = prim_s_pret[0];
			strcat(verbo1, "i");
		}
		else{
			verbo1[i] = prim_s_pret[2];
			verbo1[c] = prim_s_pret[1];
		}
		
		printf("%s\n", verbo1);
		printf("Tu ");
		verbo2[i] = seg_s_pret[1];
		verbo2[c] = seg_s_pret[0];
		strcat(verbo2, "te");
		printf("%s\n", verbo2);
		printf("Ele ");
		verbo3[i] = ter_s_pret[1];
		verbo3[c] = ter_s_pret[0];
		printf("%s\n", verbo3);
		printf("Nos ");
		verbo4[i] = prim_p_pret[1];
		verbo4[c] = prim_p_pret[0];
		strcat(verbo4, "os");
		printf("%s\n", verbo4);
		printf("Vos ");
		verbo5[i] = seg_p_pret[1];
		verbo5[c] = seg_p_pret[0];
		strcat(verbo5, "tes");
		printf("%s\n", verbo5);
		printf("Eles ");
		verbo6[i] = ter_p_pret[1];
		verbo6[c] = ter_p_pret[0];
		strcat(verbo6, "am");
		printf("%s\n\n", verbo6);
		strcpy(verbo1, verbo);
		strcpy(verbo2, verbo);
		strcpy(verbo3, verbo);
		strcpy(verbo4, verbo);
		strcpy(verbo5, verbo);
		strcpy(verbo6, verbo);
		printf("Futuro do Presente\n");
		printf("Eu ");
		verbo1[i] = prim_s_fut[1];
		verbo1[c] = prim_s_fut[0];
		strcat(verbo1, "ei");
		printf("%s\n", verbo1);
		printf("Tu ");
		verbo2[i] = seg_s_fut[1];
		verbo2[c] = seg_s_fut[0];
		strcat(verbo2, "as");
		printf("%s\n", verbo2);
		printf("Ele ");
		verbo3[i] = ter_s_fut[1];
		verbo3[c] = ter_s_fut[0];
		strcat(verbo3, "a");
		printf("%s\n", verbo3);
		printf("Nos ");
		verbo4[i] = prim_p_fut[1];
		verbo4[c] = prim_p_fut[0];
		strcat(verbo4, "emos");
		printf("%s\n", verbo4);
		printf("Vos ");
		verbo5[i] = seg_p_fut[1];
		verbo5[c] = seg_p_fut[0];
		strcat(verbo5, "eis");
		printf("%s\n", verbo5);
		printf("Eles ");
		verbo6[i] = ter_p_fut[1];
		verbo6[c] = ter_p_fut[0];
		strcat(verbo6, "ao");
		printf("%s\n", verbo6);
		
	}
	
	//segunda conjugacao	
	if (verbo[c] == tc_ter_s_pres[0] ){
		printf("Presente do indicativo\n");
		printf("Eu ");
		verbo1[i] = vazio[0];
		verbo1[c] = prim_s_pres[0];
		printf("%s\n", verbo1);
		printf("Tu ");
		verbo2[i] = sc_seg_s_pres[1];
		verbo2[c] = sc_seg_s_pres[0];
		printf("%s\n", verbo2);
		printf("Ele ");
		verbo3[i] = vazio[0];
		verbo3[c] = sc_ter_s_pres[0];
		printf("%s\n", verbo3);
		printf("Nos ");
		verbo4[i] = sc_prim_p_pres[1];
		verbo4[c] = sc_prim_p_pres[0];
		strcat(verbo4, "os");
		printf("%s\n", verbo4);
		printf("Vos ");
		verbo5[i] = sc_seg_p_pres[1];
		verbo5[c] = sc_seg_p_pres[0];
		strcat(verbo5, "s");
		printf("%s\n", verbo5);
		printf("Eles ");
		verbo6[i] = sc_ter_p_pres[1];
		verbo6[c] = sc_ter_p_pres[0];
		printf("%s\n\n", verbo6);
		strcpy(verbo1, verbo);
		strcpy(verbo2, verbo);
		strcpy(verbo3, verbo);
		strcpy(verbo4, verbo);
		strcpy(verbo5, verbo);
		strcpy(verbo6, verbo);
		printf("Preterito Perfeito\n");
		printf("Eu ");
		verbo1[i] = vazio[0];
		verbo1[c] = sc_prim_s_pret[0];
		printf("%s\n", verbo1);
		printf("Tu ");
		verbo2[i] = sc_seg_s_pret[1];
		verbo2[c] = sc_seg_s_pret[0];
		strcat(verbo2, "te");
		printf("%s\n", verbo2);
		printf("Ele ");
		verbo3[i] = sc_ter_s_pret[1];
		verbo3[c] = sc_ter_s_pret[0];
		printf("%s\n", verbo3);
		printf("Nos ");
		verbo4[i] = sc_prim_p_pret[1];
		verbo4[c] = sc_prim_p_pret[0];
		strcat(verbo4, "os");
		printf("%s\n", verbo4);
		printf("Vos ");
		verbo5[i] = sc_seg_p_pret[1];
		verbo5[c] = sc_seg_p_pret[0];
		strcat(verbo5, "tes");
		printf("%s\n", verbo5);
		printf("Eles ");
		verbo6[i] = sc_ter_p_pret[1];
		verbo6[c] = sc_ter_p_pret[0];
		strcat(verbo6, "am");
		printf("%s\n\n", verbo6);
		strcpy(verbo1, verbo);
		strcpy(verbo2, verbo);
		strcpy(verbo3, verbo);
		strcpy(verbo4, verbo);
		strcpy(verbo5, verbo);
		strcpy(verbo6, verbo);
		printf("Futuro do Presente\n");
		printf("Eu ");
		verbo1[i] = sc_prim_s_fut[1];
		verbo1[c] = sc_prim_s_fut[0];
		strcat(verbo1, "ei");
		printf("%s\n", verbo1);
		printf("Tu ");
		verbo2[i] = sc_seg_s_fut[1];
		verbo2[c] = sc_seg_s_fut[0];
		strcat(verbo2, "as");
		printf("%s\n", verbo2);
		printf("Ele ");
		verbo3[i] = sc_ter_s_fut[1];
		verbo3[c] = sc_ter_s_fut[0];
		strcat(verbo3, "a");
		printf("%s\n", verbo3);
		printf("Nos ");
		verbo4[i] = sc_prim_p_fut[1];
		verbo4[c] = sc_prim_p_fut[0];
		strcat(verbo4, "emos");
		printf("%s\n", verbo4);
		printf("Vos ");
		verbo5[i] = sc_seg_p_fut[1];
		verbo5[c] = sc_seg_p_fut[0];
		strcat(verbo5, "eis");
		printf("%s\n", verbo5);
		printf("Eles ");
		verbo6[i] = sc_ter_p_fut[1];
		verbo6[c] = sc_ter_p_fut[0];
		strcat(verbo6, "ao");
		printf("%s\n", verbo6);
		
	}
	//terceira conjugacao
	if (verbo[c] == tc_seg_p_pres[0] ){
		printf("Presente do indicativo\n");
		printf("Eu ");
		verbo1[i] = vazio[0];
		verbo1[c] = prim_s_pres[0];
		printf("%s\n", verbo1);
		printf("Tu ");
		verbo2[i] = tc_seg_s_pres[1];
		verbo2[c] = tc_seg_s_pres[0];
		printf("%s\n", verbo2);
		printf("Ele ");
		verbo3[i] = vazio[0];
		verbo3[c] = tc_ter_s_pres[0];
		printf("%s\n", verbo3);
		printf("Nos ");
		verbo4[i] = tc_prim_p_pres[1];
		verbo4[c] = tc_prim_p_pres[0];
		strcat(verbo4, "os");
		printf("%s\n", verbo4);
		printf("Vos ");
		verbo5[i] = tc_seg_p_pres[1];
		verbo5[c] = tc_seg_p_pres[0];
		printf("%s\n", verbo5);
		printf("Eles ");
		verbo6[i] = tc_ter_p_pres[1];
		verbo6[c] = tc_ter_p_pres[0];
		printf("%s\n\n", verbo6);
		strcpy(verbo1, verbo);
		strcpy(verbo2, verbo);
		strcpy(verbo3, verbo);
		strcpy(verbo4, verbo);
		strcpy(verbo5, verbo);
		strcpy(verbo6, verbo);
		printf("Preterito Perfeito\n");
		printf("Eu ");
		verbo1[i] = vazio[0];
		verbo1[c] = tc_prim_s_pret[0];
		printf("%s\n", verbo1);
		printf("Tu ");
		verbo2[i] = tc_seg_s_pret[1];
		verbo2[c] = tc_seg_s_pret[0];
		strcat(verbo2, "te" );
		printf("%s\n", verbo2);
		printf("Ele ");
		verbo3[i] = tc_ter_s_pret[1];
		verbo3[c] = tc_ter_s_pret[0];
		printf("%s\n", verbo3);
		printf("Nos ");
		verbo4[i] = tc_prim_p_pret[1];
		verbo4[c] = tc_prim_p_pret[0];
		strcat(verbo4, "os");
		printf("%s\n", verbo4);
		printf("Vos ");
		verbo5[i] = tc_seg_p_pret[1];
		verbo5[c] = tc_seg_p_pret[0];
		strcat(verbo5, "tes");
		printf("%s\n", verbo5);
		printf("Eles ");
		verbo6[i] = tc_ter_p_pret[1];
		verbo6[c] = tc_ter_p_pret[0];
		strcat(verbo6, "am");
		printf("%s\n\n", verbo6);
		strcpy(verbo1, verbo);
		strcpy(verbo2, verbo);
		strcpy(verbo3, verbo);
		strcpy(verbo4, verbo);
		strcpy(verbo5, verbo);
		strcpy(verbo6, verbo);
		printf("Futuro do Presente\n");
		printf("Eu ");
		verbo1[i] = tc_prim_s_fut[1];
		verbo1[c] = tc_prim_s_fut[0];
		strcat(verbo1, "ei");
		printf("%s\n", verbo1);
		printf("Tu ");
		verbo2[i] = tc_seg_s_fut[1];
		verbo2[c] = tc_seg_s_fut[0];
		strcat(verbo2, "as");
		printf("%s\n", verbo2);
		printf("Ele ");
		verbo3[i] = tc_ter_s_fut[1];
		verbo3[c] = tc_ter_s_fut[0];
		strcat(verbo3, "a");
		printf("%s\n", verbo3);
		printf("Nos ");
		verbo4[i] = tc_prim_p_fut[1];
		verbo4[c] = tc_prim_p_fut[0];
		strcat(verbo4, "emos");
		printf("%s\n", verbo4);
		printf("Vos ");
		verbo5[i] = tc_seg_p_fut[1];
		verbo5[c] = tc_seg_p_fut[0];
		strcat(verbo5, "eis");
		printf("%s\n", verbo5);
		printf("Eles ");
		verbo6[i] = tc_ter_p_fut[1];
		verbo6[c] = tc_ter_p_fut[0];
		strcat(verbo6, "ao");
		printf("%s\n", verbo6);
		
	}
	
	
	
	
	
	
	
	
	
}
 

