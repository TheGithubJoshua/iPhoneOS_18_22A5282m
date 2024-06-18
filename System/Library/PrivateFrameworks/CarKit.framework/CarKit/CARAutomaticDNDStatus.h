@class NSXPCConnection;

@interface CARAutomaticDNDStatus : NSObject

@property (class, readonly, nonatomic, getter=isAutomaticDNDAvailable) BOOL automaticDNDAvailable;

@property (retain, nonatomic) NSXPCConnection *connection;
@property (readonly, nonatomic) unsigned long long cachedAutomaticDNDActiveState;
@property (copy, nonatomic) id /* block */ statusChangeObserver;
@property (copy, nonatomic) id /* block */ exitConfirmationChangeObserver;

+ (id)_DNDServiceInterface;

- (id)init;
- (void)_setupConnection;
- (BOOL)hasOptedOutOfAutomaticDND;
- (BOOL)hasAdjustedTriggerMethod;
- (void)setDisableTimerTimestamp:(id)a0;
- (void)setAutomaticDNDInternalShowUserAlertsEnabledPreference:(BOOL)a0;
- (BOOL)isAutomaticDNDInternalShowUserAlertsEnabledPreference;
- (void)setOptedOutOfAutomaticDND:(BOOL)a0;
- (void)allowedAutoReplyAudience:(id /* block */)a0;
- (BOOL)isAutomaticDNDInternalExitConfirmationOverrideEnabledPreference;
- (BOOL)isAutomaticDNDInternalDNDBuddyPreference;
- (void)setHasAdjustedTriggerMethod:(BOOL)a0;
- (void)_xpcFetchWithServiceBlock:(id /* block */)a0 errorHandler:(id /* block */)a1;
- (void)setAutomaticDNDActive:(BOOL)a0 withReply:(id /* block */)a1;
- (void)_performCARPreferencesBlock:(id /* block */)a0 forReading:(BOOL)a1;
- (void)setMostRecentTriggerMethodChange:(double)a0;
- (BOOL)platformSupportsSendingAutoReplies;
- (void)setStartedFirstRidePreference:(BOOL)a0;
- (BOOL)hasStartedFirstRidePreference;
- (void)_dndStateChanged:(BOOL)a0;
- (void)setAutomaticDNDTriggerPreference:(unsigned long long)a0 withReply:(id /* block */)a1;
- (void)disableDNDUntilEndOfDriveWithReply:(id /* block */)a0;
- (void)setAutomaticDNDInternalForceOverrideEnabledPreference:(BOOL)a0;
- (void)disableDNDUntilEndOfDriveWithContext:(id)a0 reply:(id /* block */)a1;
- (void)setHasMigratedToDriving:(BOOL)a0;
- (BOOL)hasCompletedFirstRidePreference;
- (void).cxx_destruct;
- (void)setAllowedAutoReplyAudience:(unsigned long long)a0 reply:(id /* block */)a1;
- (void)fetchAutomaticDNDAssertionWithReply:(id /* block */)a0;
- (void)setAutomaticDNDInternalExitConfirmationOverrideEnabledPreference:(BOOL)a0;
- (id)firstBuddyPresentationFirstMoment;
- (BOOL)isAutomaticDNDInternalShowGeofencingAlertsEnabledPreference;
- (id)disableTimerTimestamp;
- (void)setActivateWithCarPlay:(BOOL)a0;
- (BOOL)shouldActivateWithCarPlay;
- (void)setCompletedFirstRidePreference:(BOOL)a0;
- (void)setAutomaticDNDInternalDNDBuddyEnabledPreference:(BOOL)a0;
- (void)fetchAutomaticDNDExitConfirmationWithReply:(id /* block */)a0;
- (BOOL)platformSupportsUrgentMessages;
- (void)dealloc;
- (void)setFirstBuddyPresentationFirstMoment:(id)a0;
- (void)setAutomaticDNDInternalShowGeofencingAlertsEnabledPreference:(BOOL)a0;
- (BOOL)hasMigratedToDriving;
- (void)autoReplyMessageWithReply:(id /* block */)a0;
- (void)_detachObservers;
- (void)fetchAutomaticDNDTriggerPreferenceWithReply:(id /* block */)a0;
- (void)_resetUserDNDSettingsWithReply:(id /* block */)a0;
- (unsigned long long)automaticDNDTriggeringMethod;
- (BOOL)isAutomaticDNDInternalForceOverrideEnabledPreference;
- (void)setAutomaticDNDTriggeringMethod:(unsigned long long)a0;
- (void)_exitConfirmationStateChanged:(BOOL)a0;
- (double)mostRecentTriggerMethodChange;
- (void)setAutoReplyMessage:(id)a0 reply:(id /* block */)a1;

@end
