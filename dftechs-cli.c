#include <stdio.h> 
#include <stdlib.h>

int initProject(){
    printf("Work in Progress \n");
}
int main() 
{ 
	printf("Initiated DF Techs CLI ....\n\n");

    int mainMenuOption;
    printf("DF Techs CLI Main Menu .. \n");
    printf("Enter your Choice :- \n");
    scanf("%d", &mainMenuOption);

    // true if number is less than 0
    if (mainMenuOption=='1') {
        initProject();
    }
    else if (mainMenuOption=='2'){
        printf("Work in Progress \n");
        main();
    }
    else if (mainMenuOption=='3'){
        printf("Work in Progress \n");
        main();
    }
    else if (mainMenuOption=='4'){
        printf("Work in Progress \n");
        main();
    }
    else{
        printf("Invalid Choice .... \n\nExiting DF Techs CLI\n");
        exit(1);
    }
    return 0; 
} 
