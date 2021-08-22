#include <iostream>
#include <vector>

using namespace std;

int targetSum = 10;
int myArray[] ={3,5,-4,8,11,1,-1,6};

int twoNumberSum(int myArray, int targetSum);

void twoNumberSum(int myArray[], int targetSum) {


	cout<<"Array len:"<<sizeof(myArray);

	for (int i =0;i<sizeof(myArray);i++){
		for(int j = i+1; j<sizeof(myArray);j++){
		  if(myArray[i] + myArray[j] == targetSum){
		    cout<<"Right Pair:"<<myArray[i]<<","<<myArray[j]<<endl;
		   }
		  else{
		    cout<<"###### Wrong Pair:"<<myArray[i]<<","<<myArray[j]<<endl;

		  }

		}


	}
	cout<<"\n";
	return ;

}

int main()
{

	cout<<"Calling Main"<<sizeof(myArray)<<"\n";
	twoNumberSum(myArray,targetSum);
	return 0;

}

