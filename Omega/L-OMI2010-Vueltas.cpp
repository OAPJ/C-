#include <bits/stdc++.h>

using namespace std;

int main() {
    int64_t m, n;
    cin>>m>>n;
    int64_t a[m][n];
    for (int64_t i = 0; i < m; i++)
        for (int64_t j = 0; j < n; j++)
            cin>>a[i][j];
    int64_t k, hs = 0, vs = 0;
    cin>>k;
    char accion;
    for (int64_t i = 0; i < k; i++) {
        cin>>accion;
        if(accion == 'V') vs++;
        else hs++;
    }
    bool h = hs%2, v = vs%2;
    if(!h && v)
        for (int64_t i = m-1; i >= 0; i--) {
            for (int64_t j = 0; j < n; j++)
                cout<<a[i][j]<<" ";
            cout<<endl;
        }
    else if(h && !v)
        for (int64_t i = 0; i < m; i++) {
            for (int64_t j = n-1; j >= 0; j--)
                cout<<a[i][j]<<" ";
            cout<<endl;
        }
    else if(h && v)
        for (int64_t i = m-1; i >= 0; i--) {
            for (int64_t j = n-1; j >= 0; j--)
                cout<<a[i][j]<<" ";
            cout<<endl;
        }
    else
        for (int64_t i = 0; i < m; i++) {
            for (int64_t j = 0; j < n; j++)
                cout<<a[i][j]<<" ";
            cout<<endl;
        }
    return 0;
}
