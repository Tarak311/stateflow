#include "States.h"



States::States(int nip,int nst,int hexnumber, int number_of_ip)
{
	this->take_ip(nip,nst,hexnumber, number_of_ip_node,number_of_ip);// the last variable should be global variable
	State_relation();
	make_trans_to_class();
}


States::~States()
{
}

void States::State_relation()
{

}

void States::take_ip(int num_of_ip,int num_of_state, int hexnumber, int number_of_ip_node, int number_of_ip)
{
	int nexthex;
	cout << "for the state " << hexnumber << ",please provide number of input and no" << endl;
	cin >> hex >>nexthex;
	bool **input_node_states = new bool*[number_of_ip_node];
	int temp = **input_node_states;
	for (int i = 0; i < number_of_ip_node; i++)
	{
		this->hex_to_arrary(nexthex, *input_node_states);
		*input_node_states++;
	}
	**input_node_states = temp;
}

void States::make_trans_to_class()
{
}

void States::state_equation_manipulation()
{
}

void States::hex_to_arrary(int hexnum, bool *bit_array )
{
	int hexnum = 0x00 ,dummy_value= 0x01;
	
	bool *bin_array = new bool[];		// declare array
	bin_array = bit_array;				//assign address of each other ie, passed as a refrence

	for (int n = 0; n < 16; n++)
	{
		if (hexnum && dummy_value == 1)		//if it is true then assign 1 to last variable
		{
			bin_array[n] = true;
		} //else statement remaining
		hexnum = hexnum >> 1;			//right shift
		
	}

}
