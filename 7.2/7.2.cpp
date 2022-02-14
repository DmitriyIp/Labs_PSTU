#include <iostream>
#include <string>

using namespace std;

void conversion10to3(int num, int first, ...)
{
    
    
        int* ptr = &first;
        while (num>=1)
        {
                
                string j = "";
                int k = *ptr;
                while (k>0)
                {
      
                    int nb = k % 3;
                    string s = to_string(nb);
                    j += s;
                    k = k / 3;
                }

                int len = j.length();
                int n = len - 1;
                for (int i = 0; i < (len / 2); i++) {
                    swap(j[i], j[n]);
                    n = n - 1;
                }
                cout << j << " ";
                num = num - 1;
                ptr++;
        }
}





int main()
{
    
    conversion10to3(3, 122, 65, 242);
    cout << endl;
    conversion10to3(4, 643, 5102, 324, 210);
    cout << endl;
    conversion10to3(7, 9831, 6564, 2421, 765, 221, 921, 102);


    
    
    return 0;
}