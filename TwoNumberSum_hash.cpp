#include <iostream>
#include <vector>

using namespace std;

int targetSum = 10;
int myArray[] ={3,5,-4,8,11,1,-1,6};
vector<int> twoNumber(vector<int> array, int targetSum){

	unordered_set<int> nums;

	for(int num : array){

		int potentialMatch = targetSum - num;
		if(nums.find(potentialMatch) != nums.end()){

			return vector<int>{potentialMatch,sum};
		}else{
			nums.insert(num);
		}

	}
	return {};
}


int main()
{

	cout<<"Main";
	twoNumber(myArray,targetSum);
	retun 0;

}
