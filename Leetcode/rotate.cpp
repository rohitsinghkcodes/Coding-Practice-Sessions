
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<vector<int>> matrix
	{
		{5,1,9,11},
		{2,4,8,10},
		{13,3,6,7},
        {15,14,12,16}
	};

	vector<vector<int>> v;
    vector<int> temp;
    for(int i=0;i<matrix.size();i++)
        {
            temp.clear();
            for(int j=0;j<matrix[i].size();j++)
            {
                temp.push_back(0);
            }
            v.push_back(temp);
        }
    
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[i].size();j++)
            {
                v[j][matrix[i].size()-i-1]=matrix[i][j];
            }
        }
       for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[i].size();j++)
            {
            cout<< v[i][j]<<" ";
            }
            cout<<endl;
        }

	return 0;
}
