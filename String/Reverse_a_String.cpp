void reverse(string &str,int start,int end)
{
   if(start>end)
   return;
   char temp=str[start];
   str[start]=str[end];
   str[end]=temp;
   return reverse(str,start+1,end-1);
}


string reverseWord(string str){
    int start=0,end=str.length()-1;
    
    reverse(str,start,end);
    return str;
}

