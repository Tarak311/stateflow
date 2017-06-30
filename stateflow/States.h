#pragma once
#include<iostream>
#include<iomanip>
#include<conio.h>
#include<map>
#include<math.h>
using namespace std;
static bool ***State_equation = new bool**[];
namespace states_variables
{
	typedef struct 
	{
		bool *array_bolean = new bool[];
	}array_binary;
}

class States
{
public:
	States(int nip, int nst,int hexnumber, int number_of_ip);
	~States();
	void State_relation();
	void take_ip(int num_of_ip, int num_of_state, int hexnumber, int number_of_ip_node, int number_of_ip);
	void make_trans_to_class();
	void state_equation_manipulation();
	void hex_to_arrary(int hexnumber, bool *bit_array);
	
private:
	int i, j, k ,number_of_ip_node,number_op_nodes,hexnumber;
	string name_of_state;
	States *related_state_before, *related_state_after;
	bool **trans_to_class = new bool*[];
	bool **trans_from_class = new bool*[];
	bool *ip = new bool[];
	bool *current_state = new bool[];
	
};

