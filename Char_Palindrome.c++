 #include<iostream>
int main()
{
    char n[100];
    int i = 0, j, flag = 1;

    std::cout << "Enter value of Number: ";
    std::cin >> n;

    for(j = 0; n[j] != '\0'; j++); 
    j--;

    while(i < j)
    {
        if(n[i] != n[j])
        {
            flag = 0;
            break;
        }
        i++;
        j--;
    }

    if(flag)
    
        std::cout << "Palindrome Number";
    else
        std::cout << "Not Palindrome Number";

    return 0;
}

