#pragma once
#include <iostream>
#include ""

class Elevator
{
public:
	int n_floors; // кол-во этажей в доме
	int current_floor; // текущий этаж
	bool gate; // состояние дверей ( 0 - open/ 1 - close)
	int min_weight; // минимальынй вес
	int max_weight; // максимальный вес
	int weight; // текущий вес

	Elevator();
	Elevator(int _n_floors, int _min_weight, int _max_weight) : n_floors(_n_floors), min_weight(_min_weight), max_weight(_max_weight) {};
	void Call(int floor); // вызов лифта
	bool Check(); // проверка этажа, состояния дверей и веса
	void Move(int floor); // перемещение
}