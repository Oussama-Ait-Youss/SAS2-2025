#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

struct zoo
{
    int ID;
    char nom[50];
    char espece[50];
    int age;
    char habitat[50];
    float poids;
};

struct zoo T[200] = {
    {1, "Simba", "Lion", 5, "Savane", 190.5},
    {2, "Nala", "Lion", 4, "Savane", 175.0},
    {3, "ShereKhan", "Tigre", 8, "Jungle", 220.3},
    {4, "Baloo", "Ours", 40, "Foret", 310.0},
    {5, "Raja", "Elephant", 15, "Savane", 540.7},
    {6, "Marty", "Zebre", 6, "Savane", 300.2},
    {7, "Gloria", "Hippopotame", 10, "Riviere", 450.0},
    {8, "Alex", "Lion", 7, "Savane", 200.0},
    {9, "Julien", "Lemurien", 3, "Jungle", 12.5},
    {10, "Melman", "Girafe", 9, "Savane", 390.8},
    {11, "Timon", "Suricate", 2, "Desert", 1.2},
    {12, "Pumbaa", "Phacochère", 5, "Savane", 120.0},
    {13, "Scar", "Lion", 11, "Savane", 210.4},
    {14, "Kaa", "Serpent", 6, "Jungle", 45.0},
    {15, "Iko", "Perroquet", 4, "Jungle", 2.1},
    {16, "Dumbo", "Lion", 2, "Savane", 320.0},
    {17, "Kiki", "Lion", 7, "Savane", 25.0},
    {18, "Donatello", "Tortue", 40, "Riviere", 90.5},
    {19, "Polly", "Oiseau", 5, "Jungle", 1.5},
    {20, "Kong", "Gorille", 13, "Foret", 180.0},
    {21, "Raja", "Elephant", 15, "Savane", 540.7},
    {22, "Raja", "Elephant", 15, "Savane", 540.7},
    {23, "Raja", "Elephant", 15, "Savane", 540.7},
    {24, "Raja", "Elephant", 15, "Savane", 540.7},
};

// declaration des variables
char Carnivore[3][20] = {"Lion", "Tigre", "Serpent"};
char Herbivore[4][20] = {"Elephant", "Zebre", "Girafe", "Phacochère"};
char Omivore[6][20] = {"Ours", "Hippopotame", "Gorille", "Perroquet", "Tortue", "Suricate"};

int nb_animal = 24;
int loop = 1;
int user_input;
int found = 0;
int id_var = 25;

void clear()
{
    while (getchar() != '\n')
        ;
}

// fonction pour afficher le menu
int Menu()
{
    int user_input;
    char newline;

    printf("\n--------------      ZOO       -----------\n");
    printf("            By Oussama Ait Youss           \n");
    printf("____________________________________________");
    printf("\n##############      Menu      ##############\n");
    printf("|[1]-Ajouter un Animal.\n");
    printf("|[2]-Afficher les animaux.\n");
    printf("|[3]-Modifier un animal.\n");
    printf("|[4]-Supprimer un animal.\n");
    printf("|[5]-Rechercher un animal.\n");
    printf("|[6]-Statistiques.\n");
    printf("|[7]-Quitter.\n");
    printf("|[8]-Sauvegarder les donnees dans un fichier..\n");
    printf("|=============================================\n");
    printf("Entre ton choix: ");

    if (scanf("%d%c", &user_input, &newline) != 2 || newline != '\n')
    {
        // Clear input buffer
        while (getchar() != '\n');
        user_input = -1; // invalid input
    }


    return user_input;
}

// sort by name fonction
void sortbyname()
{

    struct zoo exchange;

    for (int i = 0; i < nb_animal - 1; i++)
    {
        /* code */
        for (int j = 0; j < nb_animal - i - 1; j++)
        {
            /* code */
            if (strcmp(T[j].nom, T[j + 1].nom) > 0)
            {
                /* code */
                exchange = T[j];
                T[j] = T[j + 1];
                T[j + 1] = exchange;
            }
        }
    }
}

void sortbyage()
{
    struct zoo exchange;

    for (int i = 0; i < nb_animal - 1; i++)
    {
        /* code */
        for (int j = 0; j < nb_animal - i - 1; j++)
        {
            /* code */
            if (T[j].age > T[j + 1].age)
            {
                /* code */
                exchange = T[j];
                T[j] = T[j + 1];
                T[j + 1] = exchange;
            }
        }
    }
}

// fonction pour ajouter un animal
void Ajouter_animal()
{
    int to_add;
    printf("combien animal tu doit ajouter :");
    scanf("%d", &to_add);
    for (int i = 0; i < to_add; i++)
    {
        /* code */
        T[nb_animal].ID = id_var++;
        printf("Animal  %d :\n", i + 1);
        printf("Entrez le nom :");
        scanf(" %[^\n]", T[nb_animal].nom);
        clear();
        printf("Entrez le espece :");
        scanf(" %[^\n]", T[nb_animal].espece);
        clear();
        printf("Entrez le age :");
        scanf(" %d", &T[nb_animal].age);
        clear();
        printf("Entrez le habitat :");
        scanf(" %[^\n]", T[nb_animal].habitat);
        clear();
        printf("Entrez le poids :");
        scanf("%f", &T[nb_animal].poids);
        clear();
        nb_animal++;
        printf("Animal Ajouter avec succes...\n");
    }
}

// modifier un animal

void Modifier_animal()
{
    int menu_choice;
    int input_id;
    int find = 0;

    printf("\n1 - Modifier l'habitat d'un animal.\n");
    printf("2 - Modifier age.\n");
    printf("3 - Modifier les deux.\n");
    printf("Entrez ton choix: ");
    scanf("%d", &menu_choice);

    printf("Entrez l'ID de l'animal: ");
    scanf("%d", &input_id);

    for (int i = 0; i < nb_animal; i++)
    {
        if (T[i].ID == input_id)
        {
            if (menu_choice == 1)
            {
                printf("Entrez le nouvel habitat: ");
                scanf(" %[^\n]", T[i].habitat); // assumes T[i].habitat is a char[]
            }
            else if (menu_choice == 2)
            {
                printf("Entrez le nouvel age: ");
                scanf("%d", &T[i].age); // assumes age is an int
            }
            else if (menu_choice == 3)
            {
                printf("Entrez le nouvel habitat: ");
                scanf(" %[^\n]", T[i].habitat);

                printf("Entrez le nouvel age: ");
                scanf("%d", &T[i].age);
            }

            find = 1;
            break; // stop looping once we find the animal
        }
    }

    if (!find)
    {
        printf("ID n existe pas...\n");
    }
}

// affichage de list
void Affichage_list()
{
    char habitat[20];
    struct zoo exchange;
    int to_affiche;
    char habitat_of_animal_to_search[20];
    printf("Que veux-tu Afficher ?\n");
    printf("1 - affiche la list complete\n");
    printf("2 - Triere par nom\n");
    printf("3 - Triere par age\n");
    printf("4 - Afficher uniquement les animaux d un habitat specifique\n");
    printf("Entrez ton choix :");
    scanf("%d", &to_affiche);
    clear();
    switch (to_affiche)
    {
    case 1:
        /* code */
        for (int i = 0; i < nb_animal; i++)
        {
            // verifier la categorier
            for (int j = 0; j < nb_animal; j++)
            {
                if (strstr(Carnivore[j], T[i].espece))
                {
                    /* code */
                    printf("Catigore : Carnivore\n");
                    break;
                }
                else if (strstr(Herbivore[j], T[i].espece))
                {
                    printf("Catigore : Herbivore\n");
                    break;
                }
                else if (strstr(Omivore[j], T[i].espece))
                {
                    printf("Catigore : Omivore\n");
                    break;
                }
            }

            printf("Nom        :%s\n", T[i].nom);
            printf("\033[1;33mID: %d\033[0m\n", T[i].ID);
            printf("Espece     : %s\n", T[i].espece);
            printf("Age        : %d\n", T[i].age);
            printf("\033[1;36mHabitat    : %s\n", T[i].habitat);
            printf("\033[1;32mPoids      : %.2f Kg\033[0m\n", T[i].poids);
            if (T[i].age > 20)
            {
                /* code */
                printf("\033[1;31mMessage :\natteint un age critique > 20...\033[0m \n");
            }
            printf("\033[1;37m---------------------------------\n");
        }

        break;

    case 2:

        sortbyname();
        for (int i = 0; i < nb_animal; i++)
        {

            // verifier la categorier
            for (int j = 0; j < nb_animal; j++)
            {
                if (strstr(Carnivore[j], T[i].espece))
                {
                    /* code */
                    printf("Catigore : Carnivore\n");
                    break;
                }
                else if (strstr(Herbivore[j], T[i].espece))
                {
                    printf("Catigore : Herbivore\n");
                    break;
                }
                else if (strstr(Omivore[j], T[i].espece))
                {
                    printf("Catigore : Omivore\n");
                    break;
                }
            }
            printf("Nom        :%s\n", T[i].nom);
            printf("\033[1;33mID: %d\033[0m\n", T[i].ID);
            printf("Espece     : %s\n", T[i].espece);
            printf("Age        : %d\n", T[i].age);
            printf("\033[1;36mHabitat    : %s\n", T[i].habitat);
            printf("\033[1;32mPoids      : %.2f Kg\033[0m\n", T[i].poids);
            if (T[i].age > 20)
            {
                /* code */
                printf("\033[1;31mMessage :\natteint un age critique > 20...\033[0m \n");
            }
            printf("\033[1;37m---------------------------------\n");
        }
        break;

    case 3:
        sortbyage();
        for (int i = 0; i < nb_animal; i++)
        {
            // verifier la categorier
            for (int j = 0; j < nb_animal; j++)
            {
                if (strstr(Carnivore[j], T[i].espece))
                {
                    /* code */
                    printf("Catigore : Carnivore\n");
                    break;
                }
                else if (strstr(Herbivore[j], T[i].espece))
                {
                    printf("Catigore : Herbivore\n");
                    break;
                }
                else if (strstr(Omivore[j], T[i].espece))
                {
                    printf("Catigore : Omivore\n");
                    break;
                }
            }
            printf("Nom        :%s\n", T[i].nom);
            printf("\033[1;33mID: %d\033[0m\n", T[i].ID);
            printf("Espece     : %s\n", T[i].espece);
            printf("Age        : %d\n", T[i].age);
            printf("\033[1;36mHabitat    : %s\n", T[i].habitat);
            printf("\033[1;32mPoids      : %.2f Kg\033[0m\n", T[i].poids);
            if (T[i].age > 20)
            {
                /* code */
                printf("\033[1;31mMessage :\natteint un age critique > 20...\033[0m \n");
            }
            printf("\033[1;37m---------------------------------\n");
        }

        break;

    case 4:
        printf("Entrez l'habitat:");
        scanf(" %[^\n]",&habitat);

        for (int i = 0; i < nb_animal; i++)
        {
            /* code */
            if (strcmp(T[i].habitat, habitat) == 0)
            {

                printf("Nom        :%s\n", T[i].nom);
                printf("\033[1;33mID: %d\033[0m\n", T[i].ID);
                printf("Espece     : %s\n", T[i].espece);
                printf("Age        : %d\n", T[i].age);
                printf("\033[1;36mHabitat    : %s\n", T[i].habitat);
                printf("\033[1;32mPoids      : %.2f Kg\033[0m\n", T[i].poids);
                if (T[i].age > 20)
                {
                    /* code */
                    printf("\033[1;31mMessage :\natteint un age critique > 20...\033[0m \n");
                }
                printf("---------------------------------\n");
            }
        }

        break;

    default:
        printf("Invalide input...\n");
        break;
    }
}

