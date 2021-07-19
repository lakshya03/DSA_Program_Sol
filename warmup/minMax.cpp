vector<int> minmaxElement(vector<int> arr)
{
  vector<int>res;
  if(arr.size()==0)
    return res;
  int maxValue=arr[0];
  int minValue=arr[0];
  for(int i=0;i<arr.size();i++)
  {
    if(arr[i]>maxVaue)
      maxValue=arr[i];
    if(arr[i]<minValue)
      minValue=arr[i];
  }
  res.push_back(minValue);
  res.push_back(maxValue);
  return res;
}