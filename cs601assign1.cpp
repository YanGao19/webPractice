//cs601 assign1_3
#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

int main(){

	cout << "Please input a list of Integer Number: " << endl;
	vector<int> p;
	int i = 0,vSize,total;
	string str,temp;
	getline(cin,str);
	stringstream input(str);
	while(input >> i){
		p.push_back(i);
	}
	
	vSize = p.size();
	for(int j = 0 ;j<vSize; j++)
	{
		for(int k = j+1 ; k< vSize ;k++)
		{
			if(p[j] == p[k])
			{
				total ++;
			}
		}
	}
	cout << "The Total duplicates number is : " << total<< endl;
	return 0;
}