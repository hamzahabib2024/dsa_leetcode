//Subrectangle queries medium

#include <bits/stdc++.h>
using namespace std;

class SubrectangleQueries {
private:
    vector<vector<int>> rect;
    deque<array<int, 5>> updates;  // queue of updates

public:
    SubrectangleQueries(vector<vector<int>>& rectangle) {
        rect = rectangle;
    }

    void updateSubrectangle(int row1, int col1, int row2, int col2, int newValue) {
        // push update into queue
        updates.push_back({row1, col1, row2, col2, newValue});
    }

    int getValue(int row, int col) {
        // check updates in reverse (latest has priority)
        for (auto it = updates.rbegin(); it != updates.rend(); ++it) {
            auto &u = *it;
            if (row >= u[0] && row <= u[2] && col >= u[1] && col <= u[3]) {
                return u[4]; // new value found
            }
        }
        return rect[row][col]; //it will return original
    }
};


int main() {
    vector<vector<int>> rectangle = {{1,2,1},{4,3,4},{3,2,1},{1,1,1}};
    SubrectangleQueries obj(rectangle);

    cout << obj.getValue(0, 2) << "\n"; 
    obj.updateSubrectangle(0, 0, 3, 2, 5);
    cout << obj.getValue(0, 2) << "\n"; 
    cout << obj.getValue(3, 1) << "\n"; 
    obj.updateSubrectangle(3, 0, 3, 2, 10);
    cout << obj.getValue(3, 1) << "\n"; 
    cout << obj.getValue(0, 2) << "\n"; 
}
