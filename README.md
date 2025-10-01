# Insertion en tête et en queue dans une liste simplement chaine circulaire
Exercice 4 du 2eme TP(devoir)

Ce programme C permet d'insérer des éléments en tête dans une liste l1 et des éléments en queue dans une liste l2 qui sont des listes chainées simplement circulaire.

Dans la partie déclaration, on définit la structure de la liste comme suit:
typedef struct liste{
     float val;
     struct liste*suivant ;
 }*liste;
 Puis on définit une liste l comme variable globale.
 
-FONCTIONS DU PROGRAMME 
Ce programme contient 4 fonctions :

  *insert_tete: pour effectuer l'insertion des éléments en tête.Ici on alloue d'abord une cellule "nouv" de type liste et on lui attribue une x. Puis, si la liste est NULL, la liste l pointe sur nouv et nouv->suivant sur l; sinon on crée un pointeur p qui parcourt la liste l jusqu'au dernier élément et ensuite nouv->suivant pointe sur l, l pointe sur nouv et p->suivant sur l et on retourne l.

  *insert _fin: insère les éléments en fin. Ici on alloue une cellule "nouv" de type liste et on lui attribue une valeur x. Puis, si la liste l est vide, l pointe sur nouv et nouv->suivant sur l; sinon on crée un pointeur p de type liste qui va parcourir la liste l jusqu'au dernier élément avant de revenir sur la tête, ensuite p->suivant pointe sur nouv et nouv->suivant sur l et on retourne l.

  *afficher_liste: qui va liste les éléments contenu dans la liste grâce à un pointeur qui va la parcourir jusqu'au dernier élément de la liste avant de revenir sur la tête de liste 

  *supp_list: qui supprime les listes et toutes leurs cellules afin de libérer les cases mémoires à l'aide de la fonction free().

-MAIN
Dans le main, on crée deux listes l1 pour l'insertion en tête et l2 pour l'insertion en fin et on les initialisent à NULL et on déclare des variables n,m qui sont respectivement le nombre d'éléments de la liste l1 et le nombre d'éléments de la liste l2. On effectue d'abord l'insertion en tête. En effet, le programme nous demande d'abord le nombre d'éléments à ajouter dans la liste qui doit être positif, puis à l'aide d'une boucle for on entre les éléments n fois et pour chaque iteration on insère directement l'élément entré dans la liste (l1=insert_tete(l1,a);), ensuite le programme nous affiche la liste enregistré.
Ensuite on effectue l'insertion en fin qui se passe exactement comme l'insertion en tête sauf que maintenant dans la boucle c'est l2=insert_fin(l2,a); et on affiche la liste créée.
En conclusion, le programme effectue une suppression des listes l1 et l2 avec la totalité de leur cellule afin de libérer l'espace mémoire allouée.
  
