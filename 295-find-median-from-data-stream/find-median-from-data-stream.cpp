class MedianFinder {
    multiset<int> left, right;

public:
    MedianFinder() {
    }
    
    void addNum(int num) {
        if (left.empty()) {
            left.insert(num);
            return;
        }

        if (num <= *left.rbegin())
            left.insert(num);
        else
            right.insert(num);

        if (left.size() > right.size() + 1) {
            auto it = prev(left.end());
            right.insert(*it);
            left.erase(it);
        }

        if (right.size() > left.size()) {
            auto it = right.begin();
            left.insert(*it);
            right.erase(it);
        }
    }
    
    double findMedian() {
        if (left.size() > right.size())
            return *left.rbegin();

        return (*left.rbegin() + *right.begin()) / 2.0;
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */