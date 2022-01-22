#include <iostream>

using namespace std;

int main(){
  int A,B,N,M,Y;

  cin>>N>>M>>Y;

  A=N+((N-Y+M*Y)/(M-1));
  B=(N-Y+M*Y)/(M-1);

  cout<<A<<" "<<B;

  return 0;

}
