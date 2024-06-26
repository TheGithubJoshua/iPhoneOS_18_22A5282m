@class NSMutableArray;

@interface AVRunLoopCondition : NSCondition {
    NSMutableArray *_runLoopStateList;
}

+ (void)initialize;

- (void)signal;
- (void)wait;
- (id)init;
- (void)waitInMode:(id)a0;
- (BOOL)waitUntilDate:(id)a0 inMode:(id)a1;
- (void)_signalRunLoopWithState:(id)a0;
- (void)dealloc;
- (void)broadcast;
- (BOOL)waitUntilDate:(id)a0;
- (BOOL)_waitInMode:(id)a0 untilDate:(id)a1;

@end
