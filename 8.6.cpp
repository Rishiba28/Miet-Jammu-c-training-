class Solution {



public:

 int findMaxConsecutiveOnes(vector<int>& nums) {

  int sum=0,mSum=0;

  for(int i=0;i<nums.size();i++)

  {

   if(nums[i]==0)

   {

    sum=0;

   }

   else{

    sum+=1;

    if(sum>mSum)

     mSum=sum;

   }

  }

  return mSum;

 }

};
