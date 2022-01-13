#include <iostream>


void trieInsertion(int tabL[])
{
    int j = 0;
    for(int i = 2;i<5;i++)
    {
        int cle = tabL[i];
        j = i - 1;
        while(j >= 0 && tabL[j] > cle)
        {
            tabL[j + 1] = tabL[j];
            j--;
        }
        tabL[j+1] = cle;
    }
    for(int j = 0;j<5;j++)
    {
        std::cout << tabL[j] << std::endl;
    }
}


int main()
{
    int tabATrier[5] = {2,3,7,1,9};
    trieInsertion(tabATrier);

}
