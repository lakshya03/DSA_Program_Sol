int minElement(vector<int>arr)
{
  if(arr.size()==0)
    return 0;
  int minValue=arr[0];
  for(int i=1;i<arr.size();i++)
  {
    if(minValue>arr[i])
      minvalue=arr[i];
  }
  return minValue;
}