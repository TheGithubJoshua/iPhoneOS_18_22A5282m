@class NSHashTable;

@interface SBFAlwaysOnLiveRenderingAssertionWeakCollection : NSObject {
    NSHashTable *_assertions;
}

- (id)init;
- (void)removeAll;
- (void)addAssertion:(id)a0;
- (BOOL)isEmpty;
- (void).cxx_destruct;
- (void)removeAssertion:(id)a0;
- (long long)count;
- (void)invalidateAll;
- (id)mostRecentlyCreatedValidAssertion;

@end
