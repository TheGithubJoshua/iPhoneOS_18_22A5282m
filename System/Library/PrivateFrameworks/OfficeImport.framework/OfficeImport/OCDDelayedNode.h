@protocol OCDDelayedNodeContext;

@interface OCDDelayedNode : NSObject {
    id<OCDDelayedNodeContext> mDelayedContext;
    BOOL mLoaded;
}

- (BOOL)load;
- (void)setLoaded:(BOOL)a0;
- (void).cxx_destruct;
- (BOOL)isLoaded;
- (id)delayedContext;
- (void)setDelayedContext:(id)a0;

@end
