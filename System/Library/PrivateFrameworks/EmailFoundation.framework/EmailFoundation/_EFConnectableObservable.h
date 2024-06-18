@class NSString, NSLock, EFCancelationToken;
@protocol EFObservable, EFObserver;

@interface _EFConnectableObservable : EFObservable <EFConnectableObservable> {
    id<EFObservable> _observable;
    id<EFObservable, EFObserver> _subject;
    NSLock *_lock;
    EFCancelationToken *_cancelable;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)subscribe:(id)a0;
- (id)connect;
- (void).cxx_destruct;
- (void)_disconnect;
- (id)initWithObservable:(id)a0 subject:(id)a1;

@end
