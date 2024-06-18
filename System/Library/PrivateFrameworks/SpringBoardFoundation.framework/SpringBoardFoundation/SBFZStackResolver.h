@class NSString, NSMutableArray;
@protocol BSInvalidatable;

@interface SBFZStackResolver : NSObject <BSDescriptionProviding>

@property (retain, nonatomic) id<BSInvalidatable> stateCaptureHandle;
@property (retain, nonatomic) NSMutableArray *participants;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)_resolveActivationStateOfSortedParticipants:(id)a0 changedParticipantHandler:(id /* block */)a1;
- (id)acquireParticipantWithIdentifier:(long long)a0 delegate:(id)a1;
- (void)_resolveHomeGestureOwnershipOfSortedParticipants:(id)a0 changedParticipantHandler:(id /* block */)a1;
- (id)succinctDescription;
- (void)_resolveHomeAffordanceDrawingSuppressionOfSortedParticipants:(id)a0 changedParticipantHandler:(id /* block */)a1;
- (void)_unregisterParticipant:(id)a0;
- (void).cxx_destruct;
- (id)succinctDescriptionBuilder;
- (id)_updateResolutions;
- (void)_setNeedsUpdateFromParticipant:(id)a0;
- (id)_registeredParticipants;
- (void)_resolveSystemApertureSuppressionOfSortedParticipants:(id)a0 changedParticipantHandler:(id /* block */)a1;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)dealloc;
- (void)_registerParticipant:(id)a0;
- (void)_updateResolutionsForAddedParticipant:(id)a0 removedParticipant:(id)a1;

@end
