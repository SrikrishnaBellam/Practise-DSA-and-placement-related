#include <iostream>
#include <vector>

using namespace std;

class Arrays {
private:
    int size;
    std::vector<int> nums;

public:
    Arrays() : size(0), nums(1) {}

    bool isEmpty() const { return size == 0; }

    int search(int target) const {
        if (isEmpty()) {
            return -1;
        }
        for (int i = 0; i < size; i++) {
            if (nums[i] == target) {
                return i;
            }
        }
        return -1;
    }

    void resize(int newSize) {
        nums.resize(newSize);
    }

    void insert(int num) {
        if (size == nums.size()) {
            resize(size * 2);
        }
        nums[size++] = num;
    }

    void deleteElement(int target) {
        int index = search(target);
        if (index != -1) {
            for (int i = index; i < size - 1; i++) {
                nums[i] = nums[i + 1];
            }
            nums[--size] = 0;
            if (size > 0 && size == nums.size() / 4) {
                resize(nums.size() / 2);
            }
        }
    }

    void traverse() const {
        std::cout << "[ ";
        for (int i = 0; i < size; i++) {
            std::cout << nums[i] << " ";
        }
        std::cout << "]" << std::endl;
    }

    int getNumsSize() const {
        return nums.size();
    }
};

int main() {
Arrays array;
    std::cout << array.search(5) << std::endl;
    array.insert(1);
    array.insert(2);
    array.insert(3);
    array.insert(4);
    array.insert(5);
    array.traverse();
    cout << array.getNumsSize() << std::endl;  // Use the getter method
    array.deleteElement(3);
    array.traverse();
    array.deleteElement(2);
    array.deleteElement(1);
    array.deleteElement(1);
    cout << array.getNumsSize() << std::endl;  // Use the getter method
    array.traverse();

    return 0;
}
