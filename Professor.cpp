#include <stdio.h>
#define MAX 40
int main (){
int op,i,ra[MAX], cadastrados=0; float pa[MAX], ex[MAX];

while (1){
	printf ("Cadastrados %d\n\n",cadastrados);
	printf ("1) Incluir\n2) Mostrar\n3) Sair\nOpcao...: ");
	scanf ("%d",&op);
	switch (op){
		case 1: if (cadastrados < MAX){
					printf ("Digite o RA, PARCIAL e EXAME do aluno %d: ",cadastrados + 1);
			    	scanf ("%d%f%f",&ra[cadastrados],&pa[cadastrados],&ex[cadastrados]);
			    	cadastrados++;
			    }
			    else printf ("Lista cheia \n");
			    break;
		case 2: printf ("RA\tPARCIAL\tEXAME\tMEDIA\tSTATUS\n\n");
				for (i=0; i < cadastrados; i++)
					printf ("%d\t%.1f\t%.1f\t%.1f\t%s\n",
							ra[i], pa[i], ex[i], pa[i]*0.4 + ex[i]*0.6, (pa[i]*0.4 + ex[i]*0.6)<5.0?"APR":"REP"); 
			    break;
		case 3: printf ("\n\nSaindo \n\n");
				break;
		default: printf ("1, 2 ou 3 Fi\n");
			    break;
	  
	}
	if (op==3)
		break;
	}	
}