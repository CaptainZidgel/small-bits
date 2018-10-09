#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char tracks[][80] = {
      "I left my heart in Harvard Med School",
      "Newark, Newark - a wonderful town",
      "Dancing with a Dork",
      "From here to maternity",
      "The girl from Iwo Jima",
    };

init_search()
{
    char search_for[80];
    printf("Search for (case sensitive): ");
    scanf("%79s", search_for);
    //search_for[strlen(search_for)] = '\0'; //What is this for?? I commented it out and it didn't seem to make a difference.
    find_track(search_for);
    return 1;
}

void find_track(char search_for[])
{
    int i;
    int pickle = 0;
    for (i = 0; i < 5; i++)
    {
        if (strstr(tracks[i],search_for))
        {
            printf("Track %i: '%s'\n", i+1, tracks[i]);
            pickle++;
        }
    }
    if (pickle < 1)
    {
        printf("%s not found.\n", search_for);
    }
    printf("Search again? (y/n)\n");
    char sa[0];
    scanf("%1s", sa);
    if (sa[0] == 'y')
    {
        init_search();
    }
}

int main()
{
    init_search();
    //printf("Search for: ");
    //scanf("%79s", search_for);
    //search_for[strlen(search_for)] = '\0'; //What is this for?? I commented it out and it didn't seem to make a difference.
    //find_track(search_for);
    return 0;
}
