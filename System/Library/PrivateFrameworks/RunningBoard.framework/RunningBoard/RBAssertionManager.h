@class NSMutableSet, NSString, RBAssertionManagerEventQueue, RBProcessMap, NSMutableDictionary, RBAssertionStateResolver, RBSystemState, NSObject, RBAssertionCollection, RBProcessIndex, NSMapTable, NSCountedSet;
@protocol RBAssertionDescriptorValidating, RBBundlePropertiesManaging, RBAssertionOriginatorPidPersisting, RBTimeProviding, RBDaemonContextProviding, OS_dispatch_queue, RBAssertionManagerDelegate;

@interface RBAssertionManager : NSObject <RBAssertionManagerQueueDelegate, RBAssertionManaging, RBStateCapturing> {
    NSObject<OS_dispatch_queue> *_workloop;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    id<RBAssertionManagerDelegate> _delegate;
    RBAssertionCollection *_assertions;
    NSMutableDictionary *_pluginHoldsForAssertions;
    RBProcessIndex *_processIndex;
    RBProcessMap *_stateMap;
    NSMutableDictionary *_relativeStartTimesByTargetIdentity;
    NSMapTable *_originatorExitTimesByAssertion;
    NSMutableDictionary *_originatorToInFlightOperationsCountMap;
    NSCountedSet *_inFlightAssertionTargets;
    NSMutableSet *_inFlightTerminations;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _inFlightOperationsLock;
    id<RBBundlePropertiesManaging> _bundlePropertiesManager;
    id<RBAssertionDescriptorValidating> _descriptorValidator;
    id<RBAssertionOriginatorPidPersisting> _originatorPidStore;
    id<RBTimeProviding> _timeProvider;
    id<RBDaemonContextProviding> _daemonContext;
    unsigned long long _maxOperationsInFlight;
    unsigned long long _maxAssertionsPerOriginator;
    RBAssertionStateResolver *_stateResolver;
    RBAssertionManagerEventQueue *_eventQueue;
    NSMutableSet *_assertionTargets;
    NSMutableSet *_acquiringAssertionIdentifiers;
    NSMutableSet *_invalidAssertions;
    NSMapTable *_savedEndowments;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) RBSystemState *systemState;
@property (readonly, copy, nonatomic) NSString *stateCaptureTitle;

+ (id)sharedWorkloop;

