#include <iostream>
#include "tabtenn0.h"
using namespace std;

int main(void)
{
    TableTennisPlayer player1("Chuck", "Blizzard", true);
    TableTennisPlayer player2("Tara", "Boomdea", false);
    player1.Name();
    if(player1.HashTable()) cout << ": has a table.\n";
    else cout << ": hasn't a table.\n";
    player2.Name();
    if(player2.HashTable()) cout << ": has a table.\n";
    else cout << ": hasn't a table.\n";
    return 0;
}