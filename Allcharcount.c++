#include<iostream>
int main()
{
char ch;//=65;
//std::cout<<ch<<"\n";
//ch=ch+32;
//std::cout<<ch<<"\n";
    char* input = "The quick brown fox jumps over the laZy dog";
    int count[26] = {0};  
    int i=0,j;  
    int convertor='a'-'A';
    while(input[i] != '\0')
    {
        ch = input[i];
        
        if(ch >= 'a' && ch <= 'z' ||ch>='A' && ch<='Z') 
		{
		if(ch>='A' && ch<='Z')
		ch=ch+convertor;
            count[ch - 'a']++;
        }
        i++;  
    }
    for(j = 0; j < 26; j++) 
    {
//       std::cout << char('a' + j) << " = " << count[j] << "\n";
if(count[j]<1)
{
std::cout<<"Not a Panagram";
return 0;
}
    }
    std::cout<<"Is a Panagram";
    return 0;
}
  
