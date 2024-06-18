@class NSString;
@protocol BPSPublisher, BPSSubscriber, BPSSubject;

@interface BPSMulticast : BMBookmarkablePublisher <BPSConnectablePublisher> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    id<BPSSubject, BPSSubscriber> _subject;
}

@property (readonly, nonatomic) id<BPSPublisher> upstream;
@property (readonly, nonatomic) id /* block */ createSubject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)publisherWithPublisher:(id)a0 upstreams:(id)a1 bookmarkState:(id)a2;

- (id)bookmarkableUpstreams;
- (BOOL)canStoreInternalStateInBookmark;
- (void)subscribe:(id)a0;
- (id)lazySubject;
- (void)connect;
- (void).cxx_destruct;
- (id)initWithUpstream:(id)a0 createSubject:(id /* block */)a1;

@end
