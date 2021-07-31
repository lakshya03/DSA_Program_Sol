//Repalce the element of array with greater element on right hand side
//eq. 16 17 4  3 5 2
// o/p 17 5 5  5 2 -1

void replaceGreater(vector<int> arr)
{
  int maxValue=-1;
  for(int i=arr.size()-1;i>=0;i--)
  {
    int temp=arr[i];
    arr[i]=maxValue;
    if(maxValue<temp)
      maxValue=temp;
  }
  
}