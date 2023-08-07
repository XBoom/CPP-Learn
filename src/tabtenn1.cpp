#include <iostream>
#include "tabtenn1.h"
using namespace std;

RatedPlayer::RatedPlayer(unsigned int r, const string & fn, const string & ln, bool ht):TableTennisPlayer(fn, ln, ht)
{
    rating = r;
}