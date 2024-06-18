@class NSString, GEONavigationServer;

@interface GEONavigationServerPeer : GEONavdPeer <GEONavigationServerRequestStateXPCInterface>

@property (weak, nonatomic) GEONavigationServer *delegate;
@property (nonatomic) BOOL hasEntitlement;
@property (readonly, nonatomic) BOOL wantsRoutes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)requestStepIndex;
- (void)requestStepNameInfo;
- (void)requestPositionFromManeuver;
- (void)requestPositionFromSign;
- (void)requestPositionFromDestination;
- (void).cxx_destruct;
- (void)requestRouteSummary;
- (void)requestTransitSummary;
- (void)requestActiveRouteDetailsData;
- (void)requestRoute;
- (void)requestNavigationVoiceVolume;
- (void)dealloc;
- (void)requestETAUpdate;
- (void)requestGuidanceState;
- (void)requestRideSelections;
- (void)setWantsRoutes:(BOOL)a0;
- (void)requestUpdates;

@end
