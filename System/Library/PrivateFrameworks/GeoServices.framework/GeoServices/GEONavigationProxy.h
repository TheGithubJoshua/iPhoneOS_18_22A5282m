@class NSXPCConnection, NSString, NSData, NSArray, GEOComposedRoute, GEONavigationRouteSummary, GEONavigationRouteTransitSummary, GEOArrivalTimeAndDistanceInfo, GEONavigationGuidanceState, GEOLocation, GEORouteMatch, GEONameInfo;
@protocol GEOServerFormattedStepStringFormatter;

@interface GEONavigationProxy : NSObject {
    NSXPCConnection *_navdConnection;
    int _navigationStartedToken;
    BOOL _hasNavigationStartedToken;
    NSString *_destinationName;
    GEOComposedRoute *_route;
    GEOLocation *_lastLocation;
    struct { unsigned int index; float offset; } _matchedCoordinate;
    BOOL _locationUnreliable;
    GEORouteMatch *_routeMatch;
    NSString *_currentRoadName;
    BOOL _guidancePromptsEnabled;
    NSData *_activeRouteDetailsData;
    NSArray *_rideSelections;
    unsigned long long _stepIndex;
    unsigned long long _displayedStepIndex;
    GEONameInfo *_stepNameInfo;
    struct { double remainingTime; double remainingDistance; } _positionFromSign;
    struct { double remainingTime; double remainingDistance; } _positionFromManeuver;
    struct { double remainingTime; double remainingDistance; } _positionFromDestination;
    unsigned long long _announcementStage;
    unsigned long long _nextAnnouncementStage;
    double _timeUntilNextAnnouncement;
    GEONavigationRouteSummary *_routeSummary;
    GEONavigationRouteTransitSummary *_transitRouteSummary;
    GEOArrivalTimeAndDistanceInfo *_timeAndDistanceInfo;
    GEONavigationGuidanceState *_guidanceState;
    int _navigationVoiceVolume;
    BOOL _isNavigatingInLowGuidance;
    BOOL _isConnectedToCarplay;
}

@property (retain, nonatomic) id<GEOServerFormattedStepStringFormatter> formatter;

- (void)setIsConnectedToCarplay:(BOOL)a0;
- (void)setGuidancePromptsEnabled:(BOOL)a0;
- (void)setDisplayedStepIndex:(unsigned long long)a0;
- (void)stop;
- (void)setRoute:(id)a0;
- (void)setLocationUnreliable:(BOOL)a0;
- (void)setCurrentRoadName:(id)a0;
- (void)setNavigationState:(int)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_clearState;
- (void)setRouteMatch:(id)a0;
- (void)triggerHaptics:(int)a0;
- (void)_closeNavdConnection;
- (void)_openNavdConnection;
- (void)_sendActiveRouteDetailsData;
- (void)_sendCurrentRoadName;
- (void)_sendGuidanceState;
- (void)_sendLocationAndCoordinate;
- (void)_sendNavigationVoiceVolume;
- (void)_sendPositionFromDestination;
- (void)_sendPositionFromManeuver;
- (void)_sendPositionFromSign;
- (void)_sendRideSelections;
- (void)_sendRouteSummary;
- (void)_sendStepIndex;
- (void)_sendStepNameInfo;
- (void)_sendTransitSummary;
- (void)setActiveRouteDetailsData:(id)a0;
- (void)setAnnouncementStage:(unsigned long long)a0;
- (void)setArrivedAtWaypoint:(id)a0 endOfLegIndex:(unsigned long long)a1;
- (void)setClusteredSectionSelectedRideFromRoute:(id)a0;
- (void)setDestinationName:(id)a0;
- (void)setETAUpdate:(id)a0;
- (void)setIsNavigatingInLowGuidance:(BOOL)a0;
- (void)setLastLocation:(id)a0 routeMatchedCoordinate:(struct { unsigned int x0; float x1; })a1;
- (void)setNavigationSessionState:(unsigned long long)a0 transportType:(int)a1 navigationType:(int)a2 isResumingMultipointRoute:(BOOL)a3;
- (void)setNavigationVoiceVolume:(int)a0;
- (void)setNextAnnouncementStage:(unsigned long long)a0 timeUntilNextAnnouncement:(double)a1;
- (void)setPositionFromDestination:(struct { double x0; double x1; })a0;
- (void)setPositionFromManeuver:(struct { double x0; double x1; })a0;
- (void)setPositionFromSign:(struct { double x0; double x1; })a0;
- (void)setResumedNavigatingFromWaypoint:(id)a0 endOfLegIndex:(unsigned long long)a1;
- (void)setStepIndex:(unsigned long long)a0;
- (void)setStepNameInfo:(id)a0;
- (void)setTrafficForCurrentRoute:(id)a0;
- (void)startWithDestinationName:(id)a0;

@end