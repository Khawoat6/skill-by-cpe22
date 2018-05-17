#include <iostream>

using namespace std;

void hanoi(int move, char a, char b, char c)
{
  if(move == 1)
  {
    cout << "Move " << move << " from " << a << " to " << c << "\n";
  }
  else
  {  
    hanoi(move-1, a,c,b);
    cout << "Move " << move << " from " << a << " to " << c << "\n";
    hanoi(move-1,b,a,c);
  }
}

int main()
{
  int disc;
  cin >> disc;
  hanoi(disc, 'A', 'B', 'C');
}
