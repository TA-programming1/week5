#include <iostream>
#include "windows.h"
#include <algorithm>
#include <vector>

struct Player
{
	std::string playerName{"Fantastic Name"};
	int hp{100};
	

	/*Function to check health*/
	void checkHealth()
	{
		if (hp <= 1)
		{
			std::cout << "You, the great " << playerName << ", died!!\n";
			Sleep(3000);
		}
		else if (hp == 50)
		{
			std::cout << "You are losing too much health! \n";
			Sleep(2000);
		}
		else
		{
			std::cout << playerName << "'s health: " << hp << std::endl;
		}
	}
};

struct Test
{
	std::string name;
	int numbah{};
};

void playerExample();
void structExample();

bool greaterThan(Test a, Test b);

int main()
{
	playerExample();


	return 0;
}

void playerExample()
{
	Player player;
	player.hp = 100;
	player.playerName = "Johannes";
	int amountOfLoops = player.hp;

	for (int i{}; i < amountOfLoops; ++i)
	{
		player.checkHealth();
		player.hp--;
		Sleep(100);
	}
}

void structExample()
{
	std::vector<Test> tests;

	for (int i{}; i < 5; i++)
	{
		Test test;
		test.numbah = i;

		tests.push_back(test);
	}
}

// Don't worry about this. This was just an example i showed to one student
bool greaterThan(Test a, Test b)
{
	if (a.numbah > b.numbah)
		return true;

	return false;
}
