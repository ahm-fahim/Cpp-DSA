#include <iostream>
using  namespace  std;

int main(){
    int n,m;
    int x ;

    cin >> n >> m;

    int arr[n][m];

    for(int i = 0; i < n; i++){
        for(int j = 0; j<m; j++) {
            cin >> arr[i][j];
        }
    }

    cout << "Matrix : \n";
    for(int i =0; i < n; i++){
        for(int j = 0; j< m ; j++){
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }

    //find value
    cout <<"Which value you want to find : ";
    cin >> x;

    bool flag = false;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(arr[i][j] == x){
                cout  << i <<", "<< j << "\n";
                flag = true;
            }
        }
    }

    if(flag){
        cout << "We find the number " << x << "\n" ;
    }else{
        cout << "Not Found\n";
    }

    return 0;
}

