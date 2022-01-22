#include <iostream>

using namespace std;

int main(){
  int i,j=0,count,product[99];
  int count_position;
  int position[99];
  int sum=0;

  cin>>count;

  for(i=0;i<count;i++){
    cin>>product[i];
  }
  cin>>count_position;
//input

  for(i=0;i<count;i++){

    if(product[i] == count_position){
      while (j < count) {
        position[j]=i+1;
        j++;
        sum++;
        break;
      }
    }

  }
  //process


  if(sum != 0){

  cout<<"Position: ";
  for(i=0;i<sum;i++){
    if(sum-i>1){
    cout<<position[i]<<",";
  }
  else{
    cout<<position[i];
  }

  }
}

else{
  cout<<"Not Found";
}
//output



  return 0;


}
