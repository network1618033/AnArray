/*******************************************************************
 *
 * Programmeur  :   Jonathan ZOGONA
 * Date         :   13 Décembre 2019
 *
 * But          :   Tester la classe AnArray
 * Fichier		:	ClientAnArray.cpp
 *
 *******************************************************************/

#include<iostream>
#include<cstdlib>

#include"AnArray.h"

using namespace std;

/**************** Programme principal *******************************/
int main()
{
	AnArray<int> scores;

	scores.add(5);
	scores.add(3);
	scores.add(8);
	scores.add(5);
	scores.add(7);

	cout << scores.getAt(2);

	for (int i = 0; i < scores.getSize(); i++)
	{
		cout << " i : " << scores.getAt(i) << endl;
	}

	scores.removeAt(2);
	
	cout << "After removeAt(2) ----------------------------------------" << endl;

	for (int i = 0; i < scores.getSize(); i++)
	{
		cout << " i : " << scores.getAt(i) << endl;
	}


	scores.insertAt(55, 2);
	
	cout << "After insertAt(55,2) ----------------------------------------" << endl;

	for (int i = 0; i < scores.getSize(); i++)
	{
		cout << " i : " << scores.getAt(i) << endl;
	}

	return EXIT_SUCCESS;
}

