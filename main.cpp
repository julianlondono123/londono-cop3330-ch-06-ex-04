/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Julian Londono
 */

#include <iostream>
#include <string>
#include <vector>


using namespace std;

class Name_value
{
public:
    string name;
    int score;
};

vector<Name_value> n_s;

void getData()
{
    cout << "Please enter a name, press enter, then input the score. To stop input enter 'NoName' in name and 0 in scores.\n";

    Name_value data;
    char loop = 'y';


    while (loop == 'y')
    {
        cout << "Name: ";
        cin >> data.name;
        cout << "Score: ";
        cin >> data.score;
        for (int i = 0; i < n_s.size(); ++i)
        {
            while (n_s[i].name == data.name)
            {
                cout << "Sorry, that name has already been entered. Please Re-Name it: \n" << endl;
                cin >> data.name;
            }
        }

        if (data.name == "NoName" && data.score == 0)
        {
            loop = 'n';
        }

        n_s.push_back(data);
    }

}

void printData()
{
    cout << '\n';


    for (int x = 0; x < n_s.size() - 1; ++x)
    {
        cout << n_s[x].name << '\t' << n_s[x].score << '\n';
    }

}

int main()
{

    getData();

    printData();


    return 0;

}