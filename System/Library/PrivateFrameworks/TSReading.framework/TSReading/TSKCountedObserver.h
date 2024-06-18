@class TSUWeakReference;

@interface TSKCountedObserver : NSObject {
    TSUWeakReference *mWeakObserver;
    unsigned long long mCount;
}

- (id)initWithObserver:(id)a0;
- (unsigned long long)incrementCount;
- (void)dealloc;
- (id)observer;
- (unsigned long long)decrementCount;

@end
