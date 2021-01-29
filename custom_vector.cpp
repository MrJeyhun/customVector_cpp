#include <iostream>
#include <vector>

using namespace std;

class List {
private:
    vector <int> db_list {1,2,3,5,3};
public:
    void display_list() const {
        for(int nums: db_list) {
            cout << nums << endl;
        }
    }


    int get_size() {
        cout << db_list.size();
    }

    void add_to_tail(int x) {
        db_list.push_back(x);
    }

    void add_to_head(int x) {
        auto beginning = db_list.begin();
        db_list.insert(beginning, x);
    }

    void remove_tail() {
        db_list.erase(db_list.end());
    }

    void remove_head() {
        db_list.erase(db_list.begin());
    }

    void remove_item(int x) {
        for(size_t i{0}; i < db_list.size(); i++) {
            if(x == db_list[i]) {
                db_list.erase(db_list.begin()+i);
            }
        }
     }
};

int main()
{
    List newList;
   return 0;
}
