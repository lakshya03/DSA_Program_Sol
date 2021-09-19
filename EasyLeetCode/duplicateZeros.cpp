class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int nZ=0;
        int i=0;
        for (i = 0;nZ+ i < arr.size(); ++i) nZ+= arr[i] == 0;
        for (i = i - 1; nZ > 0; --i) {
    if (i + nZ < arr.size()) arr[i + nZ] = arr[i];
    if (arr[i] == 0) arr[i + --nZ] = arr[i];
  }
    }
};