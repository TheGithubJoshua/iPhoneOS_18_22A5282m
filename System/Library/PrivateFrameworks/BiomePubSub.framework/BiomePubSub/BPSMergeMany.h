@class NSArray;

@interface BPSMergeMany : BMBookmarkablePublisher

@property (readonly, nonatomic) NSArray *publishers;

+ (id)new;
+ (id)publisherWithPublisher:(id)a0 upstreams:(id)a1 bookmarkState:(id)a2;

- (id)bookmarkableUpstreams;
- (BOOL)canStoreInternalStateInBookmark;
- (id)init;
- (void)subscribe:(id)a0;
- (void).cxx_destruct;
- (id)initWithPublishers:(id)a0;

@end
