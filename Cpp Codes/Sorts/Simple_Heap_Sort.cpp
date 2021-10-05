//Sairaj Kapdi 19co47 SE COMP DS Exp8 Question 1.
#include <stdio.h>
#include <iostream>

using namespace std;

/*** function prototypes ***/
void display(int *, int);
int heapify(int *, int, int);
void heap_sort(int *, int);
void build_max_heap(int *, int);

/*** main function ***/
int main()
{

    int arr[40], len;

    cout << "Enter the number of elements in the heap:\n";
    scanf("%d", &len);

    cout << "Enter the elements of the heap:\n";
    for (int i = 0; i < len; i++)
        cin >> arr[i];

    cout << "\nArray before sorting: \n";
    display(arr, len);

    build_max_heap(arr, len);

    heap_sort(arr, len);

    cout << "Array after sorting: \n";
    display(arr, len);

    return 0;
}

/*** Displays the heap. ***/
void display(int *ptr, int len)
{

    for (int i = 0; i < len; i++)
        cout << ptr[i] << "\t";

    cout << "\n";
}

/*** Builds the heap. ***/
void build_max_heap(int *arr, int len)
{

    int height = len / 2;
    len++;
    while ((len)--)
    {
        //Get the last non-leaf node.
        int last_NLN = (len / 2) - 1;

        for (int i = last_NLN; i >= 0; i--)
        {
            heapify(arr, i, len);
            // printf("\nAdded %d at %d\n", arr[i], i);
        }
    }
}

/*** Actually builds the heap using a randomly ordered array. ***/
int heapify(int *arr, int i, int len)
{

    int lchild = (2 * i) + 1, rchild = lchild + 1, num = arr[i], temp, i_max;

    // Checks if it has only left child.
    if (rchild <= len - 1)
    {

        // Checks if the root is already larger than the childern.
        if (num >= arr[rchild] && num >= arr[lchild])
        {
            arr[i] = num;
            return 0;
        }
        else if (arr[lchild] > num && arr[lchild] > arr[rchild])
        { // checks if left child is greater than both
            // root as well as the right child.
            arr[i] = arr[lchild];
            arr[lchild] = num;
        }
        else
        { // else the right child is greater than both.
            arr[i] = arr[rchild];
            arr[rchild] = num;
        }
    }
    else
    {
        /// checks if the root is larger than the left child.
        if (num > arr[lchild])
        {
            return 0;
        }
        else
        {
            arr[i] = arr[lchild];
            arr[lchild] = num;
        }
    }

    return 0;
}

/*** Sorts the heap using a the heap sort method. ***/
void heap_sort(int *arr, int len)
{

    int root = arr[0], last_node, temp;

    while (len--)
    {
        // first swap the last node with the root.
        last_node = (len);
        root = arr[0];

        // swapping
        arr[0] = arr[last_node];
        arr[last_node] = root;

        int last_NLN = (len / 2) - 1;

        // then heapify.
        for (int i = last_NLN; i >= 0; i--)
        {
            heapify(arr, i, len);
        }
    }
}
