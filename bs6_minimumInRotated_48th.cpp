#include <iostream>

/*
                Q. find minmum in rotated sorted array
                                        with unique elements

            explanation -  arr[] = {4, 5, 6, 7, 0, 1, 2} 
                                we have to return the value of minimum
                                        in this case minimum is '0'

            brute force - linear search will be the brute force solution which will give us TC - O(N)


        Optimal sol -  we apply binary search

                    firstly we must identify the sorted half in  arr[] = {4, 5, 6, 7, 0, 1, 2}
                                                                          l        m        h
                            which is low to mid, bcz in mid to high 7 is greater than 2
                       note - if an array is rotated and the rotated part reaches to the mid then the minimun 
                                element is always on the right half

                    lets take answer as ans = INT_MAX
                    from the left, which is the sorted half
                    lets select low to mid (4, 5, 6, 7), and pick the minm which is '4', update ans = 4
                    then apply binary - low to mid (0, 1), and pick the minm which is '0', update ans = 0
                    then apply binary - low to mid (2), and pick the minm which is '2', this minm is not
                        minm then '0' so the ans remains as '0'


                    lets take another example,  arr[] = {7, 8, 1, 2, 3, 4, 5, 6}
                    we will start from right half bcz this part is sorted and we dont know if minim is in left

                    lets take answer as ans = INT_MAX
                    lets select mid to high (2, 3, 4, 5, 6), and pick the minm which is '2', update ans = 2
                    then apply binary - low to mid (7, 8), and pick the minm which is '7', same ans = 2             // we are taking left bcz right half is done
                    then apply binary - low to mid (1), and pick the minm which is '1', update ans = 1


        pseudo code
f(arr, n)
{
    low = 0, high = n-1, ans = INT_MAX
    while(low <= high)
    {
        mid = (low + high)/2
        if(a[low] <= a[mid])
        {
            ans = min(ans, a[low])
            low = mid + 1
        }
        else
        {
            ans = min(ans, arr[mid])
            high = mid - 1
        }
    }
}


        Actual code
int findMin(vector<int> &arr)
{
    int low = 0, high = arr.size() - 1, ans = INT_MAX;
    while(low <= high)
    {
        int mid = (low + high)/2;
        if(arr[low] <= arr[mid])
        {
            ans = min(ans, arr[low]);
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
            ans = min(ans, arr[mid]);
        }
    }
    return ans;
}

            TC - O(log base2 N)


        Optimized code  (not neessary soln)
int findMin(vector<int> &arr)
{
    int low = 0, high = arr.size() - 1, ans = INT_MAX;
    while(low <= high)
    {
        int mid = (low + high)/2;
        // search space is already sorted
        // then always arr[low] is will be smaller
        // in that search space
        if(arr[low] <= arr[high])
        {
            ans = min(ans, arr[low]);
            break;
        }

        if(arr[low] <= arr[mid])
        {
            ans = min(ans, arr[low]);
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
            ans = min(ans, arr[mid]);
        }
    }
    return ans;
}
*/

int main()
{
    std::cout << "Hello World!\n";
}