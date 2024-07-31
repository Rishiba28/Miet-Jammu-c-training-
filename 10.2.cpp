#include <iostream>

#include <vector>

#include <algorithm>

using namespace std;

bool canAttendMeetings(vector<vector<int>>& intervals) {

 sort(intervals.begin(),intervals.end(),[](const vector<int>& a,const vector<int>& b){

  return a[0]<b[0];

 });

 for (int i=1;i<intervals.size();i++){

  if (intervals[i - 1][1]>intervals[i][0]){

   return false;

  }

 }

 return true;

}

int main(){

 vector<vector<int>> time={{0,30},{5,10},{15,20}};

 if(canAttendMeetings(time))

  cout<<"true"<<endl;

 else

  cout << "false" << endl;

   vector<vector<int>> time1={{7,10},{2,4}};

   if(canAttendMeetings(time1))

  cout<<"true"<<endl;

 else

  cout << "false" << endl;

 return 0;

}