// suppresion des animeux
void Suppresion_animal()
{

    int id_of_animal_todelete = 0;
    char delete_vr;
    int found = 0;
    printf("Entrez l'ID de animal :");
    scanf("%d", &id_of_animal_todelete);
    for (int i = 0; i < nb_animal; i++)
    {
        /* code */
        if (T[i].ID == id_of_animal_todelete)
        {
            /* code */
            printf("Etes-vous sur de vouloir supprimer: (y-> yes/n-> no)");
            scanf(" %c",&delete_vr);
            clear();
            if (delete_vr == 'y' || delete_vr == 'Y')
            {
                T[i] = T[i + 1];
                nb_animal--;
                /* code */
            }
            found = 1;
            break;
        }
    }
    if (found)
    {
        /* code */
        printf("Suppression avec success...\n");
    }else{
        
        printf("Id pas trouve...");
    }
    
}

// Rechercher
void Rechercher_animal()
{
    int id_of_animal_to_search;
    int rechercher_user_input;
    char name_of_animal_to_search[20];
    char espece_of_animal_to_search[20];

    printf("1 - Rechercher par ID:\n");
    printf("2 - Rechercher par Nom:\n");
    printf("3 - Rechercher par Espece:\n");
    printf("Entrez ton choix:");
    scanf("%d", &rechercher_user_input);

    if (rechercher_user_input == 1)
    {
        /* code */
        printf("Entrez l'ID:");
        scanf("%d", &id_of_animal_to_search);
        for (int i = 0; i < nb_animal; i++)
        {
            /* code */
            if (T[i].ID == id_of_animal_to_search)
            {
                /* code */
                printf("\nNom        :\033[1;31m%s\033[0m \n", T[i].nom);
                printf("\033[1;33mID: %d\033[0m\n", T[i].ID);
                printf("Espece     : %s\n", T[i].espece);
                printf("Age        : %d\n", T[i].age);
                printf("\033[1;36mHabitat    : %s\n", T[i].habitat);
                printf("\033[1;32mPoids      : %.2f Kg\n", T[i].poids);
                printf("\n\033[1;37m---------------------------------\n");
                break;
            }
        }
    }
    else if (rechercher_user_input == 2)
    {
        printf("Entrez le nom:");
        scanf(" %[^\n]", &name_of_animal_to_search);
        for (int i = 0; i < nb_animal; i++)
        {
            /* code */
            if (strcmp(T[i].nom, name_of_animal_to_search) == 0)
            {
                /* code */
                printf("\nNom        :\033[1;31m%s\033[0m \n", T[i].nom);
                printf("\033[1;33mID: %d\033[0m\n", T[i].ID);
                printf("Espece     : %s\n", T[i].espece);
                printf("Age        : %d\n", T[i].age);
                printf("\033[1;36mHabitat    : %s\n", T[i].habitat);
                printf("\033[1;32mPoids      : %.2f Kg\n", T[i].poids);
                printf("\n\033[1;37m---------------------------------\n");
                break;
            }
        }
        /* code */
    }
    else if (rechercher_user_input == 3)
    {
        printf("Entrez espece:");
        scanf(" %[^\n]", &espece_of_animal_to_search);

        for (int i = 0; i < nb_animal; i++)
        {
            /* code */
            if (strcmp(T[i].espece, espece_of_animal_to_search) == 0)
            {
                /* code */
                printf("\nNom        :\033[1;31m%s\033[0m \n", T[i].nom);
                printf("\033[1;33mID: %d\033[0m\n", T[i].ID);
                printf("Espece     : %s\n", T[i].espece);
                printf("Age        : %d\n", T[i].age);
                printf("\033[1;36mHabitat    : %s\n", T[i].habitat);
                printf("\033[1;32mPoids      : %.2f Kg\n", T[i].poids);
                printf("\n\033[1;37m---------------------------------\n");
            }
        }
    }
}

