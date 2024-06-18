@class SBBestAppSuggestion, NSString, SBAttentionAwarenessClient, UABestAppSuggestion, ATXProactiveSuggestionClient, NSCountedSet, ATXProactiveSuggestion, UABestAppSuggestionManager;

@interface SBAppSuggestionManager : NSObject <UABestAppSuggestionManagerDelegate, SBAttentionAwarenessClientDelegate> {
    UABestAppSuggestionManager *_continuitySuggestionManager;
    UABestAppSuggestion *_continuityCurrentBestSuggestion;
    ATXProactiveSuggestionClient *_proactiveSuggestionClient;
    ATXProactiveSuggestion *_currentProactiveBestSuggestion;
    int _proactiveSuggestionNotificationToken;
    SBBestAppSuggestion *_currentBestSuggestion;
    NSCountedSet *_listeningReasons;
    BOOL _isListeningForContinuitySuggestion;
    BOOL _isListeningForExpertCenterSuggestion;
    BOOL _screenOnDueToUserEvent;
    BOOL _screenOnAndLookingForEvent;
    SBAttentionAwarenessClient *_idleTouchAwarenessClient;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)proactiveSuggestionChanged;
- (void)client:(id)a0 attentionLostTimeoutDidExpire:(double)a1 forConfigurationGeneration:(unsigned long long)a2 withAssociatedObject:(id)a3;
- (void)clientDidResetForUserAttention:(id)a0;
- (id)init;
- (void)noteActivatingForAppSuggestion:(id)a0 fromSource:(long long)a1;
- (void)performWithCurrentSuggestedAppAndApplication:(id /* block */)a0;
- (void)disableListeningForUpdatesForReason:(id)a0;
- (void)_deregisterFromProactiveSuggestionNotifications;
- (void)_createSuggestionSources;
- (void)startFetchingPayloadForAppSuggestion:(id)a0;
- (void)_registerForProactiveSuggestionNotifications;
- (void)_destroySuggestionSources;
- (void)_handleAppUninstall:(id)a0;
- (void)_handleInitialSpringBoardLaunch;
- (void)_screenDidUndim:(id)a0;
- (void)_setContinuitySuggestionUpdatesEnabled:(BOOL)a0 expertCenterSuggestionUpdatesEnabled:(BOOL)a1;
- (void).cxx_destruct;
- (void)noteNotActivatingForAppSuggestion:(id)a0 fromSource:(long long)a1;
- (void)_listenForNotifications;
- (void)_stopListeningForNotifications;
- (void)dealloc;
- (void)_calculateBestSuggestionAndNotifyListeners;
- (void)bestAppSuggestionChanged:(id)a0;
- (void)_screenDidDim:(id)a0;
- (void)_evaluateSuggestionUpdates:(id)a0;
- (id)currentSuggestedApp;
- (void)enableListeningForUpdatesForReason:(id)a0;

@end
