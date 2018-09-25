#pragma once
#include <iostream>
#include ""

class Elevator
{
public:
	int n_floors; // ���-�� ������ � ����
	int current_floor; // ������� ����
	bool gate; // ��������� ������ ( 0 - open/ 1 - close)
	int min_weight; // ����������� ���
	int max_weight; // ������������ ���
	int weight; // ������� ���

	Elevator();
	Elevator(int _n_floors, int _min_weight, int _max_weight) : n_floors(_n_floors), min_weight(_min_weight), max_weight(_max_weight) {};
	void Call(int floor); // ����� �����
	bool Check(); // �������� �����, ��������� ������ � ����
	void Move(int floor); // �����������
}