class FreqStack {
public:
    // value -> frequency
    unordered_map<int, int> freq;

    // frequency -> stack of values
    unordered_map<int, stack<int>> group;
    int maxFreq;

    FreqStack() { maxFreq = 0; }

    void push(int val) {

        freq[val]++;
        int f = freq[val];

        // Update maximum frequency
        maxFreq = max(maxFreq, f);

        // Push value into corresponding frequency stack
        group[f].push(val);
    }

    int pop() {

        // Most recent element having maximum frequency
        int val = group[maxFreq].top();

        // Remove it from the stack
        group[maxFreq].pop();

        // Decrease its frequency
        freq[val]--;

        // If no element has this frequency anymore
        if (group[maxFreq].empty()) {
            maxFreq--;
        }

        return val;
    }
};

/**
 * Your FreqStack object will be instantiated and called as such:
 * FreqStack* obj = new FreqStack();
 * obj->push(val);
 * int param_2 = obj->pop();
 */