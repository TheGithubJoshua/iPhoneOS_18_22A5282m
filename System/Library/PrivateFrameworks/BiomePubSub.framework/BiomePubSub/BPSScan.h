@protocol BPSPublisher;

@interface BPSScan : BMBookmarkablePublisher

@property (readonly, nonatomic) id<BPSPublisher> upstream;
@property (readonly, nonatomic) id initialResult;
@property (readonly, copy, nonatomic) id /* block */ nextPartialResult;

+ (id)publisherWithPublisher:(id)a0 upstreams:(id)a1 bookmarkState:(id)a2;

- (BOOL)canStorePassThroughValueInBookmark;
- (id)bookmarkableUpstreams;
- (BOOL)canStoreInternalStateInBookmark;
- (void)subscribe:(id)a0;
- (id)initWithUpstream:(id)a0 initialResult:(id)a1 nextPartialResult:(id /* block */)a2;
- (void).cxx_destruct;

@end
