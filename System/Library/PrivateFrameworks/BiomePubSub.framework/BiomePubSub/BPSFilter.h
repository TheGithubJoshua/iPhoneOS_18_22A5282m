@class BPSPublisher;

@interface BPSFilter : BMBookmarkablePublisher

@property (retain, nonatomic) BPSPublisher *upstream;
@property (readonly, nonatomic) id /* block */ isIncluded;

+ (id)new;
+ (id)publisherWithPublisher:(id)a0 upstreams:(id)a1 bookmarkState:(id)a2;

- (id)bookmarkableUpstreams;
- (BOOL)canStoreInternalStateInBookmark;
- (id)init;
- (void)subscribe:(id)a0;
- (void).cxx_destruct;
- (id)initWithUpstream:(id)a0 isIncluded:(id /* block */)a1;

@end
