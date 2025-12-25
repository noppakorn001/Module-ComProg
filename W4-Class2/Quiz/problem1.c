#include <stdio.h>
#include <string.h>
struct player {
    char fname [21];
    char sname [21];
    int goal;
};

struct player myteam[ ] = { {"Pipob", "On-Mo", 15},
                        {"Watcharawit", "Ronaldo", 4},
                            {"Teerasil", "Daengda", 12}
                        };

int main() {
    //print mytem[1].fname
    printf("%s\n", myteam[1].fname); // result Watcharawit

    // print myteam[0].goal+myteam[2].goal
    printf("%d\n", myteam[0].goal+myteam[2].goal); // result 27

    //print size of  myteam[0] in bytes
    printf("%d\n", sizeof(myteam[0])); // result 48 from 21+21+4

    //print size of  myteam in bytes
    printf("%d\n", sizeof(myteam)); // result 144 from 48*3

    //use loop for change myteam[].goal to 0 and print it (check)
    for (int i = 0; i < 3; i++) { myteam[i].goal = 0;
        printf("%d\n", myteam[i].goal); // result 0
    }

    // change myteam[0].fname to Bandit
    strcpy(myteam[0].fname, "Bandit");
    printf("%s\n", myteam[0].fname); // result Bandit

    return 0;
}