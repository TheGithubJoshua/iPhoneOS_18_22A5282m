@class NSMutableArray;

@interface SizeContext : NSObject {
    NSMutableArray *_windowContextStack;
}

+ (id)sharedInstance;

- (id)init;
- (BOOL)hasWindowForCurrentContext;
- (void)pushContextWithWindow:(id)a0;
- (void)popContextFromWindow:(id)a0;
- (id)windowForCurrentContext;
- (void).cxx_destruct;

@end
