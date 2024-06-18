@interface TSUBacktrace : NSObject {
    void **_callstack;
    int _frames;
    int _initAdjustment;
}

+ (id)caller;
+ (id)new;
+ (id)backtrace;
+ (id)callee;

- (id)caller;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void)dealloc;
- (id)callee;
- (id)backtraceString;
- (id)initWithAdjustment:(int)a0;
- (id)callerAtIndex:(long long)a0;

@end
