  #include<iostream>
    #include<algorithm>
     
    using namespace std;
     
    int main()
    {
    int t; 
    cin>>t;
    int abc[t];
     
    for(int i=0; i<t; i++)
    cin>>abc[i];
     
    sort(abc,abc+t);
     
    for(int i=0; i<t; i++)
    cout<<'\n'<<abc[i];
     
    return 0;
    }