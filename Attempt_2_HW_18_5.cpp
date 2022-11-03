#include <iostream>
#include <string>
#include "Player.h"


class Player
{
public:
	int GetScore()
	{
		return score;
	}
	string GetName()
	{
		return name;
	}

private:
	int score;
	string name;


	void Show()
	{
		std::cout << "Player name: " << ' ' << "Scores player: " << std::end1;
	}

};
	
int main()
{
	Player* p = new Player;
	p->GetScore();
	Player* n = new Player;
	n->GetName();
   
	std::cout << "How many players to create?";

	string names;
	int scores;
	std::cin >> names >> scores;

	const int scores = x;
	int array[scores] = { x };
	
	for (int i = 0; i < scores - 1; ++i)
	{
		int scores = i;

		for (int current = i + 1; current < scores; ++current)
		{
			if (array[current]>array[scores])
				scores=current
		}
		std::swap(array[i], array[scores]);
	}
	for (int f = 0; f < scores; ++f)
		std::cout << array[f] << ' ';

	delete[] names, scores;
	names, scores = nullptr;

	return 0;

}
   