- (id)captureState;
- (id)processForIdentity:(id)a0;
- (id)allEntitlements;
- (BOOL)_lock_originatorHasExited:(id)a0;
- (id)init;
- (BOOL)_lock_validateDescriptor:(id)a0 originatorProcess:(id)a1 originatorState:(id)a2 concreteTarget:(id)a3 targetProcess:(id)a4 targetIdentity:(id)a5 targetIdentifier:(id)a6 targetState:(id)a7 acquisitionContext:(id)a8 error:(out id *)a9;
- (id)_lock_deactivateDelayedAssertionsForTargets:(id)a0;
- (void)_lock_checkAssertionToInvalidateByCondition:(id)a0 condition:(id)a1 currentValue:(id)a2 assertionsToInvalidate:(id)a3;
- (BOOL)_invalidateAssertion:(id)a0 sync:(BOOL)a1;
- (double)_lock_relativeStartTimeForAssertion:(id)a0;
- (void)_removeInvalidAssertions;
- (id)_lock_updateStatesDueToChangingAssertions:(id)a0 invalidatedAssertions:(id)a1;
- (BOOL)_lock_willExceedAssertionLimitForOriginatorProcess:(id)a0 withIncomingCount:(unsigned long long)a1;
- (void)_acquireUnderlyingAssertionForProcess:(id)a0;
- (BOOL)_lock_enforceAssertionLimitIfNecessaryForBatchContext:(id)a0 originatorProcess:(id)a1 error:(id *)a2;
- (void)_lock_removeAssertions:(id)a0 andUpdateChangedAssertions:(id)a1;
- (id)additionalRestrictionsForDomain:(id)a0 andName:(id)a1;
- (id)_lock_createAssertionWithAcquisitionContext:(id)a0 attributeContext:(id)a1 concreteTarget:(id)a2 targetIdentity:(id)a3 originator:(id)a4 error:(out id *)a5;
- (id)_lock_originatorIdentifiersInAssertions:(id)a0;
- (BOOL)_decreaseInFlightOperationsForOriginator:(id)a0;
- (BOOL)invalidateAssertion:(id)a0;
- (void)_lock_setState:(id)a0 forProcessIdentity:(id)a1;
- (id)popPluginHoldForAssertion:(id)a0;
- (id)_lock_createAssertionsForBatchContext:(id)a0 originatorState:(id)a1 errorsByIndex:(id)a2;
- (void)_lock_notifyDelegateOfInvalidatedAssertions:(id)a0;
- (id)_lock_deactivateAssertions:(id)a0;
- (id)savedEndowmentsForProcess:(id)a0;
- (void)revalidateAssertionsForProcessIdentities:(id)a0;
- (BOOL)invalidateAssertionsDueToCPUUsageViolationForProcessIdentifier:(id)a0;
- (void)processDidTerminate:(id)a0;
- (void)eventQueue:(id)a0 handleWarningEventForAssertion:(id)a1;
- (void)acquireAssertionWithContext:(id)a0 completion:(id /* block */)a1;
- (void)_lock_addAssertion:(id)a0;
- (BOOL)areTargetPropertiesValidForContext:(id)a0 forAttributeWithDomain:(id)a1 andName:(id)a2;
- (id)_lock_targetIdentitiesInAssertions:(id)a0;
- (void)_lock_notifyDelegateOfProcessStateChangeSet:(id)a0;
- (id)endowmentNamespaceForDomain:(id)a0 andName:(id)a1;
- (void)commitBatchWithContext:(id)a0 completion:(id /* block */)a1;
- (id)_lock_sortedAssertionsForTarget:(id)a0;
- (id)limitationsForInstance:(id)a0;
- (id)_lock_deactivateExistingAssertionsDelayedByIncomingAssertions:(id)a0;
- (id)_lock_savedEndowmentsForProcess:(id)a0;
- (void)_decreaseInFlightOperationsForTargetIdentities:(id)a0;
- (id)initWithDelegate:(id)a0 bundlePropertiesManager:(id)a1 originatorPidStore:(id)a2 assertionDescriptorValidator:(id)a3 timeProvider:(id)a4 daemonContext:(id)a5 maxOperationsInFlight:(unsigned long long)a6 maxAssertionsPerOriginator:(unsigned long long)a7;
- (id)originatorEntitlementsForDomain:(id)a0 andName:(id)a1;
- (id)_concreteTargetForTarget:(id)a0 allowAbstractTarget:(BOOL)a1;
- (id)_lock_invalidateAssertionByConditions:(id)a0 changedAssertions:(id *)a1;
- (void)eventQueue:(id)a0 handleInvalidationEventForAssertion:(id)a1;
- (double)_lock_startTimeForAssertion:(id)a0;
- (void).cxx_destruct;
- (void)_acquireAssertions:(id)a0 invalidateIdentifiers:(id)a1 forOriginatorProcess:(id)a2 completionPolicy:(unsigned long long)a3 acquisitionErrorsByIndex:(id)a4 completeStage:(id /* block */)a5;
- (void)eventQueue:(id)a0 handleAssertionsExpirationWarningEventForProcessIdentity:(id)a1 expirationTime:(double)a2;
- (double)_lock_originatorExitTimeForAssertion:(id)a0;
- (double)eventQueue:(id)a0 remainingRuntimeForProcessIdentity:(id)a1;
- (BOOL)_lock_hasStartTimeDefiningAssertionsForTargetProcessIdentity:(id)a0;
- (void)_dumpAssertions;
- (void)_lock_setSystemState:(id)a0;
- (void)_lock_removeAssertion:(id)a0;
- (BOOL)isProcessForeground:(id)a0;
- (void)_lock_finalizeRemovingAssertions:(id)a0;
- (BOOL)_increaseInFlightOperationsForOriginator:(id)a0 andSuspendIfNeeded:(id)a1;
- (BOOL)invalidateAssertionFromOriginator:(id)a0 sync:(BOOL)a1 withIdentifier:(id)a2;
- (unsigned long long)_lock_resolvePreliminaryStatesForNonExistingProcessesWithAssertions:(id)a0 completionPolicy:(unsigned long long)a1;
- (id)_lock_createAssertionForDescriptor:(id)a0 originatorState:(id)a1 acquisitionContext:(id)a2 error:(id *)a3;
- (void)processDidLaunch:(id)a0;
- (BOOL)addSavedEndowment:(id)a0 forProcess:(id)a1;
- (id)restrictionsForDomain:(id)a0 andName:(id)a1;
- (BOOL)invalidateAssertionFromOriginator:(id)a0 withIdentifier:(id)a1;
- (unsigned long long)_lock_numberOfStartTimeDefiningAssertionsForTargetProcessIdentity:(id)a0;
- (BOOL)containsAttributeWithDomain:(id)a0 andName:(id)a1;
- (double)eventQueue:(id)a0 startTimeForAssertion:(id)a1;
- (id)_lock_assertionCreationAttributeContextForTargetIdentity:(id)a0 originator:(id)a1;
- (id)attributesForDomain:(id)a0 andName:(id)a1 context:(id)a2 withError:(id *)a3;
- (void)_lock_invalidateAssertions:(id)a0 forceSync:(BOOL)a1;
- (BOOL)invalidateAssertionWithIdentifier:(id)a0;
- (void)_lock_removeInvalidAssertions;
- (void)_invalidateAssertionsWithContext:(id)a0;
- (void)periodicRunningProcessDump;
- (id)_lock_activateDelayedAssertionsForTargets:(id)a0;
- (void)_lock_clearStartTimesForUnbusyTargets:(id)a0;
- (double)_remainingRuntimeForProcessIdentity:(id)a0;
- (void)_lock_enqueueAssertionsForRemoval:(id)a0;
- (void)_lock_removeStateForProcessIdentityIfNecessary:(id)a0;
- (id)targetEntitlementsForDomain:(id)a0 andName:(id)a1;
- (id)assertionDescriptorsWithFlattenedAttributes:(BOOL)a0;
- (id)assertionsForOriginator:(id)a0;
- (void)_increaseInFlightOperationsForTargetIdentities:(id)a0;
- (void)_lock_notifyDelegateOfExcessiveAssertionsForOriginatorProcess:(id)a0;
- (double)_lock_invalidationTimeForAssertion:(id)a0;
- (unsigned long long)_lock_incomingAssertionCountForBatchContext:(id)a0 originatorIdentifier:(id)a1;
- (BOOL)_lock_batchContextInvalidatesSynchronously:(id)a0;
- (double)_lock_delayedStartTimeForAssertion:(id)a0;
- (BOOL)hasAssertionWithIdentifier:(id)a0;
- (void)_lock_dumpAssertionsForTarget:(id)a0;
- (id)stateForIdentity:(id)a0;

@end