#include<stdio.h>

int main()
{

    //number of accounts
    int numaccount = numaccount;
    if (numaccount<numaccount+1) 
    {
        numaccount += 1;
    } 
    printf("account #%d\n", numaccount); //prints result

    //username input
    printf("Please enter a username: ");
    char username[30];
    scanf("%s", username);

    //password input
    printf("Please enter a password: ");
    char password[30];
    scanf("%s", password);

    FILE *fptr;
    // Open or create a file
    fptr = fopen("filename.txt", "a");

    // Writes to file
    fprintf(fptr, "username = %s\npassword = %s\n", username,password);

    // Close the file
    fclose(fptr);

    return 0;

}