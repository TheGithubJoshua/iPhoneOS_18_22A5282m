@class NSString;

@interface SBSceneLayoutSynchronizeTransitionTransaction : BSTransaction {
    NSString *_debugName;
}

- (id)init;
- (BOOL)_canBeInterrupted;
- (void)synchronize;
- (id)_graphNodeDebugName;
- (void).cxx_destruct;
- (id)initWithDebugName:(id)a0;

@end
