#include <iostream>

int getNextGap(int gap)
{
    // Shrink gap by Shrink factor
    gap = (gap*10)/13;
 
    if (gap < 1)
        return 1;
    return gap;
}
 

void sort(){

    int a[] = {12, 424, 11, 5, 16, 100, 1949, 8, 2, 27, 6909, 2999};
    int length = sizeof(a);
    int n = sizeof(a)/sizeof(a[0]);
    bool isSorted = false;
    bool changed = true;
    int i = 0;
    int gap = n;

    bool swapped = true;
    while (gap != 1 || swapped == true)
    {
        
        gap = getNextGap(gap);
 
        swapped = false;
 
        // Compare all elements with current gap
        for (int i=0; i<n-gap; i++)
        {
            if (a[i] > a[i+gap])
            {
                std::swap(a[i], a[i+gap]);
                swapped = true;
            }
        }
    }

    for(int i = 0; i < n; i++){
        std::cout << a[i] << ", ";
    }

}

int main(){

    sort();

}
