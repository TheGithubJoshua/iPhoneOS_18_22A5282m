@class NSMutableDictionary, NSHashTable;

@interface _UISceneHostingGraph : NSObject <UISceneHostingGraph> {
    NSMutableDictionary *_hostingGraph;
    NSHashTable *_lazy_contextTrackingAssertions;
}

+ (id)sharedInstance;

- (id)_init;
- (void)_noteContextID:(unsigned int)a0 hostedByWindow:(id)a1;
- (id)observeLocalWindowGraphHostingContextID:(unsigned int)a0 withHandler:(id /* block */)a1;
- (id)localWindowGraphHostingContextID:(unsigned int)a0;
- (void).cxx_destruct;
- (id)_localWindowGraphHostingContextID:(unsigned int)a0;

@end
