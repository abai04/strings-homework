#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char text[] = "My day begins early, and my dog waits by the door. I pack my bag, grab my coat, and walk with my friend Mia to the bus stop. She laughs at my jokes, but MY teacher does not! Oh my! Yesterday my class read a mystery about an army of ants, and I told everyone about my family. Is my story true? Ask my grandmother, my uncle, or my neighbor. I made this lunch myself, and my sandwich is the best one in school. My secret? Smile, keep my promise, and share my snacks. Oh my, tomorrow my brother comes too!";
    int textlen = strlen(text);
    int mycount = 0;

    char *token = strtok(text, " ,.!?;");
    while(token != NULL){
        char lowerToken[15];
        strcpy(lowerToken, token);
        for(int i = 0; i < strlen(lowerToken); i++){
            lowerToken[i] = tolower(lowerToken[i]);
        }
        if (strcmp(lowerToken, "my") == 0){
            mycount++;
        }
        token = strtok(NULL, " ,.!?;");
    }

    printf("Length: %d \n", textlen);
    printf("Count: %d\n", mycount);


    return 0;
}

