/*
 * simplearray.cpp
 *
 *  Created on: Feb 26, 2015
 *      Author: Aurelio Arango
 *     Problem: Given an integer array remove any duplicates.
 *
 *
 */

#include <iostream>

using namespace std;

int * remove_duplicates(int *array,int size);
void print_array(int * array);//prints an entire array contents, looks for a null character at the end of the array.

int main()
{

	int numbers [] = {1,2,2,2,3,4,5};//setting up initial integer array
	int * array = numbers;
	int array_size=7;
	print_array(array);
	array = remove_duplicates(array, array_size);
	print_array(array);

	return 0;
}

int * remove_duplicates(int * array, int size)
{
    int j=0;//set increment;
    int i=0;

    for(i=0; i<size; i++)
    {
    	int temp_value = array[i];//getting first value
    	//cout <<"for loop: "<< i<<endl;
    	while(temp_value == array[i])
    	{
    		i++;// Mismatch found
    		i=i-1;//decrement position because next iteration will include mismatch
    	}
    	cout << "value(before): "<< temp_value<<endl;
    	array[j] = temp_value;//value to save
    	//cout << "value(after): "<< array[i]<<endl;

    	j++;//index tracking position
    }
	array[j]='\0';
	return array;
}
//This function displays all items in an array. Array must have null character at the end of the array.

void print_array(int * array)
{
	int i=0;
	while(array[i]!='\0')//looks keeps displaying until it finds Null character
	{
		cout <<"Item at "<< i << " value: "<<array[i] <<endl;
		i++;
	}
}
