#include <stdio.h>
#include <stdlib.h>

void theBest(char *episodesInputFile,
             char *directorsInputFile,
             char* episodesOputputFile) {

    FILE *f_episodes = fopen(episodesInputFile, "r");
    FILE *f_directors = fopen(directorsInputFile, "r");
    FILE *f_out = fopen(episodesOputputFile, "w");

    double max_gledanost[10] = {0}; //gledanost najgledanije epizode u sezoni
    char max_epizode[10][500]; //naziv najgledanije epizode u sezoni

    int season, episode;
    char * episode_name[51];
    char * directors[110];
    double viewers = 10;
    //printf("%d#%d#%s%%s...")
    fscanf(f_episodes, "%d#%d#%[^#]#%[^0-9]%lf", &season, &episode, episode_name, directors, &viewers);
    printf("%d %d %s; %s; %lf\n", season, episode, episode_name, directors, viewers);
}

int main()
{
    char episodesInputFile[] = "episodes.txt";
    char directorsInputFile[] = "directors.txt";
    char episodesOutputFile[] = "output.txt";

    theBest(episodesInputFile, directorsInputFile, episodesOutputFile);
    return 0;
}
