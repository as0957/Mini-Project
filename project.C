#include<stdio.h>

#define endl printf("\n")

void encryt(){

    // INPUT PART

    int length_of_message;
    printf("Enter the length of the message you want to encrypt: ");
    scanf("%d", &length_of_message);
    endl;

    char message[length_of_message];
    printf("Enter the messsage you want to encrypt: ");
    scanf("%s", &message);
    endl;

    int key;
    printf("Enter the value of shift to be made: ");
    scanf("%d", &key);
    endl;

    // PROCESSING PART 
    int i;
    char letter;
    for (i = 0; message[i]!='\0'; i++){
        letter = message[i];

        if (letter >= 'a' && letter <= 'z'){
            letter += key;
            if (letter > 'z'){
                letter = letter - 'z' + 'a' - 1;
            }
        }

        else if (letter >= 'A' && letter <= 'Z'){
            letter += key;
            
            if (letter > 'Z'){
                letter = letter - 'Z' + 'A' - 1;
            }
        }

        message[i] = letter;
    }

    //OUTPUT
    printf("Encrypted Message : %s", message);
    endl;
}


void decrypt(){
    // INPUT PART

    int length_of_message;
    printf("Enter the length of the message you want to encrypt: ");
    scanf("%d", &length_of_message);
    endl;

    char message[length_of_message];
    printf("Enter the message to decrypt: ");
    endl;
    scanf("%s", message);

    int key;
    printf("Enter the value of shift: ");
    scanf("%d", &key);
    endl;


    // PROCESSING PART

    int i;
    char letter;
    for (i=0; message[i]!='\0'; i++){
        letter = message[i];

        if (letter >= 'a' && letter <= 'z'){
            letter -= key;
            if (letter > 'z'){
                letter = letter + 'z' - 'a' + 1;
            }
        }

        else if (letter >= 'A' && letter <= 'Z'){
            letter -= key;
            
            if (letter > 'Z'){
                letter = letter + 'Z' - 'A' + 1;
            }
        }
        message[i] = letter;
    }

    //OUTPUT PART

    printf("Decrypted Message : %s", message);
    endl;endl;
}

// DRIVER CODE

int main(){
    int flag;
    while (flag){
        printf("Press 1 to encrypt\nPress 2 to decrypt\nPress any other key to Exit\n\nEnter your choice: ");
        int choice;
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            encryt();
            break;
        
        case 2:
            decrypt();
            break;
        
        default:
            flag =0;
        }
    }
    return 0;
}