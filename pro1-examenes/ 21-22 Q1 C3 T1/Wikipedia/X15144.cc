   
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Article {
    string identifier;
    string topic;
    int freq;
};

vector<Article> initialize_art_vector( int n) {
    vector<Article> res(n);
    for ( int i = 0; i < n; ++i) {
        cin >> res [i].identifier >> res[i].topic ;
        res[i].freq = 0;
    }
    return res;
}

void write_art_vector( const vector<Article>& v) {
    int n = v.size( ) ;
    for ( int i = 0; i < n; ++i) {
        cout << v[i].topic << ' ' << v[i].freq << ' ' << v[i].identifier << endl ;
    }
}

bool cmp( const Article& a, const Article& b) {
    if (a.topic != b.topic) return a.topic < b.topic;
    if (a.freq != b.freq) return a.freq > b.freq;
    return a.identifier < b.identifier;
}

int effi_search(vector<Article>& v , string id) {
    int i = 0;
    int j = v.size() - 1;
    while (v[i].identifier != id) {
        int mid = (i + j) / 2; // i <= mid < j
        if (v[mid].identifier < id) i = mid + 1;
        else j = mid;
    }
    return i;
}
int main( ) {
    int n;
    cin >> n;
    vector<Article> v = initialize_art_vector(n);
    string id;
    while (cin >> id) {
        int pos = effi_search(v,id);
        ++v[pos].freq;
    }
    sort(v.begin(), v.end(), cmp);
    write_art_vector(v);
}