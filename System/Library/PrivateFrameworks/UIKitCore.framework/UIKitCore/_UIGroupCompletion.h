@class NSMutableArray;

@interface _UIGroupCompletion : NSObject {
    NSMutableArray *_completions;
    unsigned long long _refCount;
}

- (void)addCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)complete;
- (void)_performAllCompletions;

@end
