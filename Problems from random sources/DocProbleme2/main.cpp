/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <vector>

using namespace std;

void dominantIndex(vector<int>& nums) {
    int m=-1;
    int rez;
    int max=0;
    int cnt=0;
    int max2=0;
    for(int i=0;i<nums.size();++i){
        if(nums[i]>=max)
            max=nums[i];

    }
    for(int i=0;i<nums.size();++i)
    {
        if(nums[i]>=max2 && nums[i]<max )
            max2=nums[i];
    }

    if(max>=max2/2)
        cout<<max<<" "<<max2<<" " <<1<<endl;
    else
        cout<<max<<" "<<max2<<" "<< m<<endl;


}

int main()
{
    int n;
    vector<int> nums(5);
    for(int i=0;i<n;++i){
        cin>>n;

        nums.push_back(n);
    }

    dominantIndex(nums);


    return 0;
}
