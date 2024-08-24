#include <fstream>
#include <stack>
using namespace std;

int main() {
    ifstream fin("parantezare.in");
    ofstream fout("parantezare.out");
    string expresie;
    int m;
    fin >> expresie >> m;
    stack<int> st;
    int pozitii[100100];
    for (int i = 0; i < expresie.length(); i++) {
        if (expresie[i] == '(') {
            st.push(i);
        } else if (expresie[i] == ')') {
            int poz = st.top();
            st.pop();
            pozitii[poz] = i;
        }
    }
    while (m--) {
        int i;
        fin >> i;
        fout << pozitii[i] << " ";
    }
    fin.close();
    fout.close();
    return 0;
}
