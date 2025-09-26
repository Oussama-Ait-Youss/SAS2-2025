#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    int user_input;
    char Titre[100][100] = {{0}}, Auteur[100][100] = {{0}};
    float Prix[100] = {0};
    int Quantite[100] = {0};
    int number_of_books_added = 0;
    char user_titre_input[50];
    char update_input[50];
    do
    {
        /* code */
        printf("\n=============================================\n");
        printf("#### Gestion de Stock dans une Librairie ####");
        printf("\n=============================================\n");
        printf("-------- Created By Oussama Ait Youss -------\n");
        printf("------------------- Menu --------------------\n");
        printf(" 1. Ajouter un livre au stock.\n 2. Afficher tous les livres disponibles.\n 3. Rechercher un livre par son titre.\n 4. Mettre a jour la quantite d'un livre.\n 5. Supprimer un livre du stock.\n 6. Afficher le nombre total de livres en stock.\n 7. Exit...\n");
        printf("---------------------------------------------\n");
        printf("Enter an nombre:");

        while (1)
        {
            if (scanf("%d", &user_input) != 1)
            {
                printf("\n=============================================\n");
                printf("#### Gestion de Stock dans une Librairie ####");
                printf("\n=============================================\n");
                printf("-------- Created By Oussama Ait Youss -------\n");
                printf("------------------- Menu --------------------\n");
                printf(" 1. Ajouter un livre au stock.\n 2. Afficher tous les livres disponibles.\n 3. Rechercher un livre par son titre.\n 4. Mettre a jour la quantite d'un livre.\n 5. Supprimer un livre du stock.\n 6. Afficher le nombre total de livres en stock.\n 7. Exit...\n");
                printf("---------------------------------------------\n");
                printf("Entre a Valide nombre !!! :");

                while (getchar() != '\n')
                    ;
            }
            else if (user_input < 1 || user_input > 7)
            {
                printf("\n=============================================\n");
                printf("#### Gestion de Stock dans une Librairie ####");
                printf("\n=============================================\n");
                printf("-------- Created By Oussama Ait Youss -------\n");
                printf("------------------- Menu --------------------\n");
                printf(" 1. Ajouter un livre au stock.\n 2. Afficher tous les livres disponibles.\n 3. Rechercher un livre par son titre.\n 4. Mettre a jour la quantite d'un livre.\n 5. Supprimer un livre du stock.\n 6. Afficher le nombre total de livres en stock.\n 7. Exit...\n");
                printf("---------------------------------------------\n");
                printf("enter a number between 1 and 7: ");
            }
            else
            {
                break;
            }
        }

        if (user_input == 1)
        {
            char user_title_input[50], user_auteur_input[50];
            float user_price_input;
            int user_quantity_input;
            int book_found = 0;

            /* code */
            printf("Entre the name of the book:");
            /* code */
            scanf(" %[^\n]", &user_title_input);

            /* code */
            printf("Entre the Author of the book:");
            /* code */
            scanf(" %[^\n]", &user_auteur_input);

            /* code */
            printf("Entrez le prix :");
            /* code */
            scanf(" %f", &user_price_input);

            /* code */
            printf("Entre la quantite:");

            /* code */
            scanf("%d", &user_quantity_input);

            for (int i = 0; i < number_of_books_added; i++)
            {
                if (strcmp(Titre[i], user_title_input) == 0 &&
                    strcmp(Auteur[i], user_auteur_input) == 0)
                {
                    book_found = 1;
                    break;
                }
            }
            if (book_found)
            {
                /* code */
                printf("The book is already exist...");
            }
            else
            {
                strcpy(Titre[number_of_books_added], user_title_input);
                strcpy(Auteur[number_of_books_added], user_auteur_input);
                Prix[number_of_books_added] = user_price_input;
                Quantite[number_of_books_added] = user_quantity_input;
                printf("Book Added Succefully...");
                number_of_books_added++;
            }
        }
        else if (user_input == 2)
        {
            if (number_of_books_added == 0)
            {
                /* code */
                printf("0 Book found !!!!\n");
            }
            else
            {
                for (int i = 0; i < number_of_books_added; i++)
                {

                    {
                        /* code */
                        // if (strlen(Titre[i]) != 0)

                        /* code */
                        printf("----- Book %d ----\n", i);
                        printf("Titre : %s\n", Titre[i]);
                        printf("Auteur : %s\n", Auteur[i]);
                        printf("Prix : %.2f DH\n", Prix[i]);
                        printf("Quantite : %d Copy\n", Quantite[i]);
                    }
                }
            }
        }

        else if (user_input == 3)
        {
            int book_finding = 0;
            printf("Enter the Title of the Book you want search for:");
            scanf(" %[^\n]", &user_titre_input);
            for (int i = 0; i < number_of_books_added; i++)
            {
                /* code */
                if (strcmp(Titre[i], user_titre_input) == 0)
                {
                    /* code */
                    printf("\n----- Book %d ----\n", i);
                    printf("Titre : %s\n", Titre[i]);
                    printf("Auteur : %s\n", Auteur[i]);
                    printf("Prix : %.2f DH\n", Prix[i]);
                    printf("Quantite : %d Copy\n", Quantite[i]);
                    book_finding = 1;
                    break;
                }
                //else
                //{
                
                //}
            }
            if (!book_finding)
                printf("Book not Found...");
            
        }
        else if (user_input == 4)
        {
            printf("Enter the Title of the Book you want search for:");
            scanf(" %[^\n]", &update_input);
            for (int i = 0; i < number_of_books_added; i++)
            {
                /* code */
                if (strcmp(Titre[i], update_input) == 0)
                {
                    /* code */
                    int new_quantity = 0;
                    printf("Entre the new Quantity :");
                    scanf("%d", &new_quantity);
                    Quantite[i] = new_quantity;
                    printf("Update Successfully...");
                    printf("\n----- Book %d ----\n", i);
                    printf("Titre : %s\n", Titre[i]);
                    printf("Auteur : %s\n", Auteur[i]);
                    printf("Prix : %.2f DH\n", Prix[i]);
                    printf("Quantite : %d Copy\n", Quantite[i]);
                    break;
                }
                else
                {
                    printf("Book not Found...");
                    break;
                }
            }
        }
        else if (user_input == 5)
        {
            printf("Enter the Title of the Book you want Delete :");
            scanf(" %[^\n]", &update_input);
            for (int i = 0; i < number_of_books_added; i++)
            {
                /* code */ int j;
                if (strcmp(Titre[i], update_input) == 0)
                {
                    /* code */
                    for (j = 0; j < number_of_books_added; j++)
                    {
                        /* code */
                        // Titre[i][j] = '\0';
                        // Auteur[i][j] = '\0';
                        // Prix[i] = 0;
                        // Quantite[i] = 0;
                        strcpy(Titre[j], Titre[j + 1]);
                        strcpy(Auteur[j], Auteur[j + 1]);
                        Prix[j] = Prix[i + 1];
                        Quantite[j] = Quantite[j + 1];
                    }
                    number_of_books_added--;
                    printf("Book Deleted succefully...");
                    break;
                }
                else
                {
                    printf("Book not Found...");
                    break;
                }
            }
        }
        else if (user_input == 6)
        {
            int book_total = 0;

            for (int i = 0; i < number_of_books_added; i++)
            {
                /* code */
                book_total += Quantite[i];
            }
            printf("Nombres of Books : %d", book_total);
        }
        else if (user_input == 7)
        {
            printf("GoodBye...");
            exit(0);
        }
        else
        {
            int user_input;
            printf("Invalide Input...");
        }

    } while (true);
}
