@class NSObject, NSMutableDictionary, NSString, NSMutableArray, AVPlayer;
@protocol OS_dispatch_queue, AVPlaybackCoordinationMediumDelegate, AVPlayerPlaybackCoordinatorDelegate;

@interface AVPlayerPlaybackCoordinator : AVPlaybackCoordinator {
    AVPlayer *_weakPlayer;
    NSObject<OS_dispatch_queue> *_ivarAccessQueue;
    NSObject<OS_dispatch_queue> *_figPlaybackCoordinatorConfigQueue;
    struct OpaqueFigPlaybackCoordinator { } *_figPlaybackCoordinator;
    NSMutableArray *_suspensionReasons;
    NSMutableArray *_otherParticipants;
    NSMutableDictionary *_controlStates;
    NSMutableDictionary *_participantStates;
    NSMutableDictionary *_participantLimitPerSuspensionReason;
    NSMutableArray *_suspensionReasonsThatTriggerWaiting;
    BOOL _pauseSnapsToMediaTimeOfOriginator;
    NSMutableArray *_waitingPoliciesArray;
    NSMutableArray *_currentSuspensions;
    id _suspensionsChangedNotificationToken;
    id _participantsChangedNotificationToken;
    id _didIssueCommandToPlaybackObjectNotificationToken;
    id<AVPlayerPlaybackCoordinatorDelegate> _delegate;
    id<AVPlaybackCoordinationMediumDelegate> _coordinationMediumDelegate;
    BOOL _isInExpanseMediaPlayback;
    NSString *_mediumLoggingIdentifier;
}

@property (readonly, weak, nonatomic) AVPlayer *player;
@property (weak) id<AVPlayerPlaybackCoordinatorDelegate> delegate;

- (id)participantForIdentifier:(id)a0;
- (void)_removeUnusedTransportControlStates;
- (void)_removeParticipantStateWithIdentifier:(id)a0;
- (id)currentSuspensions;
- (void)handleNewParticipantStateDictionary:(id)a0;
- (id)initWithPlayer:(id)a0;
- (id)figPlaybackCoordinatorConfigQueue;
- (id)beginSuspensionForReason:(id)a0;
- (id)_updateWaitingPoliciesArrayWithPolicies:(id)a0;
- (void)_endSuspension:(struct OpaqueFigTimelineCoordinatorSuspension { } *)a0 proposingNewTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (id)participantStates;
- (void)_setWaitingPolicies:(id)a0 onFigPlaybackCoordinator:(struct OpaqueFigPlaybackCoordinator { } *)a1;
- (id)otherParticipants;
- (id)coordinationMediumDelegate;
- (void)setSuspensionReasonsThatTriggerWaiting:(id)a0;
- (void)_setIsInExpanseMediaPlaybackOnAVAudioSession;
- (void)_replaceParticipantStates:(id)a0;
- (void)setPauseSnapsToMediaTimeOfOriginator:(BOOL)a0;
- (BOOL)_doesSuspensionReasonTriggerWaiting:(id)a0;
- (void)setFigPlaybackCoordinator:(struct OpaqueFigPlaybackCoordinator { } *)a0;
- (void)handleReplacementParticipantStateDictionaries:(id)a0;
- (void)_addFigPlaybackCoordinatorListeners:(struct OpaqueFigPlaybackCoordinator { } *)a0;
- (void)_updateTransportControlStateDictionaryWithTransportControlState:(id)a0;
- (id)trackedTransportControlStateDictionaries;
- (void)_updateOtherParticipantsUsingFigParticipantUUIDs:(id)a0;
- (id)avfParticipantsForFigParticipantsUUIDs:(id)a0;
- (void).cxx_destruct;
- (id)_currentWaitingPoliciesArray;
- (void)handleNewTransportControlStateDictionary:(id)a0;
- (void)_updateSuspensionReasons:(id)a0;
- (void)setParticipantLimit:(long long)a0 forWaitingOutSuspensionsWithReason:(id)a1;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })expectedItemTimeAtHostTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)_synchronizeFigPlayerEvents;
- (void)_setLocalParticipantUUID:(id)a0 onFigPlaybackCoordinator:(struct OpaqueFigPlaybackCoordinator { } *)a1;
- (void)_setMediumCallbacksOnFigPlaybackCoordinator:(struct OpaqueFigPlaybackCoordinator { } *)a0;
- (id)identifierForPlayerItem:(id)a0;
- (id)_participantStateForIdentifier:(id)a0;
- (id)suspensionReasons;
- (struct OpaqueFigPlaybackCoordinator { } *)_copyFigPlaybackCoordinator;
- (void)_removeAllParticipantStates;
- (id)interstitialTimeRangesForPlayerItem:(id)a0;
- (id)mediumLoggingIdentifier;
- (void)dealloc;
- (void)_removeFigPlaybackCoordinatorListeners;
- (void)setMediumLoggingIdentifier:(id)a0;
- (long long)participantLimitForWaitingOutSuspensionsWithReason:(id)a0;
- (void)handleRemovalOfParticipant:(id)a0;
- (void)_removeAllTransportControlStates;
- (BOOL)pauseSnapsToMediaTimeOfOriginator;
- (id)suspensionReasonsThatTriggerWaiting;
- (void)_endSuspension:(struct OpaqueFigTimelineCoordinatorSuspension { } *)a0;
- (void)_updateParticipantStateDictionaryWithParticipantState:(id)a0;
- (void)setCoordinationMediumDelegate:(id)a0;
- (id)_transportControlStateForItemIdentifier:(id)a0;

@end
