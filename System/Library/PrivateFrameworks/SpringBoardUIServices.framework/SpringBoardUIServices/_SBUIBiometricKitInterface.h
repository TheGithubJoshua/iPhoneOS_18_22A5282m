@class BKDevicePearl, NSString, NSSet, BKDeviceTouchID, NSObject;
@protocol _SBUIBiometricKitInterfaceDelegate, OS_dispatch_queue;

@interface _SBUIBiometricKitInterface : NSObject <BKOperationDelegate, BKMatchOperationDelegate, BKMatchPearlOperationDelegate> {
    NSSet *_biometricDevices;
    unsigned long long _enrolledIdentitiesCount;
    int _enrollmentChangedNotifyToken;
    BOOL _isFingerDetected;
    BKDeviceTouchID *_mesaDevice;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    BKDevicePearl *_pearlDevice;
}

@property (readonly, nonatomic, getter=isTouchIDCapable) BOOL touchIDCapable;
@property (readonly, nonatomic, getter=isPearlIDCapable) BOOL pearlIDCapable;
@property (nonatomic) id<_SBUIBiometricKitInterfaceDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_sendDelegateEvent:(unsigned long long)a0;
- (id)init;
- (void)matchOperation:(id)a0 providedFaceWUPoseEligibilityInfo:(id)a1;
- (void)_sendDelegateEventForFeedback:(long long)a0;
- (void)operation:(id)a0 finishedWithReason:(long long)a1;
- (id)createPresenceDetectOperationsWithError:(id *)a0;
- (void)operation:(id)a0 presenceStateChanged:(BOOL)a1;
- (unsigned long long)lockoutState;
- (void)operation:(id)a0 stateChanged:(long long)a1;
- (void)_sendDelegateEventForFaceOcclusionInfo:(id)a0;
- (id)_createPresenceDetectOperationsForDeviceTypes:(id)a0 error:(id *)a1;
- (BOOL)isPeriocularMatchingEnabled;
- (void)_sendDelegateEventForFaceWUPoseEligibilityInfo:(id)a0;
- (BOOL)enableBackgroundFingerDetection:(BOOL)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)createFingerDetectOperationsWithError:(id *)a0;
- (id)_trackerForOperation:(id)a0;
- (void)matchOperation:(id)a0 matchedWithResult:(id)a1;
- (id)createFaceDetectOperationsWithError:(id *)a0;
- (void)matchOperation:(id)a0 providedFaceOcclusionInfo:(id)a1;
- (void)matchOperation:(id)a0 providedFeedback:(long long)a1;
- (id)createPearlDevice;
- (void)_setTracker:(id)a0 forOperation:(id)a1;
- (void)matchOperation:(id)a0 failedWithReason:(long long)a1;
- (unsigned long long)_biometricEventForFaceDetectFeedback:(long long)a0;
- (unsigned long long)_eventForLockoutState:(long long)a0;
- (void)dealloc;
- (void)forceBioLockout;
- (id)createMatchOperationsWithMode:(unsigned long long)a0 andCredentialSet:(id)a1 error:(id *)a2;
- (BOOL)hasEnrolledIdentities;
- (BOOL)isFingerOn;

@end
