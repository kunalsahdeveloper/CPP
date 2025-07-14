#include<iostream> 
using namespace std;


// given insert element in the indexth position in stack;

void insertIntoStack(stack<int> st, int element ,int index){

    stack<int> temp;

    while(st.size()- index){
        int t = st.top();
        temp.push(t);
        st.pop();
    }
    st.push(element);
    while(!temp.empty()){
        t = temp.top();
        temp.pop();
        st.push(t);
    }

}

int main(){

    

    return 0;
}