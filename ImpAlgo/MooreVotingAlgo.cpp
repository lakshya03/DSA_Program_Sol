int findMajorityElement(vector<int> a)
{
    int maj=0;
    int count=1;
    int n=a.size();
    for(int i=1;i<n;i++)
    {
        a[maj]==a[i]?count++:count--;
        if(count==0)
        {
            maj=i;
            count=1;
        }
    }
    return a[maj];
}
bool checkmajelement(vector<int> a,int v)
{
    int count =0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==v)
        count++;
    }
    if(count>=a.size()/2)
    return true;
    return false;
}

