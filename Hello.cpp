#include <iostream>
#include <iomanip>
#include <math.h>
using std::cout;
using std::endl;
using std::setw;
using std::cin;

const int LOVE_AGE = 80;
int main(){
   char letter ='a' - 'a' + 'A';
   int score1, score2, score3;
   float average;
   int base1 = 700;
   int base2 = 800;
   float hypo = sqrt(pow(base1, 2) + pow(base2, 2));
   cout << "score1" << endl;
   cin >> score1;
   cout << "score2" << endl;
   cin >> score2;
   cout << "score3" << endl;
   cin >> score3;
   average = (score1 + score2 + score3) / 3;
   cout << average << endl;
   cout << letter <<endl;
   cout<< hypo;
   return 0;
}