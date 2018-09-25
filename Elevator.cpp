#include "Elevator.h"

void Elevator::Call(int floor)
{
	Move(floor);
}

bool Elevator::Check()
{
	if ((min_weight <= weight && weight <= max_weight) && (gate == 1))
		return 1;
	else
		return 0;
}

void Elevator::Move(int floor)
{
	if (current_floor == floor)
		cout << "Floor: " << current_floor << endl;

	if (current_floor > floor)
	{
		for (current_floor; current_floor > floor; current_floor--)
		{
			cout << "Floor: " << current_floor;
		}
		gate = 0;
		cout << "Your elevator arrived, please come in" << endl;
	}

	if (current_floor < floor)
	{
		for (current_floor; current_floor < floor; current_floor++)
		{
			cout << "Floor: " << i;
		}
		gate = 0;
		cout << "Your elevator arrived, please come in" << endl;
	}
}