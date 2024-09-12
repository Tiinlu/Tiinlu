#include <stdio.h>
#include <string.h>

void REMOVECOMMONLETTERS (char *name1, char *name2) {
    int r, j; 
    for (r = 0; r < strlen(name1); r++){              //nested loop (loop within a loop)
        for (j = 0; j < strlen(name2); j++){
            if (name1[r] == name2[j]){
                name1[r] = name2[j] = '0';                 //marks letters matched 
                break;                                      //stops checking after finding matched letter
            }
        }
    }
}

int COUNTINGREMAININGLETTERS (char *name) {
    int count = 0;
    for (int r = 0; r < strlen(name); r++) {
        if (name[r]  != '0'){
            count++;
        }
    }    
    return count;
}   

void FLAMESGAME (int count){                                //LEARN AGAIN
    char flames [] = "FLAMES";
    int pointer = 0, length = 6;                            //FIND POINTED LETTERS TO REMOVE
    
    while (length > 1){
        pointer = (count % length) - 1;
            
        if (pointer >= 0){
                for (int r = pointer; r < length - 1; r++) {
                    flames[r] = flames [r + 1];            //SHIFT LETTERS

            }   
        }  else {
            pointer = length -1;
        }

        flames [length - 1] = '\0';                          //REDUCE LENGTH
        length --;
    }

                                                            //RESULTS
    printf("\nRESULT:\n");                                   //     \n - adds a line break you can put it before or after the text in a syntax
    switch (flames[0]) {
        case 'F': printf("Friendzoned HAHHAHAHHA\n\n"); break;
        case 'L': printf("Lovers\n\n"); break;
        case 'A': printf("Affection\n\n"); break;
        case 'M': printf("Marriage LESSGOOOOO\n\n"); break;
        case 'E': printf("Enemies... TO LOVERS?!?!? chz\n\n"); break;
        case 'S': printf("Siblings HAHAHHAHA kapatid lang pala ihhh\n\n"); break;
    }
}

int main() {
    printf ("\nFLAMES BY TIINLU \n");
    char name1[100], name2[100];

                                                            // Input names
    printf("\nEnter first name: ");
    fgets(name1, sizeof(name1), stdin);
    name1[strcspn(name1, "\n")] = '\0';

    printf("Enter second name: ");
    fgets(name2, sizeof(name2), stdin);
    name2[strcspn(name2, "\n")] = '\0';

                                                            // Remove common letters
    REMOVECOMMONLETTERS(name1, name2);

                                                             // Count remaining letters
    int REMAININGCOUNT = COUNTINGREMAININGLETTERS(name1) + COUNTINGREMAININGLETTERS(name2);

                                                            // Run FLAMES game logic
    FLAMESGAME(REMAININGCOUNT);

    return 0;
}