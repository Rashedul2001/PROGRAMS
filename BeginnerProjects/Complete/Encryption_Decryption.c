// complete but ready to be upgraded

#include <string.h>
#include <stdio.h>
#define TRUE 1
#define FALSE 0

void decoration1(int n);
void decoration2(int n);
void getencryption(char message[5000], char encrypted[5000]);

void getdecryption(char message[5000], char encrypted[5000]);

int main(void)
{
    int choice = 0, mmlen;
    char encrypted[5000], decrypted[5000], message[5000], buf;
    int pass[20];

    do
    {

        printf("\n\n1. Encrypt\t2. Decrypt\t3. exit\n");
        printf("Ente What You Want to do: ");
        if (scanf(" %d", &choice) == 0)
        {
            while (buf = getchar() != '\n')
                ;
            continue;
        }
        decoration1(10);
        if (choice == 1)
        {
            printf("Enter your message:");
            getc(stdin); // getting a '\n' character after getting a int type input
            fgets(message, sizeof(message), stdin);
            message[strcspn(message, "\n")] = '\0';
            // gets(message);
            getencryption(message, encrypted);
        }
        else if (choice == 2)
        {
            printf("Enter your message:");
            getc(stdin); // getting a '\n' character after getting a int type input
            fgets(message, sizeof(message), stdin);
            message[strcspn(message, "\n")] = '\0';
            getdecryption(message, decrypted);
        }
        else if (choice == 3)
        {
            return 0;
        }
        else
        {
            printf("Please Enter correctly:");
        }

    } while (TRUE);
    return 0;
}

void decoration1(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("---");
    }
    printf("\n");
}
void decoration2(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("===");
    }
    printf("\n");
}

void getencryption(char message[5000], char encrypted[5000])
{
    char stpass[210], LikeHash[] = "Rashedul";
    int pass[200], i, stplen, j = 0, temp[200];
    printf("Set a New Password(max-20):");
    scanf("%[^\n]", stpass);
    stplen = strlen(stpass);
    for (i = 0; i < stplen; i++)
    {
        pass[i] = stpass[i] - 48;
    }
    for (i = 0; i < 8; i++)
    {
        temp[i] = LikeHash[i] - 48;
        pass[i] = pass[i] + temp[i]; // make it at least 8 character long
        // and perform conversion for all the character not just one itaration
    }

    for (i = 0; message[i] != '\0'; i++)
    {

        encrypted[i] = message[i] + pass[j];
        j++;
        if (j == stplen) // needs to upgarade
        {
            j = 0;
        }
    }
    encrypted[i] = '\0';
    decoration2(10);
    printf("Your Encrypted message is:%s\n", encrypted);
    decoration2(10);
}

void getdecryption(char message[5000], char encrypted[5000])
{
    char stpass[210], LikeHash[] = "Rashedul";
    int pass[200], i, temp[200], stplen, j = 0;
    printf("Enter the Password(max-20):");
    scanf("%[^\n]", stpass);
    stplen = strlen(stpass);
    for (i = 0; i < stplen; i++)
    {
        pass[i] = stpass[i] - 48;
    }
    for (i = 0; i < 8; i++)
    {
        temp[i] = LikeHash[i] - 48;
        pass[i] = pass[i] + temp[i];
    }

    for (i = 0; message[i] != '\0'; i++)
    {

        encrypted[i] = message[i] - pass[j];
        j++;
        if (j == stplen)
        {
            j = 0;
        }
    }
    encrypted[i] = '\0';
    decoration2(10);
    printf("Your Decrypted message is:%s\n", encrypted);
    decoration2(10);
}