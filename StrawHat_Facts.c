#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

typedef struct
{
    char name[20];
    char facts[5][100];

} SHdata;

void initializeAndRun()
{
    //*------------------------------------------------------------------------------------------------------------------------------------
    //* Struct Initialization:

    SHdata SH1;
    strcpy(SH1.name, "Luffy");
    strcpy(SH1.facts[0], "Luffy's favorite food is meat.");
    strcpy(SH1.facts[1], "Luffy is made of rubber.");
    strcpy(SH1.facts[2], "Luffy loves adventures.");
    strcpy(SH1.facts[3], "Luffy ate the gum gum fruit.");
    strcpy(SH1.facts[4], "Luffy loves being free.");

    SHdata SH2;
    strcpy(SH2.name, "Zoro");
    strcpy(SH2.facts[0], "Zoro loves alcohol.");
    strcpy(SH2.facts[1], "Zoro often gets lost.");
    strcpy(SH2.facts[2], "Zoro fights with 3 swords.");
    strcpy(SH2.facts[3], "Zoro is called the pirate hunter.");
    strcpy(SH2.facts[4], "Zoro used to be a bounty hunter.");

    SHdata SH3;
    strcpy(SH3.name, "Sanji");
    strcpy(SH3.facts[0], "Sanji loves women.");
    strcpy(SH3.facts[1], "Sanji wants to find the all blue.");
    strcpy(SH3.facts[2], "Sanji uses his legs to fight.");
    strcpy(SH3.facts[3], "Sanji is the ship's cook.");
    strcpy(SH3.facts[4], "Sanji has curly eyebrows.");

    SHdata SH4;
    strcpy(SH4.name, "Nami");
    strcpy(SH4.facts[0], "Nami's favorite food is tangerine.");
    strcpy(SH4.facts[1], "Nami is the ship's navigator.");
    strcpy(SH4.facts[2], "Nami is sexy.");
    strcpy(SH4.facts[3], "Nami likes to draw maps.");
    strcpy(SH4.facts[4], "Nami loves money.");

    SHdata SH5;
    strcpy(SH5.name, "Robin");
    strcpy(SH5.facts[0], "Robin is an archiologist.");
    strcpy(SH5.facts[1], "Robin wants to discover the lost history.");
    strcpy(SH5.facts[2], "Robin is hot.");
    strcpy(SH5.facts[3], "Robin likes to read books.");
    strcpy(SH5.facts[4], "Robin likes to make morbit jokes.");

    SHdata SH6;
    strcpy(SH6.name, "Usopp");
    strcpy(SH6.facts[0], "Ussop is a coward.");
    strcpy(SH6.facts[1], "Ussop wants to become a brave warrior of the sea.");
    strcpy(SH6.facts[2], "Usopp uses a slingshot to fight.");
    strcpy(SH6.facts[3], "Usopp lies a lot.");
    strcpy(SH6.facts[4], "Usopp has a long nose.");

    SHdata SH7;
    strcpy(SH7.name, "Franky");
    strcpy(SH7.facts[0], "Franky is a cyborg.");
    strcpy(SH7.facts[1], "Franky runs on cola.");
    strcpy(SH7.facts[2], "Franky is an engineer.");
    strcpy(SH7.facts[3], "Franky is in charge of upgrading or reparing the ship.");
    strcpy(SH7.facts[4], "Franky can change his hairstyle by pressing a button on his nose.");

    SHdata SH8;
    strcpy(SH8.name, "Chopper");
    strcpy(SH8.facts[0], "Chopper is the ship's doctor.");
    strcpy(SH8.facts[1], "Chopper is a human raindeer.");
    strcpy(SH8.facts[2], "Chopper is cute.");
    strcpy(SH8.facts[3], "Chopper makes medicines.");
    strcpy(SH8.facts[4], "Chopper loves cotton candy.");

    SHdata SH9;
    strcpy(SH9.name, "Brook");
    strcpy(SH9.facts[0], "Brook is all skeleton.");
    strcpy(SH9.facts[1], "Brook gently asks you to show him your panties.");
    strcpy(SH9.facts[2], "Brook is a musician.");
    strcpy(SH9.facts[3], "Brook likes to make scull jokes.");
    strcpy(SH9.facts[4], "Brook is the oldest member of the crew.");

    SHdata SH10;
    strcpy(SH10.name, "Jimbe");
    strcpy(SH10.facts[0], "Jimbe is a fishman.");
    strcpy(SH10.facts[1], "Jimbe used to be one of the 7 warlords of the sea.");
    strcpy(SH10.facts[2], "Jimbe is the ship's helmsman.");
    strcpy(SH10.facts[3], "Jimbe uses fishman karate in his fights.");
    strcpy(SH10.facts[4], "Jimbe is the wisest member of the crew.");

    SHdata SH_Array[] = {SH1, SH2, SH3, SH4, SH5, SH6, SH7, SH8, SH9, SH10};

    //*------------------------------------------------------------------------------------------------------------------------------------
    //* Running the program:

    char NameIn[20];
    int SHfound = 0;

    printf("\nEnter a strawhat's name: ");
    scanf(" %s", &NameIn);
    NameIn[0] = toupper(NameIn[0]);

    for (int i = 0; i < 10; i++)
    {
        if (strcmp(NameIn, SH_Array[i].name) == 0)
        {

            srand(time(0));
            int x = rand() % 5;

            printf("%s\n", SH_Array[i].facts[x]);
            SHfound++;
        }
    }
    if (SHfound == 0)
    {
        printf("Invalid character!\n\n");
    }
}

int main()
{
    initializeAndRun();

    return 0;
}
