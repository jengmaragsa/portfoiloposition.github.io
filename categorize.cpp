#include <iostream>

using namespace std;

int main(){
  int x,count;
  int less[99],high[99];
  string cate[99];
  string sum;

  cin>>x>>count;

  for(int i=0;i<count;i++){
    cin>>less[i]>>high[i]>>cate[i];
  }
  //input

  for(int i=0;i<count;i++){
    if(x >= less[i] && x<= high[i]){
      sum = cate[i];
    }
  }
  //process

  cout<<sum;
  //output

  return 0 ;
}
