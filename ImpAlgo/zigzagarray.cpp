void zigZagarr(vector<int> arr)
{
  for(int i=0;i<n-1;i++)
  {
    if(i%2 ==0  && a[i]>a[i+1])
      swap(a[i],a[i+1]);
    else if( a[i]<a[i+1])
      swap(a[i],a[i+1]);
  }
  }