#include<iostream>
int main()
{
    char* input = "The quick brown fox jumps over the lazy dog";
    int count[26] = {0};  
    int i = 0;  
    int j;

    while(input[i] != '\0')
    {
        char ch = input[i];
        
        if(ch >= 'a' && ch <= 'z') 
		{
            count[ch - 'a']++;
        }

        i++;  
    }

    for(j = 0; j < 26; j++) 
    {
        std::cout << char('a' + j) << " = " << count[j] << "\n";
    }

    return 0;
}
 
