@class BPSSubscriberList, BPSCompletion, BPSSubscription, NSString, NSMutableArray;

@interface BPSPassThroughSubject : BMBookmarkablePublisher <BPSSubject, BPSSubscriber> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (retain, nonatomic) NSMutableArray *upstreamSubscriptions;
@property (nonatomic) BOOL hasAnyDownstreamDemand;
@property (nonatomic) BOOL active;
@property (retain, nonatomic) BPSCompletion *completion;
@property (retain, nonatomic) BPSSubscriberList *downstreams;
@property (retain, nonatomic) BPSSubscription *sub;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)publisherWithPublisher:(id)a0 upstreams:(id)a1 bookmarkState:(id)a2;

- (BOOL)canStorePassThroughValueInBookmark;
- (id)bookmarkableUpstreams;
- (BOOL)canStoreInternalStateInBookmark;
- (id)init;
- (void)subscribe:(id)a0;
- (id)subscription;
- (void)receiveCompletion:(id)a0;
- (void)cancel;
- (void)disassociate:(long long)a0;
- (void)sendSubscription:(id)a0;
- (void).cxx_destruct;
- (void)acknowledgeDownstreamDemand;
- (void)sendValue:(id)a0;
- (void)receiveSubscription:(id)a0;
- (void)dealloc;
- (void)sendCompletion:(id)a0;
- (long long)receiveInput:(id)a0;

@end
