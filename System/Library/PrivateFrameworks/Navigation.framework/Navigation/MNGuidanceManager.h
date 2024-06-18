@class NSMutableDictionary, MNGuidanceSignInfo, MNAnnouncementPlanEvent, MNLocation, NSDictionary, MNAnnouncementEngine, GEOComposedRoute, NSMutableArray, GEOComposedGuidanceEvent, NSString, MNNavigationSessionState, NSMutableSet, NSArray, MNJunctionViewImageLoader;
@protocol MNGuidanceManagerDelegate;

@interface MNGuidanceManager : NSObject <MNTimeManagerObserver, MNNavigationSessionStateListener> {
    MNAnnouncementEngine *_announcementEngine;
    NSMutableDictionary *_announcementsSpoken;
    NSMutableSet *_exclusiveSetAnnouncementsSpoken;
    NSMutableDictionary *_specialSpokenEvents;
    NSMutableDictionary *_specialSignEvents;
    NSMutableDictionary *_specialAREvents;
    NSMutableArray *_events;
    NSDictionary *_eventIndexes;
    GEOComposedGuidanceEvent *_nextEvent;
    BOOL _hasBeenOnRouteOnce;
    BOOL _canSpeakReturnToRouteAnnouncement;
    double _timeLastAnnouncementStarted;
    double _timeLastAnnouncementEnded;
    BOOL _hasPersistentEvents;
    MNAnnouncementPlanEvent *_lastAnnouncementEvent;
    NSMutableDictionary *_hapticsTriggered;
    MNGuidanceSignInfo *_signInfo;
    NSArray *_arEvents;
    NSArray *_previousSignEvents;
    GEOComposedGuidanceEvent *_currentLaneGuidanceEvent;
    GEOComposedGuidanceEvent *_previousLaneGuidanceEvent;
    MNJunctionViewImageLoader *_junctionViewImageLoader;
    GEOComposedGuidanceEvent *_pendingJunctionViewGuidanceEvent;
    GEOComposedGuidanceEvent *_currentJunctionViewGuidanceEvent;
    NSMutableArray *_validEvents;
    NSMutableDictionary *_feedback;
}

@property (readonly, nonatomic) NSArray *events;
@property (retain, nonatomic) MNLocation *location;
@property (nonatomic) double speed;
@property (readonly, nonatomic) GEOComposedRoute *route;
@property (readonly, nonatomic) unsigned long long currentLegIndex;
@property (weak, nonatomic) id<MNGuidanceManagerDelegate> delegate;
@property (nonatomic) BOOL isInPreArrivalState;
@property (nonatomic) BOOL shouldShowChargingInfo;
@property (copy, nonatomic) MNNavigationSessionState *navigationSessionState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setJunctionViewImageWidth:(double)a0 height:(double)a1;
- (void)updateDestination:(id)a0;
- (BOOL)_isValidEvent:(id)a0;
- (void)stop;
- (void).cxx_destruct;
- (void)dealloc;
- (void)reset;
- (id)_arrivalARGuidanceEventsForLeg:(unsigned long long)a0;
- (BOOL)repeatLastGuidanceAnnouncement:(id)a0;
- (double)_adjustedVehicleSpeed;
- (id)_closestContinueAREventToRouteCoordinate:(struct { unsigned int x0; float x1; })a0;
- (void)_considerARGuidance;
- (void)_considerAnnouncements;
- (BOOL)_considerArrivalAnnouncements;
- (BOOL)_considerChargingAnnouncements;
- (BOOL)_considerGetOnRouteAnnouncements;
- (void)_considerHaptics;
- (void)_considerJunctionViewGuidance;
- (void)_considerLaneGuidance;
- (BOOL)_considerOtherSpecialAnnouncements;
- (void)_considerPersistence;
- (void)_considerSignGuidance;
- (BOOL)_considerStartingAnnouncements;
- (id)_createArGuidanceInfosForEvent:(id)a0 forStep:(id)a1;
- (double)_distanceToEndOfRoute;
- (double)_distanceToManeuverStart;
- (double)_distanceToRouteCoordinate:(struct { unsigned int x0; float x1; })a0;
- (id)_durationsForEvent:(id)a0;
- (BOOL)_eventWasSpoken:(id)a0;
- (void)_filterValidEvents;
- (void)_handleJunctionViewInfo:(id)a0;
- (BOOL)_hasPersistentEvents;
- (double)_headingForArEvent:(id)a0;
- (int)_indexForEventUUID:(id)a0;
- (void)_initSpecialGuidanceEventsForRoute:(id)a0;
- (BOOL)_isEVChargingEvent:(id)a0;
- (BOOL)_isInArrivalState;
- (id)_junctionViewEvents;
- (int)_maneuverTypeForAREvent:(id)a0;
- (void)_markEventSpoken:(id)a0;
- (id)_nextJunctionViewGuidanceEvent;
- (id)_nextLaneGuidanceEvent;
- (void)_notifyAnalyticsForNewEvents:(id)a0 previousEvents:(id)a1;
- (void)_notifySpeechEvent:(id)a0 waypointCategory:(int)a1 ignorePromptStyle:(BOOL)a2;
- (void)_planAnnouncements;
- (void)_repeatSpokenEvent:(id)a0;
- (void)_resetLastAnnouncementTime;
- (id)_selectAnnouncementForEvent:(id)a0 withTimeRemaining:(double)a1 withMinWaypointCategory:(int)a2 selectedWaypointCategory:(out int *)a3 waypoints:(id)a4;
- (id)_serverStringDictionaryForChargingEvent:(id)a0;
- (id)_serverStringDictionaryForEvent:(id)a0 distance:(double)a1 validDistance:(double)a2 spoken:(BOOL)a3 waypoints:(id)a4;
- (id)_signForGuidanceEvent:(id)a0 isPrimary:(BOOL)a1 shouldOverridePrimaryDistances:(BOOL)a2 distance:(out double *)a3;
- (id)_sortedSignEventsFromValidSignEvents:(id)a0;
- (id)_specialAREvents:(int)a0 forLeg:(unsigned long long)a1;
- (id)_specialSignEvents:(int)a0 forLeg:(unsigned long long)a1;
- (id)_specialSpokenEvents:(int)a0 forLegIndex:(unsigned long long)a1;
- (id)_spokenEventsRemainingInStep;
- (double)_timeRemainingForEvent:(id)a0;
- (double)_timeUntilEventTrigger:(id)a0;
- (unsigned long long)_trafficColorForRoute:(id)a0 routeCoordinate:(struct { unsigned int x0; float x1; })a1;
- (id)_validEventsForARGuidance;
- (id)_validEventsForSignGuidance:(out BOOL *)a0;
- (double)durationOfAnnouncement:(id)a0;
- (double)durationOfEvent:(id)a0 announcementIndex:(unsigned long long)a1 distance:(double)a2;
- (id)initWithNavigationSessionState:(id)a0 andIsReconnecting:(BOOL)a1 announcementsToIgnore:(id)a2;
- (void)timeManagerDidChangeProvider:(id)a0;
- (double)timeSinceLastAnnouncement;
- (double)timeUntilNextAnnouncement;
- (void)updateGuidanceForLocation:(id)a0 navigatorState:(int)a1;
- (void)updateSessionStateForReroute:(id)a0 reason:(unsigned long long)a1 location:(id)a2;

@end