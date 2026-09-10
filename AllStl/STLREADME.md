# STL Playbook

## Vector
`std::vector<int> v;`<br>
`v.assign(10, 1);  // size 10 all initialize to value 1`<br>
`std::reverse(v.begin(), v.end()); // In-place reverse`<br>
`std::vector<int> reversed(v.rbegin(), v.rend());   // copies in a new vector`<br>

## Stack
`std::stack<int> s;`<br>
`s.push(10);    // pushing value 10 on top of stack`<br>
`s.top();   // returns top element of stack`<br>
`s.pop();   // removes top element, return void`<br>
`s.size();   // returns size of the stack`<br>
`s.empty();   // returns true if stack is empty`<br>

## Queue
`std::queue<int> q;`<br>
`q.push(1);     // back pushes 1`<br>
`q.front();     // returns front element`<br>
`q.back();      // returns back element`<br>
`q.size();      // returns size of queue`<br>
`q.pop();      // removes front element`<br>

## Priority Queue
`std::priority_queue<int, vector<int>, CustomCompareLambda> pq(v.begin(), v.end());   // pq holds int with underlying container vector`<br>

## String
`string s = std::to_string(10);   // convert int to string`<br>
`int num = std::stoi("12345");  // convert string to int, use stol, stoll for long, long long`<br>

## Set
`std::set<int> set{1, 5, 3};`<br>
`set.insert(2);`<br>
`set.erase(1);`<br>
`set.contains(5);`<br>
`set.clear()`<br>

