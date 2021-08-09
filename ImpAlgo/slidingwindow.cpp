// maximum number of ones after one flip only
// By sliding window
int max1(vector<int>& a)
{
  int start=-1;
  int end=-1;
  int zc=0;
  while(start<=n && end <=n)
  {
   if(zc<=1)
     end++;
    else if(zc>1)
    {
      if(maxVal<end-start-1)
        maxVal=end-start-1
        zc=0;
    }
    if(a[end]==0)
      zc+=1;
  }
}
return maxVal;
}