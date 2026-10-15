#include <iostream>
using namespace std;
int main(){
    cout << "提交什么作业？" <<endl;
    cout << "语文？/n数学？/n英语？" <<endl;
    /*以下就做了个框架等明天吧（o w o) */
    int xp = 0;
    cin >> xp;
    cout << "要发给什么老师？" <<endl;
    int sans = ' English';
    int xs = 'sx';
    char cs[] = "chinese";
    if (xp == sans){
        cout << "骗你的🤪" <<endl; //其实是不会了hhh
    }
    else if (xp == xs)
    {
        cout <<"骗你的" <<endl;
    }
    else if(xp == cs){
        cout <<"骗你的🤪" <<endl;
    }
    else;{
        cout <<"骗你的🤪"   <<endl;
    }
    
    return 0;
}