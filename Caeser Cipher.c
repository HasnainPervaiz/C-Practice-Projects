#include<stdio.h>

int main(){
    char string[100];
    int shift, i, j;
    printf("Enter A String: ");
    fgets(string, sizeof(string), stdin);

    while(1){
        printf("Enter A Number To Encrypt The String: ");
        if(scanf("%d", &shift) != 1){
            printf("Only Integers Are Allowed! Try Again.");
            while(getchar() != '\n');
        }

        else if (shift < 1 || shift > 26) {
            printf("Number must be between 1 and 26!\n");
        }

        else{
            break;
        }
    }
    for(i = 0; string[i] != '\0'; i++){
        for(j = 0; j < shift; j++){
            if(string[i] == 'z'){
                string[i] = 'a';
            }
            else{
                string[i]++;
            }
        }
    }
    puts("Encrpted Form:");
    for(i = 0; string[i] != '\0'; i++){
        printf("%c", string[i]);
    }
    printf("\n");
    for(i = 0; string[i] != '\0'; i++){
        for(j = 0; j < shift; j++){
            if(string[i] == 'z'){
                string[i] = 'a';
            }
            else{
                string[i]--;
            }
        }
    }

    puts("Decrpted Form:");
    for(i = 0; string[i] != '\0'; i++){
        printf("%c", string[i]);
    }

    return 0;
}