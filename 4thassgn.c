   #include "stdio.h"
#include "stdlib.h"
#include "string.h"

int insert_data(int a){
    char user_name[20];
    char pw[20];
    int amount;
    int age;
    char location[20];

    printf("User name:");
    scanf("%s",user_name);
    printf("Password:");
    scanf("%s",pw);
    printf("Amount:");
    scanf("%d",&amount);
    printf("Age:");
    scanf("%d",&age);
    printf("Location:");
    scanf("%s",location);

    FILE *fptr;
    fptr= fopen("userfile.txt","a");
    if(fptr==NULL){
        printf("an error occurred!");
        exit(1);
    }
        fprintf(fptr,"%d %s %s %d %d %s\n",a,user_name,pw,amount,age,location);

    fclose(fptr);
    return a;
}

//function to count lines
int lno(int x){
    FILE *fptr;
    char c; // To store a character read from file

// Open the file
    fptr= fopen("userfile.txt","r");

// Check if file exists
    if (fptr == NULL)
    {
        printf("Could not open file %s", fptr);
        return 0;
    }

// Extract characters from file and store in character c
    for (c = getc(fptr); c != EOF; c = getc(fptr))
        if (c == '\n') // Increment count if this character is newline
            x++;

// Close the file
    fclose(fptr);

    return x;
}
int main(){
    int c=100001;

    while (1){
        int choice=0;
        //ok let's start
        printf("Enter 1 to insert data,\n2 to search data and\n3 to update data\n: ");
        scanf("%d",&choice);

        if(choice==1){
            //insert data
            int x=0;
            x=lno(x);
            printf("%d code works here\n",x);
            if(x==0){
            insert_data(c);
            c++;
            }else if(x>0){
                printf("place a program to scan ID here\ndunt forget to add 1 to x\n");
                printf("place a program to insert data at a chosen line\n");
            }

        }else if(choice==2){
            //search data
            printf("u pressed 2!\n");
        }else if(choice==3){
            //update data
            printf("u pressed 3!\n");
        }else{
            printf("bye!");
            break;
        }
    }
return 0;
}
