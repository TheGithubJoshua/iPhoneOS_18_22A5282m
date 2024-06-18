@protocol BPSPublisher;

@interface BPSLast : BMBookmarkablePublisher

@property (readonly, nonatomic) id<BPSPublisher> upstream;

+ (id)new;
+ (id)publisherWithPublisher:(id)a0 upstreams:(id)a1 bookmarkState:(id)a2;

- (id)bookmarkableUpstreams;
- (id)init;
- (void)subscribe:(id)a0;
- (void).cxx_destruct;
- (id)initWithUpstream:(id)a0;

@end
