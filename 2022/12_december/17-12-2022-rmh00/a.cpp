#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n;
    cin >> n;

    unordered_map<string, string> umap;

    while (n--) {
        string key, value;
        cin >> key >> value;
        umap.insert(pair<string, string>(key, value));
    }

    cin >> n;

    while (n--) {
        string key;
        cin >> key;
        auto itr = umap.find(key);

        if (itr == umap.end()) {
            cout << "element not found\n";
            continue;
        }
        cout << itr->second << "\n";
    }
}
