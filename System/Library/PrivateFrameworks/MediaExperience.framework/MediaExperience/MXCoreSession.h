@class NSDate, NSString, NSArray, NSDictionary, NSObject, RBSAssertion, NSNumber;
@protocol OS_dispatch_source, OS_os_transaction;

@interface MXCoreSession : MXCoreSessionBase

@property (retain) NSArray *activeRoutesWhenInterrupted;
@property (retain) NSDictionary *audioBehaviour;
@property (retain) NSArray *audioDestinationPriority;
@property (retain) NSDictionary *bundleIdToPAAccessIntervalMap;
@property (retain) NSString *defaultVPChatMode;
@property (retain) NSArray *duckerSourceAudioBudgetRef;
@property (retain) NSArray *duckerSourceSessionRef;
@property (retain) NSArray *duckerSourceSystemSoundRef;
@property (retain) NSArray *hostProcessAttribution;
@property (retain) NSArray *hostProcessInfo;
@property (retain) NSDictionary *hostProcessPlaybackAssertions;
@property (retain) NSDate *idleSleepPreventorCreationTime;
@property (retain) NSString *idleSleepPreventorName;
@property (retain) NSDate *isPlayingStartTime;
@property (retain) NSDate *isPlayingStopTime;
@property (retain) NSArray *parentProcessAuditTokens;
@property (retain) RBSAssertion *playbackAssertionRef;
@property (retain) RBSAssertion *resumeAssertionRef;
@property (retain) NSString *waitingForRemoteInterruptionDoneIdentifier;
@property (nonatomic) struct { unsigned int val[8]; } auditToken;
@property (nonatomic) BOOL notFullyInactive;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *sessionDeactivateTimer;
@property (nonatomic) BOOL someMXSessionIsPlaying;
@property (nonatomic) BOOL clientIsPlaying;
@property (nonatomic) BOOL hapticEngineIsPlaying;
@property (nonatomic) BOOL isRecordingMuted;
@property (nonatomic) BOOL isVibrating;
@property (nonatomic) BOOL isUsingCamera;
@property (nonatomic) BOOL mixesWithEveryone;
@property (nonatomic) BOOL stopsWhenDeviceLocks;
@property (nonatomic) BOOL hasInput;
@property (nonatomic) unsigned int currentlyControllingFlags;
@property (nonatomic) unsigned int savedCurrentlyControllingFlags;
@property (nonatomic) unsigned int savedHWControlFlagsForClientThatDoesNotActuallyPlayAudio;
@property (nonatomic) BOOL systemSoundHasModifiedCurrentlyControllingFlags;
@property (nonatomic) unsigned int applicationState;
@property (nonatomic) BOOL hasPhoneCallBehavior;
@property (nonatomic) BOOL makesMusicResume;
@property (nonatomic) BOOL mustUseDefaultClientPriority;
@property (nonatomic) BOOL handsOverInterruptionsToInterruptor;
@property (nonatomic) BOOL allowedToBeNowPlayingApp;
@property (nonatomic) BOOL isPiPPossible;
@property (nonatomic) BOOL allowsBluetoothRecordingCustomization;
@property (nonatomic) BOOL allowsDefaultBuiltInRouteCustomization;
@property (nonatomic) MXCoreSession *interruptingSession;
@property (nonatomic) BOOL wasInterruptedByNowPlayingApp;
@property (nonatomic) BOOL wasInterruptedWhileSuspended;
@property (nonatomic) BOOL wasInterruptedWhileRecording;
@property (nonatomic) BOOL wasRecordingBeforeBeingInterrupted;
@property (nonatomic) BOOL waitingToResumeWhenDeviceUnlocksOrInForeground;
@property (nonatomic) BOOL waitingForEndInterruptionWhenDeviceUnlocksOrInForeground;
@property (nonatomic) BOOL waitingToResume;
@property (nonatomic) BOOL needToEndInterruption;
@property (nonatomic) BOOL wasMutedBeforeInterruption;
@property (nonatomic) long long timestampWhenMostRecentlyInterrupted;
@property (nonatomic) long long timestampWhenMostRecentResumableEndInterruptionWasSent;
@property (nonatomic) BOOL nowPlayingAppWasStoppedOnMostRecentActivation;
@property (nonatomic) BOOL nowPlayingAppThatWasStoppedOnMostRecentActivationWasDoingSpokenAudio;
@property (nonatomic) long long timestampWhenRecordingInBackgroundMostRecentlyStopped;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *resumeBackgroundAppUpdaterTimer;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *extendBackgroundAppAssertionTimer;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *interruptSessionWithoutValidAssertionsTimer;
@property (nonatomic) BOOL isActiveOverAirPlayVideo;
@property (nonatomic) BOOL isAudioOnlyAirPlayVideoActive;
@property (nonatomic) BOOL isNowPlayingApp;
@property (nonatomic) BOOL recentlyWantedToPauseSpokenAudio;
@property (nonatomic) BOOL waitingToSendEndInterruptionToSpokenAudioApp;
@property (nonatomic) BOOL idleSleepPreventorAllocated;
@property (nonatomic) NSObject<OS_os_transaction> *playingOSTransaction;
@property (nonatomic) NSObject<OS_os_transaction> *vibratingOSTransaction;
@property (nonatomic) unsigned int idleSleepPreventor;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *idleSleepPreventorUpdaterTimer;
@property (nonatomic) BOOL silentMuted;
@property (nonatomic) BOOL isDucked;
@property (nonatomic) BOOL duckedOnVAD;
@property (nonatomic) unsigned int starkBorrowCount;
@property (nonatomic) BOOL tookControlOfStarkMainAudio;
@property (nonatomic) BOOL duckCommandSentToCarSession;
@property (nonatomic) BOOL triggeredRemoteInterruption;
@property (nonatomic) BOOL mustRestoreCurrentlyControllingFlags;
@property (nonatomic) BOOL willSetScreenDarkModeOnVAD;
@property (nonatomic) BOOL addSharedAudioRouteToRoutablePorts;
@property (nonatomic) BOOL hasFetchedBackgroundPrivileges;
@property (nonatomic) BOOL hasFetchedGPSPrivileges;
@property (nonatomic) BOOL interruptionFadeDurationSetByClient;
@property (nonatomic) BOOL interruptionStyleSetByClient;
@property (nonatomic) BOOL duckFadeDurationSetByClient;
@property (nonatomic) BOOL unduckFadeDurationSetByClient;
@property (nonatomic) BOOL audioHWControlFlagsSetByClient;
@property (nonatomic) BOOL routingContextSetByClient;
@property (nonatomic) BOOL auditTokenSetByClient;
@property (nonatomic) BOOL duckToLevelScalarSetByClient;
@property (nonatomic) BOOL duckToLevelDBSetByClient;
@property (retain) NSDictionary *activationContext;
@property (retain) NSString *aggregateDeviceClockUID;
@property (retain) NSArray *allowedPortTypes;
@property (retain) NSArray *allowedRouteTypes;
@property (retain) NSDictionary *cameraParameters;
@property (retain) NSString *defaultBuiltInRoutePreference;
@property (nonatomic) BOOL defaultBuiltInRoutePreferenceSetByClient;
@property (retain) NSNumber *desiredInputGainScalar;
@property (retain) NSArray *excludedPortsList;
@property (retain) NSDictionary *notificationsSubscribedTo;
@property (retain) NSArray *overridePortsList;
@property (retain) NSDictionary *powerProfile;
@property (retain) NSString *preferredHardwareFormat;
@property (retain) NSString *siriInputDeviceUUID;
@property (retain) NSArray *subPortPreferences;
@property (retain) NSDictionary *vibrationData;
@property (retain) NSDictionary *vpBlockConfiguration;
@property (nonatomic) BOOL hasEntitlementToRecordAudioInAnExtension;
@property (nonatomic) BOOL hasEntitlementToStartRecordingInTheBackground;
@property (nonatomic) BOOL hasEntitlementToSuppressRecordingStateToSystemStatus;
@property (nonatomic) BOOL hasEntitlementToSupportProcessAssertionAuditTokens;
@property (nonatomic) BOOL hasEntitlementToRecordDuringCall;
@property (nonatomic) BOOL hasEntitlementToSetEmergencyAlertPriority;
@property (nonatomic) unsigned int clientPriority;
@property (nonatomic) unsigned int mode;
@property (nonatomic) unsigned int interruptionStyle;
@property (nonatomic) BOOL isEligibleForNowPlayingAppConsideration;
@property (nonatomic) unsigned int hwControlFlags;
@property (nonatomic) BOOL prefersToTakeHWControlFlagsFromAnotherSession;
@property (nonatomic) BOOL dontTakeOverHardware;
@property (nonatomic) double preferredOutputSampleRate;
@property (nonatomic) double preferredInputSampleRate;
@property (nonatomic) BOOL preferredDecoupledInputOutput;
@property (nonatomic) BOOL requiresAggregatedInputOutput;
@property (nonatomic) int preferredIOBufferFrames;
@property (nonatomic) int preferredNumberOfInputChannels;
@property (nonatomic) int preferredNumberOfOutputChannels;
@property (nonatomic) float preferredIOBufferDuration;
@property (retain, nonatomic) NSDictionary *preferredPersistentRoute;
@property (nonatomic) unsigned int orientationOverride;
@property (nonatomic) BOOL createSpeakerDevice;
@property (nonatomic) BOOL disallowAudioFormatChanges;
@property (nonatomic) BOOL prefersMultichannelAudio;
@property (nonatomic) int preferredStereoInputOrientation;
@property (nonatomic) BOOL enableBluetoothRecordingPreference;
@property (nonatomic) BOOL enableBluetoothRecordingPreferenceSetByClient;
@property (nonatomic) BOOL isEligibleForBTSmartRoutingConsideration;
@property (nonatomic) BOOL isEligibleForBTTriangleConsideration;
@property (nonatomic) float duckToLevelScalar;
@property (nonatomic) float duckToLevelDB;
@property (nonatomic) float duckFadeDuration;
@property (nonatomic) float unduckFadeDuration;
@property (nonatomic) BOOL userMuted;
@property (nonatomic) unsigned int shadowingAudioSessionID;
@property (nonatomic) BOOL mutesAudioBasedOnRingerSwitchState;
@property (nonatomic) float audioQueueFadeDuration;
@property (nonatomic) float audioQueueDuckVolume;
@property (nonatomic) BOOL wantsVolumeChangesWhenPaused;
@property (nonatomic) BOOL wantsVolumeChangesWhenPausedOrInactive;
@property (nonatomic) BOOL ignoreRingerSwitch;
@property (nonatomic) BOOL forceSoundCheck;
@property (nonatomic) BOOL wantsToBeVolumeButtonClient;
@property (nonatomic) BOOL prefersNoInterruptionsByRingtonesAndAlerts;
@property (nonatomic) BOOL prefersNoInterruptionsByMixableSessions;
@property (nonatomic) BOOL prefersToVibeWhenVibrationsAreDisabled;
@property (nonatomic) BOOL optOutOfMutePriority;
@property (nonatomic) BOOL prefersNoDucking;
@property (nonatomic) BOOL isIDSMXCoreSession;
@property (nonatomic) BOOL isCarSession;
@property (nonatomic) BOOL isShadowSessionForFigSBAR;
@property (nonatomic) BOOL isAudioSession;
@property (nonatomic) BOOL isFigInstantiatedAudioSession;
@property (nonatomic) BOOL doesInterAppAudio;
@property (nonatomic) BOOL needsAudioBudget;
@property (nonatomic) BOOL isLongFormAudio;
@property (nonatomic) BOOL wantsToPauseSpokenAudio;
@property (nonatomic) BOOL wantsVibrationNotifications;
@property (nonatomic) BOOL doNotResetAudioCategoryOnNextInactive;
@property (nonatomic) BOOL doNotNotifyOtherSessionsOnNextInactive;
@property (nonatomic) BOOL wantsToSendResumableEndInterruptionWhenBackgrounded;
@property (nonatomic) BOOL hasGPSPrivileges;
@property (nonatomic) BOOL isAllowedToPlayInBackground;
@property (nonatomic) BOOL wantsAutomaticClusterPairingOnPlaybackStart;
@property (nonatomic) BOOL isSharePlayMediaSession;
@property (nonatomic) BOOL isSharePlayCallSession;
@property (nonatomic) BOOL isSharePlayCapableCallSession;
@property (nonatomic) BOOL allowSystemSoundsWhileRecording;
@property (nonatomic) BOOL allowMixableAudioWhileRecording;
@property (nonatomic) BOOL prefersNoInterruptionWhenSecureMicrophoneIsEngaged;
@property (nonatomic) int pidToInheritAppStateFrom;
@property (nonatomic) int deactivateTimerDelay;
@property (nonatomic) BOOL prefersSuppressingRecordingState;
@property (nonatomic) BOOL prefersToPlayDuringWombat;
@property (nonatomic) int routeSharingPolicy;
@property (nonatomic) BOOL doesntActuallyPlayAudio;

- (id)init;
- (id)copyDetailedRouteDescription;
- (void)updateApplicationStateAndPIDToInheritAppStateFrom;
- (void)dealloc;
- (int *)getPreferredIOBufferFramesPointer;
- (double *)getPreferredOutputSampleRatePointer;

@end