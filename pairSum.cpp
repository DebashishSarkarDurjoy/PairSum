#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

vector<int> pairSum(vector<int> arr, int Sum) {
  vector<int> result;
  unordered_set<int> s;

  for (int i = 0; i < arr.size(); i++) {
    int x = Sum - arr[i];
    if (s.find(x) != s.end()) {
      result.push_back(x);
      result.push_back(arr[i]);
      return result;
    }
    s.insert(arr[i]);
  }

  return {};
}

int main(void) {
  vector<int> arr{10,5,2,-6,9,11};
  int S = 4;

  auto p = pairSum(arr, S);
  if(p.size() == 0) cout << "No such pair";
  else cout << p[0] << ", " << p[1] << endl;

  return 0;
}
