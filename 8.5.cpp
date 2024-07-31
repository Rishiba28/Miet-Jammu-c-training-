class Solution {

public:

 int findMaxConsecutiveOnes(vector<int>& nums) {

  // int arr[6];

  // int size = sizeof() / sizeof(arr[0]);

  int max_sum = 0;

  int current_sum = 0;

  for (int i = 0; i < nums.size(); i++) {

   if (nums[i] == 1) {

    current_sum = current_sum + nums[i];

    if (current_sum > max_sum) {

     max_sum = current_sum;

    }

   } else {

    current_sum = 0;

   }

  }

  return max_sum;

 }

};
