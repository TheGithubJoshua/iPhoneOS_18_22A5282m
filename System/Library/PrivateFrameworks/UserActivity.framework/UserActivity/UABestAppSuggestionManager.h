@class NSString, NSXPCConnection, UABestAppSuggestionManagerProxy, UABestAppSuggestion;
@protocol UABestAppSuggestionManagerDelegate;

@interface UABestAppSuggestionManager : NSObject <UABestAppSuggestionManagerResponseProtocol> {
    BOOL _listeningForBestAppSuggestions;
    int _bestAppNotificationCount;
    UABestAppSuggestion *_lastBestAppSuggestion;
}

@property (retain) NSXPCConnection *connection;
@property (retain) UABestAppSuggestionManagerProxy *proxyManager;
@property (weak) id<UABestAppSuggestionManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)bestAppSuggestion;
- (void)removeBestAppByUUID:(id)a0 options:(id)a1;
- (id)init;
- (void)notifyBestAppsChanged:(id)a0 when:(id)a1 confidence:(double)a2;
- (BOOL)determineBestAppWithDelay:(double)a0 withBlock:(id /* block */)a1;
- (BOOL)isActivityInfo:(id)a0 atTime:(id)a1 similarToAppSuggestion:(id)a2;
- (void)removeBestApp:(id)a0 options:(id)a1;
- (id)createAppSuggestionFromActivityInfo:(id)a0 atTime:(id)a1;
- (void)launchAppWithBundleIdentifier:(id)a0 userActivityUniqueIdentifier:(id)a1 userActivityTypeIdentifier:(id)a2 deviceName:(id)a3 deviceIdentifier:(id)a4 deviceType:(id)a5;
- (void)stopListeningForBestAppSuggestions;
- (void)queueFetchOfPayloadForBestAppSuggestion:(id)a0;
- (void)invalidate;
- (void).cxx_destruct;
- (void)bestAppSuggestionWasLaunched:(id)a0 withInteractionType:(unsigned long long)a1;
- (void)launchAppWithBestAppSuggestion:(id)a0;
- (void)launchAppWithBundleIdentifier:(id)a0 taskContinuationIdentifier:(id)a1;
- (BOOL)fetchAllNearbyAppSuggestions;
- (void)bestAppSuggestionLaunchWasCancelled:(id)a0;
- (void)dealloc;
- (void)startListeningForBestAppSuggestions;
- (void)launchAppWithBundleIdentifier:(id)a0 userActivityUniqueIdentifier:(id)a1 userActivityTypeIdentifier:(id)a2;
- (id)bestAppSuggestions:(long long)a0;

@end
