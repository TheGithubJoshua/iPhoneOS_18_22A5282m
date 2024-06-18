@interface BMBookmarkableSubscription : BPSSubscription <BMBookmarkableSubscription>

- (id)upstreamSubscriptions;
- (id)newBookmark;
- (void)cancel;
- (void)requestDemand:(long long)a0;

@end
