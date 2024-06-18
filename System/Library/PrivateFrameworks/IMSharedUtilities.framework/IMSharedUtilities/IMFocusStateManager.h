@class NSString, DNDState, DNDStateService, NSHashTable;

@interface IMFocusStateManager : NSObject <DNDStateUpdateListener>

@property (class, readonly, nonatomic) IMFocusStateManager *sharedManager;

@property (retain, nonatomic) DNDStateService *dndStateService;
@property (retain, nonatomic) DNDState *dndState;
@property (retain, nonatomic) NSHashTable *delegates;
@property (nonatomic) BOOL registeredAsStateUpdateListener;
@property (readonly, nonatomic) BOOL shouldFilterUnreadMessageCount;
@property (readonly, nonatomic) BOOL shouldDisplayFocusFilterBanner;
@property (readonly, nonatomic) BOOL shouldFilterConversationsByFocus;
@property (nonatomic) BOOL userSwitchForFocusFilteringIsEnabled;
@property (nonatomic) BOOL focusFilterActionIsEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_shouldDisplayConversationWithHandles:(id)a0 withFocusConfiguration:(id)a1;
+ (id)_dndContactHandleForAddress:(id)a0;
+ (BOOL)focusConfiguration:(id)a0 matchesConversationWithHandles:(id)a1;
+ (BOOL)_conversationWithHandles:(id)a0 isAllowedInFocusWithInclusiveSenderConfiguration:(id)a1;
+ (BOOL)_conversationWithHandles:(id)a0 isAllowedInFocusWithExclusiveSenderConfiguration:(id)a1;
+ (BOOL)focusConfiguration:(id)a0 matchesConversationWithHandleStrings:(id)a1;

- (void)stateService:(id)a0 didReceiveDoNotDisturbStateUpdate:(id)a1;
- (void)addDelegate:(id)a0;
- (id)init;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)removeDelegate:(id)a0;
- (void)_notifyDelegatesOfDNDStateChange;
- (id)activeFocusSymbolName;
- (void).cxx_destruct;
- (BOOL)activeFocusModeMatchesConversationWithHandles:(id)a0;
- (void)_fetchInitialDNDStateSynchronously:(BOOL)a0;
- (BOOL)activeFocusModeMatchesConversationWithHandleStrings:(id)a0;
- (void)dealloc;
- (id)activeFocusName;
- (BOOL)hasActiveFocusMode;
- (BOOL)deviceSupportsFocusFiltering;

@end
