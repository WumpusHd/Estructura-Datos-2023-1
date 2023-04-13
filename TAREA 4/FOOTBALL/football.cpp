#include <iostream>
#include <vector>
#include <string>

using namespace std;


struct infoEquipos
{

	int numberPointsHomeTeam; 
	int numberGamesHomeTeam;
	int numberScoredGoalsHomeTeam;
	int numberSufferedGoalsHomeTeam;
	int goalDifferenceHomeTeam;
	int numberPointsAwayTeam;
	int numberGamesAwayTeam;
	int numberScoredGoalsAwayTeam;
	int numberSufferedGoalsAwayTeam;
	int goalDifferenceAwayTeam;
};

void analisisPartidos(string homeTeam, string awayTeam, int goalsHomeTeam, int goalsAwayTeam, int numberGames)
{
	int teamPosition;
	string teamName;
	for (int z = 0; z < nombresEquipos.size(); z++)
	{
		if(homeTeam == nombresEquipos[z])
		{
			if(goalsHomeTeam > goalsAwayTeam)
			{
				numberPointsHomeTeam += 3;
			}
			else if(goalsHomeTeam == goalsAwayTeam)
			{
				numberPointsHomeTeam += 1;
			}
			else if(goalsHomeTeam < goalsAwayTeam)
			{
				numberPointsHomeTeam = 0;
			}
			numberGamesHomeTeam += 1;
			numberScoredGoalsHomeTeam = goalsHomeTeam;
			numberSufferedGoalsHomeTeam = goalsAwayTeam;
			goalDifferenceHomeTeam = goalsHomeTeam - goalsAwayTeam;
		}
		else if(awayTeam == nombresEquipos[z])
		{
			if(goalsAwayTeam > goalsHomeTeam)
			{
				numberPointsAwayTeam += 3;
			}
			else if(goalsAwayTeam == goalsHomeTeam)
			{
				numberPointsAwayTeam += 1;
			}
			else if(goalsAwayTeam < goalsHomeTeam)
			{
				numberPointsAwayTeam = 0;
			}
			numberGamesAwayTeam += 1;
			numberScoredGoalsAwayTeam = goalsAwayTeam;
			numberSufferedGoalsAwayTeam = goalsHomeTeam;
			goalDifferenceAwayTeam = goalsAwayTeam - goalsHomeTeam;
		}
	}
}

void datosPartidos(vector<string> nombresEquipos,int numberGames)
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
		analisisPartidos(homeTeam, awayTeam, goalsHomeTeam, goalsAwayTeam, numberGames);
	}
}

void nombresEquipos(int numberTeams, int numberGames)
{
	string nombresEquiposTemporal;
	vector<string> nombresEquipos;
	for(int x = 0; x < numberTeams; x++)
	{
		cin >> nombresEquiposTemporal;
		nombresEquipos.push_back(nombresEquiposTemporal);
	}
	datosPartidos(nombresEquipos, numberGames);
}

void football()
{
	int numberTeams, numberGames;
	cin >> numberTeams >> numberGames;
	while((numberTeams != 0 and numberTeams > 0 and numberTeams <= 99) and numberGames != 0)
	{
		nombresEquipos(numberTeams, numberGames);
	}

}

int main()
{

	return 0;
}