@interface BPSEmpty : BMBookmarkableSubscription

- (id)upstreamSubscriptions;
- (void)cancel;
- (void)requestDemand:(long long)a0;

@end
