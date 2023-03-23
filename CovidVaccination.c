#include <stdio.h>
#include <string.h>
int main()
{
    char name[30];
    char buffer[30];
    char ch[30];
    char id[20];
    char d[30];
    char e[30]=".txt";
    int n,i;
    printf("Enter the name of the User: \n"); // Naming of the user 
    scanf("%s",&name);
    FILE *fp;
    fp=fopen(strcat(name,".txt"),"r");                // Opening of the file using file Handling 
    char wrd[20]="DONE";            // Storing the word done in a character array 
    int m=strlen(wrd);              // length of the worrd 
    for(i=0;i<m;i++)
    {
        ch[i]=fgetc(fp);            // returns the ASCII value of the character 
    }
    int c=0;
    for(i=0;i<m;i++)
    {
        if(ch[i]==wrd[i])           // Comparing the character with wrd array 
        {
            c=c+1;                  // counter for counting the match characters 
        }
        else 
        {
            break;
        }
    }
    if(c==4)                        // if counter ==4 then both the vaccines are completed 
    {
        printf("\nThe FILE of the USER is present and have completed both the vaccines \n");
    }
    else 
    {
        printf("The FILE of the USER is not present \n");
    }
    if(c==4)
    {
        printf("YOU ARE ELIGIBLE FOR BOOSTER DOSE \n");
        int choice;
        printf("Enter 1 if you have Aadhar Card: \n");
        printf("Enter 2 if you have Voter Id: \n");
        printf("Enter 3 if you have Pan Card: \n");
        printf("Enter 4 if you have Passport: \n");
        printf("Enter 5 if you have Licence: \n");
        scanf("%d",&choice);
        switch(choice)                              // Providing the id you have 
        {
            case 1:
                {
                    printf("Enter your AADHAR ID: \n");
                    scanf("%s",&id);
                    break;
                }
            case 2:
                {
                    printf("Enter your Voter ID: \n");
                    scanf("%s",&id);
                    break;
                }
            case 3:
                {
                    printf("Enter your PAN CARD ID: \n");
                    scanf("%s",&id);
                    break;
                }
            case 4:
                {
                    printf("Enter your PASSPORT ID: \n");
                    scanf("%s",&id);
                    break;
                }
            case 5:
                {
                    printf("Enter your LICENCE ID: \n");
                    scanf("%s",&id);
                    break;
                }
            default:
                {
                    printf("INVALID CHOICE:\n");
                    break;
                }
        }
        int choice2;
        printf("Enter 1 if you want the slot of 9-10 AM \n");
        printf("Enter 2 if you want the slot of 10-11 AM \n");
        printf("Enter 3 if you want the slot of 11-12 AM \n");
        printf("Enter 4 if you want the slot of 12-1 PM \n");
        printf("Enter 5 if you want the slot of 3.30-4.30 PM \n");
        printf("Enter 6 if you want the slot of 4.30-5.30 PM \n");
        scanf("%d",&choice2);
        switch(choice2)                                         // Providing the time slots 
        {
            case 1:
                {
                    printf("Your preferred time slot is 9-10 AM \n");
                    break;
                }
            case 2:
                {
                    printf("Your preferred time slot is 10-11 AM \n");
                    break;
                }
            case 3:
                {
                    printf("Your preferred time slot is 11-12 AM \n");
                    break;
                }
            case 4:
                {
                    printf("Your preferred time slot is 12-1 PM \n");
                    break;
                }
            case 5:
                {
                    printf("Your preferred time slot is 3.30-4.30 PM \n");
                    break;
                }
            case 6:
                {
                    printf("Your preferred time slot is 4.30-5.30 PM \n");
                    break;
                }
            default: 
                {
                    printf("INVALID CHOICE \n");
                }
        }
        printf("%s with id %s is elgible for booster dose which will be injected after 7 days at your preferred time slot \n", name, id);
    }
}