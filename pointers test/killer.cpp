#include "killer.h"

Killer::Killer()
{
}

Killer::~Killer()
{
}

void Killer::kill(human* H1)
{
	delete H1;
}
