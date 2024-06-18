@class NSHashTable, NSXPCConnection;

@interface MSPMapsPushDaemonRemoteProxy : NSObject <MSPMapsPushDaemonProxyObserver, MSPMapsPushDaemonProxy> {
    NSXPCConnection *_connection;
    NSHashTable *_observers;
}

+ (id)sharedInstance;

- (id)_connection;
- (void)_clearConnection;
- (id)_remoteObjectProxy;
- (void)simulateUGCPhotoAttributionClearedNotification;
- (void)removeObserver:(id)a0;
- (id)init;
- (void)simulateRAPStatusChangeNotification;
- (void)showMapsSuggestionsBulletinWithTitle:(id)a0 message:(id)a1 actionURL:(id)a2;
- (void)_connectToDaemonIfNeeded;
- (void)clearCurrentAnnouncement;
- (void)showParkedCarReplacementBulletinForEvent:(id)a0 replacingEvent:(id)a1;
- (void)showPredictedRouteTrafficIncidentBulletinForCommuteDetails:(id)a0;
- (void)clearBulletinWithRecordID:(id)a0;
- (void)clearLowFuelAlertBulletin;
- (void)clearParkedCarBulletin;
- (void)simulateProblemResolution;
- (void)clearTrafficIncidentBulletinWithAlertID:(id)a0;
- (void)showLowFuelAlertBulletinForLowFuelDetails:(id)a0;
- (void).cxx_destruct;
- (void)showVenueBulletinWithTitle:(id)a0 message:(id)a1 actionURL:(id)a2;
- (void)showParkedCarBulletinForEvent:(id)a0;
- (void)pushDaemonProxyReceivedNotificationData:(id)a0 forType:(id)a1 recordIdentifier:(id)a2;
- (void)closeConnection;
- (void)fetchCurrentAnnouncement:(id /* block */)a0;
- (void)fetchDevicePushToken:(id /* block */)a0;
- (void)clearMapsSuggestionsBulletin;
- (void)simulateUGCPhotoSubmissionResolution;
- (void)handleMapsApplicationRemoval:(id /* block */)a0;
- (void)clearVenueBulletin;
- (void)addObserver:(id)a0;
- (void)resetAnnouncements;
- (void)clearPredictedRouteTrafficIncidentBulletin;
- (void)showTrafficIncidentAlertWithID:(id)a0 withReroute:(BOOL)a1 title:(id)a2 description:(id)a3;

@end
