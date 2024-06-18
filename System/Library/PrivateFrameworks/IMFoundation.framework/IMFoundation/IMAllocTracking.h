@class NSMutableArray;

@interface IMAllocTracking : NSObject {
    NSMutableArray *_callStacks;
}

- (oneway void)release;
- (id)retain;
- (void)dealloc;
- (void)_registerCallstack;

@end
