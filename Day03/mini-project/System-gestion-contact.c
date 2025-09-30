#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>






struct Contact
{
    /* data */
    char Nom[20];
    char Tele[20];
    char Email[50];
};





int main()
{
    char user_input;
    char user_mail_input[30];
    int number_of_contacts = 0;
    struct Contact cont[100];
    char nomcontactmodif[20];
    int found = 0;

    while (1)
    {
        /* code */
        // Menu
        printf("\n ==========================================\n");
        printf("#### Systeme de Gestion de Contacts ####\n");
        printf("\n ==========================================\n");
        printf("1 - Ajouter des contacts\n");
        printf("2 - Modification d'un contact\n");
        printf("3 - suppression d'un contact\n");
        printf("4 - Rechercher d'un contact\n");
        printf("5 - Afficher tous les contacts\n");
        printf("6 - Quite le programme\n");
        printf("Entrer votre choix (1-6): ");
        printf("\n ==========================================\n");

        if (scanf("%d", &user_input) != 0)
        {
            /* code */
        }
        else
        {
            while (getchar() != '\n') // Clear invalid input
                user_input = -1;      // Set to an invalid choice
        }
        // scanf("%d",&user_input);

        switch (user_input)
        {
        case 1:

            // 1 - Ajouter des contacts
            number_of_contacts++;
            /* code */
            printf("Contact %d:\n", number_of_contacts);
            printf("Entrer le Nom:");
            scanf(" %[^\n]", cont[number_of_contacts - 1].Nom);

            int valid;
            do
            {
                valid = 0;
                printf("Entrer le telephone:");
                scanf(" %[^\n]", cont[number_of_contacts - 1].Tele);
                // check if the number is already exist
                for (int i = 0; i < number_of_contacts - 1; i++)
                {
                    /* code */
                    if (strcmp(cont[i].Tele, cont[number_of_contacts - 1].Tele) == 0)
                    {
                        printf("Ce numero existe deja. Veuillez entrer un numero unique.\n");
                        valid = 1; // mark as invalid (duplicate found)
                        break;
                    }
                }

                // check the lenght of the tele number
                if (strlen(cont[number_of_contacts - 1].Tele) != 10)
                {
                    printf("Le numero doit contenir exactement 10 chiffres.\n");
                    valid = 1; // invalid input
                }
                else if (cont[number_of_contacts - 1].Tele[0] != '0')
                {
                    printf("Le numero doit commencer par 0.\n");
                    valid = 1; // invalid input
                }

            } while (valid == 1);

            // printf("Entrer le Email: ");
            // scanf(" %[^\n]", cont[number_of_contacts - 1].Email);

            while (true)
            {
                int valide = 0;
                printf("Entrez le  Email: ");
                scanf(" %[^\n]", user_mail_input);
                /* code */
                /* code */

                for (int i = 0; i < number_of_contacts; i++)
                {
                    /* code */
                    if (strcmp(cont[i].Email, user_mail_input) == 0)
                    {
                        /* code */
                        valide = 1;
                    }
                }
                if (valide)
                {
                    /* code */
                    printf("Email Already exist...\n");
                }
                else
                {
                    if (strstr(user_mail_input, "@gmail.com") && strlen(user_mail_input) > 13)
                    {
                        /* code */
                        printf("Ajouter Avec Success...\n");
                        strcpy(cont[number_of_contacts - 1].Email, user_mail_input);
                        break;
                    }
                    else
                    {
                        printf("Invalide Format!!!\n");
                    }
                }
            }

            break;
        case 2:

            // 2 - Modification d'un contact

            printf("Entrer le nom du contact a modifier:");
            scanf(" %[^\n]", nomcontactmodif);

            for (int i = 0; i < number_of_contacts; i++)
            {
                /* code */
                if (strcmp(cont[i].Nom, nomcontactmodif) == 0)
                {
                    // modifier le tele
                    int valid;
                    do
                    {
                        valid = 0;
                        printf("Entrer le telephone:");
                        scanf(" %[^\n]", cont[number_of_contacts - 1].Tele);
                        // check if the number is already exist
                        for (int i = 0; i < number_of_contacts - 1; i++)
                        {
                            /* code */
                            if (strcmp(cont[i].Tele, cont[number_of_contacts - 1].Tele) == 0)
                            {
                                printf("Ce numero existe deja. Veuillez entrer un numero unique.\n");
                                valid = 1; // mark as invalid (duplicate found)
                                break;
                            }
                        }

                        // check the lenght of the tele number
                        if (strlen(cont[number_of_contacts - 1].Tele) != 10)
                        {
                            printf("Le numero doit contenir exactement 10 chiffres.\n");
                            valid = 1; // invalid input
                        }
                        else if (cont[number_of_contacts - 1].Tele[0] != '0')
                        {
                            printf("Le numero doit commencer par 0.\n");
                            valid = 1; // invalid input
                        }

                    } while (valid == 1);

                    while (true)
                    {
                        printf("Entrez le  Email: ");
                        scanf(" %[^\n]", user_mail_input);
                        /* code */
                        /* code */
                        if (strstr(user_mail_input, "@gmail.com") && strlen(user_mail_input) > 13)
                        {
                            /* code */
                            printf("Ajouter Avec Success...\n");
                            strcpy(cont[i].Email, user_mail_input);
                            break;
                        }
                        else
                        {
                            printf("Invalide Format!!!\n");
                        }
                    }
                }
                else
                {
                    printf("Contact non trouve\n");
                }
            }
            break;
        case 3:

            // 3 - suppression d'un contact
            printf("Entrer le nom du contact a supprimer:");
            scanf(" %[^\n]", nomcontactmodif);

            /* code */
            for (int i = 0; i < number_of_contacts; i++)
            {
                /* code */
                if (strcmp(cont[i].Nom, nomcontactmodif) == 0)
                {
                    /* code */
                    cont[i] = cont[i + 1];
                    // strcpy(cont[j].Nom, cont[j + 1].Nom);
                    // strcpy(cont[j].Tele, cont[j + 1].Tele);
                    // strcpy(cont[j].Email, cont[j + 1].Email);
                    // printf("Contact supprime success\n");
                    number_of_contacts--;
                    found = 1;
                    printf("Contact supprime avec success\n");
                    break;
                }
            }
            if (found == 0)
                printf("Contact non trouve\n");

            break;
        case 4:
            // 4 - Rechercher d'un contact

            printf("Entrer le nom du contact a Rechercher:");
            scanf(" %[^\n]", nomcontactmodif);
            for (int i = 0; i < number_of_contacts; i++)
            {
                /* code */
                if (strcmp(cont[i].Nom, nomcontactmodif) == 0)
                {
                    /* code */
                    printf("Contact %d:\n", i + 1);
                    printf("Nom : %s\n", cont[i].Nom);
                    printf("Telephone : %s\n", cont[i].Tele);
                    printf("Email : %s\n", cont[i].Email);
                    printf("Contact trouve avec success\n");
                    found = 1;
                    break;
                }
            }
            if (found == 0)
                printf("Contact non trouve\n");

            break;
        case 5:
            // Affichage des contacts
            for (int i = 0; i < number_of_contacts; i++)
            {
                /* code */
                printf("Contact %d:\n", i + 1);
                printf("Nom : %s\n", cont[i].Nom);
                printf("Telephone : %s\n", cont[i].Tele);
                printf("Email : %s\n", cont[i].Email);
                printf("\n---------------------------\n");
            }

            break;
        case 6:

            // 5 - Quite le programme
            printf("Au revoir!\n");
            exit(0);
            break;

        default:
            printf("\nChoix invalide. Veuillez reessayer.\n");
            break;
        }
    }








    return 0;
}