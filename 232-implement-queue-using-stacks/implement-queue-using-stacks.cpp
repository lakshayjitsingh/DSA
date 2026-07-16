class MyQueue {
stack<int> in, out;
void transfer() {
if (out.empty())
while (!in.empty()) { out.push(in.top()); in.pop(); }
}
public:
void push(int x) { in.push(x); }
int pop() { transfer(); int t = out.top(); out.pop(); return t; }
int peek() { transfer(); return out.top(); }
bool empty() { return in.empty() && out.empty(); }
};