// Litwo.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	string slowoA;
	string slowoB;
	
	string max;
	string tempmax;
	while (slowoA != "lolz")
	{
		cin >> slowoA;
		cin >> slowoB;
		for (int i = 0; i < slowoA.size(); i++)
		{
			int tempi = i;
			for (int j = 0; j < slowoB.size(); j++)
			{
				if (slowoB[j] == slowoA[i])
				{
					if (i == slowoA.size())
					{
						break;
					}
					tempmax = tempmax + slowoB[j];
					i++;
				}
				if (max.size() < tempmax.size())
				{
					max = tempmax;
					continue;
				}
			}
			tempmax = "";
			i = tempi;
		}
		cout << max<<endl;
		max = "";
		tempmax = "";
	}
	return 0;

}

