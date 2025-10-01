#include<stdio.h>
#include<stdlib.h>

typedef struct liste{
	float val;
	struct liste * suivant;
}*list;
list l=NULL;

list insert_tete(list l, float x){
	list nouv=(list)malloc(sizeof(struct liste));
	if(nouv==NULL){
		perror("->");
		exit(-1);
	}
	nouv->val=x;
	if(l==NULL){
		l=nouv;
		nouv->suivant=l;
		return l;
	}	
	list p=l;
	while(p->suivant!=l){
		p=p->suivant;
	}	
	nouv->suivant=l;
	l=nouv;
	p->suivant=l;
	return l;
}

list insert_fin(list l, float x){
	list nouv=(list)malloc(sizeof(struct liste));
	if(nouv==NULL){
		perror("->");
		exit(-1);
	}
	nouv->val=x;
	if(l==NULL){
		l=nouv;
		nouv->suivant=l;
		return l;
	}
	list p=l;
	while(p->suivant!=l){
		p=p->suivant;
	}
	p->suivant=nouv;
	nouv->suivant=l;
	return l;
}

void afficher_liste(list l){
	if(l==NULL){
		printf("\nNULL\n");
		
	}else{
		list p=l;
		while(p->suivant!=l){
			printf("%.2f -> ",p->val);
			p=p->suivant;
		}
		printf("%.2f -> retour en tete\n",p->val);
	}
	return;
}

list supp_list(list l){
	if(l==NULL ){
		return NULL;
	}else if(l->suivant==l){
		free(l);				
	}else{
		list p;
		list t=l;
		while(t->suivant!=l){
			t=t->suivant;
		}	
		while(l!=t){
			p=l;
			l=l->suivant;
			free(p);
		}
	}
	return l;
}
	
int main(){
	int n,m;
	float a;
	list l1=NULL;
	list l2=NULL;
	printf("\n\tPROGRAMME D'INSERTION EN TETE ET EN FIN DANS UNE LISTE SIMPLEMENT CHAINE CIRCULAIRE.\n\n");
	
	//Insertion en tete
	printf("\n\tInsertion en tete.....\n\n");
	 do{
		printf("Entrez le nombre d'element a ajouter dans la chainee: ");
		scanf("%d",&n);
	}while(n<0);
	printf("\n\n");
	
	//Enregistrement des elements de la chaine
	for(int i=0;i<n;i++){
		printf("Entrez l'element %d de la chaine sachant qu'on insère en tete: ",i+1);
		scanf("%f",&a);
		l1=insert_tete(l1,a);
	}
	printf("\n");
	
	//Affichage
	printf("\nVoici la liste que vous avez enregistrer\n ");
	afficher_liste(l1);
	printf("\nAffichage terminé\n");
	
	//Insertion en fin
	printf("\n\n");
	printf("\n\tInsertion en fin......\n\n");
	do{
		printf("Entrez le nombre d'element a ajouter dans la liste chainee: ");
		scanf("%d",&m);
	}while(m<0);
	printf("\n\n");
	
	//Enregistrement des elements de la chaine
	for(int i=0;i<m;i++){
		printf("Entrez l'element %d de la chaine sachant qu'on insère en fin: ",i+1);
		scanf("%f",&a);
		l2=insert_fin(l2,a);
	}
	printf("\n");
	
	//Affichage de la liste
	printf("\nVoici la liste que vous avez enregistrer\n ");
	afficher_liste(l2);
	printf("\nAffichage terminé\n\n");
	
	//Suppression des listes l1 et l2
	l1=supp_list(l1);
	l2=supp_list(l2);
	return 0;
}	
				




