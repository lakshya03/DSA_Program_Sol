int maxElement(vector<int>arr)
{
  if(arr.size()==0)
    return 0;
  int maxValue=arr[0];
  for(int i=1;i<arr.size();i++)
  {
    if(maxValue<arr[i])
      maxvalue=arr[i];
  }
  return maxValue;
}