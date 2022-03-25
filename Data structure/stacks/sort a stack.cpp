void sortedInsert(stack<int> &stack, int num){
    //base condition
    if((stack.empty()) || (stack.top()<num))
    {
        stack.push(num);
        return;
    }
    int n = stack.top();
    stack.pop();
    //recursive call
    sortedInsert(stack, num);
    stack.push(n);
}
void sortStack(stack<int> &stack)
{
	// Write your code here
    if(stack.empty()){
        return ;
    }
    //picking up top element
    int num = stack.top();
    stack.pop();
    //recursive call
    sortStack(stack);
    //function for sorting
    sortedInsert(stack, num);
    
}
