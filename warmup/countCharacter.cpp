// count the character where everything consider as different
void countchar(char[] s)
{
  int[] c= new int[256];
  for(int i=0;i<s.length();i++)
    c[s[i]]++;
  for(int i =0;i<256;i++)
  {
    if(c[i]!=0)
      cout<<c[i];
  }
}