void Statistique()
{
    int moyenne, S = 0;
    printf("Statistiques:\n");
    printf("Nombre total d animaux dans le zoo : %d\n", nb_animal);

    // calcul moyenne
    for (int i = 0; i < nb_animal; i++)
    {
        /* code */
        S += T[i].age;
    }

    printf("Age moyen des animaux : %d\n", S / nb_animal);

    // Plus vieux et plus jeune animal.
    sortbyage(); // sort by age

    printf("plus jeune animal :\n");
    for (int i = 0; i <= (nb_animal / 2); i++)
    {
        /* code */
        if (T[0].age == T[i].age)
        {
            /* code */
            printf("Nom        :\033[1;31m%s\033[0m \n", T[i].nom);
            printf("\033[1;33mID: %d\033[0m\n", T[i].ID);
            printf("Age        : %d", T[i].age);
            printf("\n\033[1;37m---------------------------------\n");
        }
    }

    printf(" plus vieux animal :\n");
    for (int i = (nb_animal / 2); i < nb_animal; i++)
    {
        if (T[nb_animal - 1].age == T[i].age)
        {
            printf("Nom        :\033[1;31m%s\033[0m \n", T[i].nom);
            printf("\033[1;33mID: %d\033[0m\n", T[i].ID);
            printf("Age        : %d", T[i].age);
            printf("\n\033[1;37m---------------------------------\n");
        }
    }


    struct espece
    {
        char espece[20];
        int counter; 
    };



    struct espece ex;
    int maxcounter = 0;
    int counter;

    for (int i = 0; i < nb_animal; i++)
    {
        /* code */
        counter = 1;
        for (int j = i + 1; j < nb_animal; j++)
        {
            /* code */
            if (strcmp(T[i].espece, T[j].espece) == 0)
            {
                /* code */
                counter++;
            }
        }
        if (counter > maxcounter)
        {
            /* code */
            maxcounter = counter;
            strcpy(ex.espece, T[i].espece);
            ex.counter = counter;
        }
    }

    printf("l espece plus representer : %s\n", ex.espece);
    printf("nombres de repitition : %d", ex.counter);
}

// Sauvegarder les données dans un fichier (pour persistance).
void fichier()
{
    FILE *file = fopen("animaux.csv", "w");
    for (int i = 0; i < nb_animal; i++)
    {
        /* code */
        fprintf(file, "Nom        :%s\n", T[i].nom);
        fprintf(file, "ID: %d\n", T[i].ID);
        fprintf(file, "Espece     : %s\n", T[i].espece);
        fprintf(file, "Age        : %d\n", T[i].age);
        fprintf(file, "Habitat    : %s\n", T[i].habitat);
        fprintf(file, "Poids      : %.2f Kg\n", T[i].poids);
    }
    fclose(file);
    printf("Fichier Avec Succes...\n");
}






int main()
{

    while (1)
    {
        /* code */
        user_input = Menu();
        switch (user_input)
        {
        case 1:
            /* code */
            Ajouter_animal();
            break;
        case 2:
            Affichage_list();
            break;
        case 3:
            Modifier_animal();
            clear();
            break;
        case 4:
            Suppresion_animal();
            break;
        case 5:
            Rechercher_animal();
            break;
        case 6:
            Statistique();
            break;
        case 7:
            printf("Au revoir...\n");
            exit(0);
            break;
        case 8:
            fichier();
            break;
        default:
            printf("invalide input...\n");
            break;
        }
    }

    return 0;
}