#include <stdio.h>
#include <string.h>

#define MAX_COUNTRIES 24
#define MAX_LENGTH 1001

int main()
{
    char s[MAX_LENGTH], ans[MAX_LENGTH];
    char countries[MAX_COUNTRIES][MAX_LENGTH] = {"brasil", "alemanha", "austria", "coreia", "espanha", "grecia", "estados-unidos",
                                                 "inglaterra", "australia", "portugal", "suecia", "turquia", "argentina", "chile",
                                                 "mexico", "antardida", "canada", "irlanda", "belgica", "italia", "libia", "siria",
                                                 "marrocos", "japao"};
    char greetings[MAX_COUNTRIES][MAX_LENGTH] = {"Feliz Natal!", "Frohliche Weihnachten!", "Frohe Weihnacht!", "Chuk Sung Tan!",
                                                  "Feliz Navidad!", "Kala Christougena!", "Merry Christmas!", "Merry Christmas!",
                                                  "Merry Christmas!", "Feliz Natal!", "God Jul!", "Mutlu Noeller", "Feliz Navidad!",
                                                  "Feliz Navidad!", "Feliz Navidad!", "Merry Christmas!", "Merry Christmas!",
                                                  "Nollaig Shona Dhuit!", "Zalig Kerstfeest!", "Buon Natale!", "Buon Natale!",
                                                  "Milad Mubarak!", "Milad Mubarak!", "Merii Kurisumasu!"};

    while (scanf("%s", s) != EOF)
    {
        strcpy(ans, "--- NOT FOUND ---");
        for (int i = 0; i < MAX_COUNTRIES; ++i)
        {
            if (strcmp(countries[i], s) == 0)
            {
                strcpy(ans, greetings[i]);
                break;
            }
        }
        printf("%s\n", ans);
    }
    return 0;
}

