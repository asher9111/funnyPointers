#include "respawner.h"




Respawner::Respawner()
{
}

Respawner::~Respawner()
{
}

void Respawner::spawn(human*& P1)
{
	std::cout << "respawner - trying to respawn some humans \n";
	P1 = new human;
}
