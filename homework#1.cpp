#include <string>
#include <iostream>
#include <cstdint>
#include <stdio.h>
int main() {
    int num = 123456789;

    char buf[256];
    int rem = num;
    int count = 0;
    bool sign = false;
    
    if ( num < 0 )
    {  
        sign = true;
        num *= -1;
    }
    else if ( num == 0 )
    {
        buf[count] = '0';
    }
    
    while(num > 0) 
    {
        buf[count] = (char)((num % 10) + 48);
        // buf[count] = num%10;
        // num = num / 10;
        // std::cout << "" << buf[count] << std::endl;
        // std::cout << "num/10 = " << num / 10 << std::endl;
        count++;
        num /= 10;
        buf[count + 1] = num / 10;
    }
    
    //count++;
    
    if ( sign )
    {  
        buf[count] = '-';
        count++;
        
    }
    
    for(int i = count; i >= 0; i--) 
    {
        std::cout << buf[i];
    }
}
