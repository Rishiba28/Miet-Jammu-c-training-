#include <iostream>

#include <vector>

#include <algorithm>

using namespace std;

bool canAttendMeetings(vector<vector<int>> &time) {

 sort(time.begin(),time.end(),[](vector<int> &a,vector<int> &b) {

    return a[0]<b[0];

   });

 for (int i=1;i<time.size();i++) {

  if (time[i][0]<time[i-1][1]){

   return false;

  }

 }

 return true;

}

int main(){

 vector<vector<int>>time={{7,10},{2,4}};

 string a=(canAttendMeetings(time)?"true":"false");

 cout<<"Output: "<<a;

 return 0;

}
