#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <map>
using namespace std;

int main()
{

    map<int,int> test_map;
    int num = 11;
    for(auto i = 0; i < num; ++i)
    {
        test_map[i]=i;
    }
    auto it = test_map.begin();

    for (; it != test_map.end() ;) {
        if( (it->second & 1) == 0 )
        {
            test_map.erase(it++);
        }
        else
        {
            it++;
        }
    }


    auto it1 = test_map.begin();
    while (it1 != test_map.end())
    {
        cout<<"first-> "<<it1->first<<" second->"<<it1->second<<endl;
        it1++;
    }

    return 0;
}