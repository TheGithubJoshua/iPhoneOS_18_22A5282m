@class BLSAssertionAcquisitionObserver, NSString, NSArray, NSHashTable, BLSAssertionDescriptor, BLSAssertionIdentifier;
@protocol BLSAssertionService;

@interface BLSAssertion : NSObject <BLSAssertionServiceResponding, BSCancellable, BSInvalidatable> {
    BLSAssertionIdentifier *_identifier;
    BLSAssertionAcquisitionObserver *_acquisitionObserver;
    NSHashTable *_observers;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _lock_paused;
    BOOL _lock_invalidated;
    unsigned long long _lock_acquisitionState;
    unsigned long long _lock_acquiredMachContinuousTime;
}

@property (retain) id<BLSAssertionService> service;
@property (readonly, copy, nonatomic) NSString *explanation;
@property (readonly, copy, nonatomic) NSArray *attributes;
@property (readonly, nonatomic, getter=isAcquired) BOOL acquired;
@property (readonly, nonatomic, getter=isPaused) BOOL paused;
@property (readonly, nonatomic, getter=isActive) BOOL active;
@property (readonly, nonatomic) BLSAssertionDescriptor *descriptor;
@property (retain, nonatomic) BLSAssertionIdentifier *identifier;
@property (readonly, nonatomic) unsigned long long acquisitionState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)setDefaultService:(id)a0;
+ (id)acquireWithExplanation:(id)a0 observer:(id)a1 attributes:(id)a2;

- (void)removeObserver:(id)a0;
- (oneway void)serviceFailedToAcquireWithError:(id)a0;
- (void)restartTimeoutTimer;
- (void)cancel;
- (oneway void)serviceDidResume;
- (oneway void)serviceDidPause;
- (oneway void)serviceWillCancel;
- (void)acquireWithCompletion:(id /* block */)a0;
- (void)invalidate;
- (void).cxx_destruct;
- (oneway void)serviceDidCancelWithError:(id)a0;
- (id)initWithExplanation:(id)a0 attributes:(id)a1;
- (void)dealloc;
- (oneway void)serviceDidAcquire;
- (void)addObserver:(id)a0;
- (void)acquireWithObserver:(id)a0;

@end
