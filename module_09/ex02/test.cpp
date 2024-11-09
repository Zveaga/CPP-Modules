#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

// Function to generate the Jacobsthal sequence (used for insertion ordering)
std::vector<int> generateJacobsthalSequence(int n) {
    std::vector<int> seq(n);
    seq[0] = 0;
    seq[1] = 1;

    for (int i = 2; i < n; ++i) {
        seq[i] = seq[i - 1] + 2 * seq[i - 2];
    }

    return seq;
}

// Function to perform binary search
int binarySearch(const std::vector<int>& S, int start, int end, int key) {
    while (start < end) {
        int mid = start + (end - start) / 2;
        if (S[mid] < key)
            start = mid + 1;
        else
            end = mid;
    }
    return start;
}

// Function to insert into sorted sequence using binary search
void binaryInsert(std::vector<int>& S, int key) {
    int position = binarySearch(S, 0, S.size(), key);
    S.insert(S.begin() + position, key);
}

// Merge-Insertion Sort (Ford-Johnson algorithm)
void mergeInsertionSort(std::vector<int>& arr) {
    int n = arr.size();

    if (n <= 1) return;  // Base case: array of size 1 or less is already sorted

    // Step 1: Group elements into pairs and compare
    std::vector<int> largerElements;
    std::vector<int> remainingElements;

    // Compare pairs and separate larger and remaining elements
    for (int i = 0; i < n / 2; i++) {
        if (arr[2 * i] > arr[2 * i + 1]) {
            largerElements.push_back(arr[2 * i]);
            remainingElements.push_back(arr[2 * i + 1]);
        } else {
            largerElements.push_back(arr[2 * i + 1]);
            remainingElements.push_back(arr[2 * i]);
        }
    }

    // If odd number of elements, add the last one as a larger element
    if (n % 2 != 0) {
        largerElements.push_back(arr[n - 1]);
    }

    // Step 2: Recursively sort the larger elements (using mergeInsertionSort on largerElements)
    mergeInsertionSort(largerElements);

    // Step 3: Use Jacobsthal sequence to order the remaining elements
    std::vector<int> jacobsthalSequence = generateJacobsthalSequence(remainingElements.size());

    // Step 4: Insert the remaining elements into the sorted larger elements sequence using binary insertion
    for (int idx : jacobsthalSequence) {
        if (idx < remainingElements.size()) {
            binaryInsert(largerElements, remainingElements[idx]);
        }
    }

    // Copy sorted result back to original array
    arr = largerElements;
}

// Merge-Insertion Sort for list container
void mergeInsertionSort(std::list<int>& lst) {
    std::vector<int> arr(lst.begin(), lst.end());
    mergeInsertionSort(arr);
    lst.assign(arr.begin(), arr.end());
}

int main(int argc, char* argv[]) {
    // Parse command line arguments into a vector and list
    std::vector<int> vec;
    std::list<int> lst;

    for (int i = 1; i < argc; i++) {
        int num = std::stoi(argv[i]);
        vec.push_back(num);
        lst.push_back(num);
    }

    std::cout << "Original Vector: ";
    for (int num : vec) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Perform Merge-Insertion Sort on both containers
    mergeInsertionSort(vec);
    mergeInsertionSort(lst);

    // Output the sorted results
    std::cout << "Sorted Vector: ";
    for (int num : vec) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    std::cout << "Sorted List: ";
    for (int num : lst) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
