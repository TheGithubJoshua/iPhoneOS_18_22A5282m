@class NSString, HDAssertionManager, NSMutableSet, NSObject, HDDaemon;
@protocol OS_dispatch_queue;

@interface HDAlertSuppressor : NSObject <HDProcessStateObserver, HDAssertionObserver> {
    HDDaemon *_daemon;
    NSObject<OS_dispatch_queue> *_queue;
    HDAssertionManager *_assertionManager;
    NSMutableSet *_waitingForSuspension;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDaemon:(id)a0;
- (void)processTerminated:(id)a0;
- (void)assertionManager:(id)a0 assertionTaken:(id)a1;
- (void)processSuspended:(id)a0;
- (void).cxx_destruct;
- (void)processResumed:(id)a0;
- (id)createAndTakeAssertionForOwnerIdentifier:(id)a0 processBundleIdentifier:(id)a1;
- (void)dealloc;
- (void)processDidEnterForeground:(id)a0;
- (void)assertionManager:(id)a0 assertionInvalidated:(id)a1;
- (void)processDidEnterBackground:(id)a0;

@end
