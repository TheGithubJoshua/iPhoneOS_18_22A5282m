@class NSString, GEOCompanionRouteDetails, NSXPCConnection, GEOCompanionRouteStatus;

@interface MNCompanionNavigationXPCConnection : NSObject <MNCompanionNavigationDelegate> {
    NSXPCConnection *_connection;
    GEOCompanionRouteDetails *_companionRouteDetails;
    GEOCompanionRouteStatus *_companionRouteStatus;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)_stop;
- (void)_closeConnection;
- (void)_openConnection;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_connectionWasInterrupted;
- (void)_connectionWasInvalidated;
- (void)_resendRouteDetailsAndStatus;
- (void)updateNavigationRouteDetails:(id)a0 routeStatus:(id)a1;
- (void)updateNavigationRouteStatus:(id)a0;
- (void)updateNavigationRouteWithUpdate:(id)a0;

@end
