#include <iostream>
#include <vector>
#include <string>


struct Equipos
{
	
	int teamPosition;
	string teamName;
	int numberPoints;
	int numberOfGames;
	int scoredGoals;
	int suffered goals;
	int goalDifference;
	float earnedPoints;
};
void analisisPartidos(string homeTeam, string awayTeam, int goalsHomeTeam, int goalsAwayTeam)
{
	

}

void datosPartidos(int numberGames)
{
	string homeTeam, awayTeam;
	int goalsHomeTeam, goalsAwayTeam;
	char dash;


	for(int h = 0; h <= numberGames; h++)
	{
		cin >> homeTeam;
		printf(" ");
		cin >> goalsHomeTeam;
		printf(" ");
		cin >> dash;
		printf(" ");
		cin >> goalsAwayTeam;
		printf(" ");
		cin >> awayTeam;
		printf("\n");
		analisisPartidos(homeTeam,goalsHomeTeam,goalsAwayTeam,awayTeam);
	}

}


void nombresEquipos(int numberTeams, int numberGames)
{
	Equipos nombresEquipos[numberTeams];

	for( int i = 0; i <= numberTeams ; i++)
		cin >> nombresEquipos[i].teamName >> endl;
	datosPartidos(numberGames);
}


void football()
{
	int numberTeams, numberGames;
	cin >> numberTeams >> numberGames >> endl;
	while((numberTeams != 0 and numberTeams > 0 and numberTeams <= 99) and numberGames != 0)
	{
		nombresEquipos(numberTeams, numberGames);
	}

}


int main()
{
	football();
	return 0;
}