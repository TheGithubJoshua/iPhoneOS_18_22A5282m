@class GEOTransitOptions, GEOWaypointTyped, GEORecentLocationHistory, GEOPathComputationOptions, GEOClientCapabilities, GEOPrivacyMetadata, GEOLocation, PBUnknownFields, NSMutableArray, GEOPDABClientDatasetMetadata, GEOWalkingOptions, GEOAutomobileOptions, GEOCyclingOptions, NSString, PBDataReader, GEOCommonOptions, GEOWaypoint, NSData, GEOAdditionalEnabledMarkets, GEOOriginalWaypointRoute;

@interface GEOETARequest : PBRequest <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    struct GEOTimepoint { double _currentUserTime; double _time; int _type; struct { unsigned char currentUserTime : 1; unsigned char time : 1; unsigned char type : 1; } _has; } _timepoint;
    struct GEOSessionID { unsigned long long _high; unsigned long long _low; } _sessionID;
    GEOPDABClientDatasetMetadata *_abClientMetadata;
    GEOAdditionalEnabledMarkets *_additionalEnabledMarkets;
    GEOAutomobileOptions *_automobileOptions;
    GEOClientCapabilities *_clientCapabilities;
    GEOCommonOptions *_commonOptions;
    GEOCyclingOptions *_cyclingOptions;
    NSMutableArray *_destinationWaypointTypeds;
    NSMutableArray *_destinations;
    NSMutableArray *_deviceHistoricalLocations;
    NSMutableArray *_intermediateWaypointTypeds;
    GEOLocation *_lastKnownRoadLocation;
    GEOWaypointTyped *_originWaypointTyped;
    NSData *_originalRouteID;
    NSMutableArray *_originalRouteZilchPoints;
    GEOOriginalWaypointRoute *_originalWaypointRoute;
    GEOWaypoint *_origin;
    GEOPathComputationOptions *_pathComputationOptions;
    NSString *_phoneticLocaleIdentifier;
    GEOPrivacyMetadata *_privacyMetadata;
    GEORecentLocationHistory *_recentLocationHistory;
    NSString *_requestingAppId;
    NSMutableArray *_serviceTags;
    double _sessionRelativeTimestamp;
    NSData *_sessionState;
    NSMutableArray *_trafficApiResponses;
    NSMutableArray *_trafficSnapshotIds;
    GEOTransitOptions *_transitOptions;
    GEOWalkingOptions *_walkingOptions;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _transportType;
    unsigned int _walkingLimitMeters;
    BOOL _allowPartialResults;
    BOOL _includeDistance;
    BOOL _includeHistoricTravelTime;
    BOOL _includeEtaRouteIncidents;
    BOOL _includeRouteTrafficDetail;
    BOOL _includeShortTrafficSummary;
    BOOL _isFromAPI;
    struct { unsigned char has_timepoint : 1; unsigned char has_sessionID : 1; unsigned char has_sessionRelativeTimestamp : 1; unsigned char has_transportType : 1; unsigned char has_walkingLimitMeters : 1; unsigned char has_allowPartialResults : 1; unsigned char has_includeDistance : 1; unsigned char has_includeHistoricTravelTime : 1; unsigned char has_includeEtaRouteIncidents : 1; unsigned char has_includeRouteTrafficDetail : 1; unsigned char has_includeShortTrafficSummary : 1; unsigned char has_isFromAPI : 1; unsigned char read_unknownFields : 1; unsigned char read_abClientMetadata : 1; unsigned char read_additionalEnabledMarkets : 1; unsigned char read_automobileOptions : 1; unsigned char read_clientCapabilities : 1; unsigned char read_commonOptions : 1; unsigned char read_cyclingOptions : 1; unsigned char read_destinationWaypointTypeds : 1; unsigned char read_destinations : 1; unsigned char read_deviceHistoricalLocations : 1; unsigned char read_intermediateWaypointTypeds : 1; unsigned char read_lastKnownRoadLocation : 1; unsigned char read_originWaypointTyped : 1; unsigned char read_originalRouteID : 1; unsigned char read_originalRouteZilchPoints : 1; unsigned char read_originalWaypointRoute : 1; unsigned char read_origin : 1; unsigned char read_pathComputationOptions : 1; unsigned char read_phoneticLocaleIdentifier : 1; unsigned char read_privacyMetadata : 1; unsigned char read_recentLocationHistory : 1; unsigned char read_requestingAppId : 1; unsigned char read_serviceTags : 1; unsigned char read_sessionState : 1; unsigned char read_trafficApiResponses : 1; unsigned char read_trafficSnapshotIds : 1; unsigned char read_transitOptions : 1; unsigned char read_walkingOptions : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) BOOL hasTransportType;
@property (nonatomic) int transportType;
@property (nonatomic) BOOL hasTimepoint;
@property (nonatomic) struct GEOTimepoint { double x0; double x1; int x2; struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; } x3; } timepoint;
@property (readonly, nonatomic) BOOL hasOrigin;
@property (retain, nonatomic) GEOWaypoint *origin;
@property (retain, nonatomic) NSMutableArray *destinations;
@property (nonatomic) BOOL hasIncludeHistoricTravelTime;
@property (nonatomic) BOOL includeHistoricTravelTime;
@property (nonatomic) BOOL hasAllowPartialResults;
@property (nonatomic) BOOL allowPartialResults;
@property (nonatomic) BOOL hasIncludeDistance;
@property (nonatomic) BOOL includeDistance;
@property (nonatomic) BOOL hasSessionID;
@property (nonatomic) struct GEOSessionID { unsigned long long x0; unsigned long long x1; } sessionID;
@property (nonatomic) BOOL hasSessionRelativeTimestamp;
@property (nonatomic) double sessionRelativeTimestamp;
@property (nonatomic) BOOL hasWalkingLimitMeters;
@property (nonatomic) unsigned int walkingLimitMeters;
@property (readonly, nonatomic) BOOL hasAdditionalEnabledMarkets;
@property (retain, nonatomic) GEOAdditionalEnabledMarkets *additionalEnabledMarkets;
@property (readonly, nonatomic) BOOL hasOriginWaypointTyped;
@property (retain, nonatomic) GEOWaypointTyped *originWaypointTyped;
@property (retain, nonatomic) NSMutableArray *destinationWaypointTypeds;
@property (retain, nonatomic) NSMutableArray *intermediateWaypointTypeds;
@property (readonly, nonatomic) BOOL hasAutomobileOptions;
@property (retain, nonatomic) GEOAutomobileOptions *automobileOptions;
@property (readonly, nonatomic) BOOL hasCyclingOptions;
@property (retain, nonatomic) GEOCyclingOptions *cyclingOptions;
@property (readonly, nonatomic) BOOL hasTransitOptions;
@property (retain, nonatomic) GEOTransitOptions *transitOptions;
@property (readonly, nonatomic) BOOL hasWalkingOptions;
@property (retain, nonatomic) GEOWalkingOptions *walkingOptions;
@property (nonatomic) BOOL hasIsFromAPI;
@property (nonatomic) BOOL isFromAPI;
@property (readonly, nonatomic) BOOL hasCommonOptions;
@property (retain, nonatomic) GEOCommonOptions *commonOptions;
@property (readonly, nonatomic) BOOL hasSessionState;
@property (retain, nonatomic) NSData *sessionState;
@property (readonly, nonatomic) BOOL hasOriginalRouteID;
@property (retain, nonatomic) NSData *originalRouteID;
@property (retain, nonatomic) NSMutableArray *originalRouteZilchPoints;
@property (readonly, nonatomic) BOOL hasOriginalWaypointRoute;
@property (retain, nonatomic) GEOOriginalWaypointRoute *originalWaypointRoute;
@property (retain, nonatomic) NSMutableArray *deviceHistoricalLocations;
@property (readonly, nonatomic) BOOL hasClientCapabilities;
@property (retain, nonatomic) GEOClientCapabilities *clientCapabilities;
@property (readonly, nonatomic) BOOL hasLastKnownRoadLocation;
@property (retain, nonatomic) GEOLocation *lastKnownRoadLocation;
@property (readonly, nonatomic) BOOL hasAbClientMetadata;
@property (retain, nonatomic) GEOPDABClientDatasetMetadata *abClientMetadata;
@property (nonatomic) BOOL hasIncludeRouteTrafficDetail;
@property (nonatomic) BOOL includeRouteTrafficDetail;
@property (nonatomic) BOOL hasIncludeShortTrafficSummary;
@property (nonatomic) BOOL includeShortTrafficSummary;
@property (readonly, nonatomic) BOOL hasPhoneticLocaleIdentifier;
@property (retain, nonatomic) NSString *phoneticLocaleIdentifier;
@property (readonly, nonatomic) BOOL hasRequestingAppId;
@property (retain, nonatomic) NSString *requestingAppId;
@property (nonatomic) BOOL hasIncludeEtaRouteIncidents;
@property (nonatomic) BOOL includeEtaRouteIncidents;
@property (readonly, nonatomic) BOOL hasRecentLocationHistory;
@property (retain, nonatomic) GEORecentLocationHistory *recentLocationHistory;
@property (readonly, nonatomic) BOOL hasPrivacyMetadata;
@property (retain, nonatomic) GEOPrivacyMetadata *privacyMetadata;
@property (readonly, nonatomic) BOOL hasPathComputationOptions;
@property (retain, nonatomic) GEOPathComputationOptions *pathComputationOptions;
@property (retain, nonatomic) NSMutableArray *serviceTags;
@property (retain, nonatomic) NSMutableArray *trafficApiResponses;
@property (retain, nonatomic) NSMutableArray *trafficSnapshotIds;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;
+ (Class)deviceHistoricalLocationType;
+ (Class)destinationType;
+ (Class)destinationWaypointTypedType;
+ (Class)intermediateWaypointTypedType;
+ (Class)originalRouteZilchPointsType;
+ (Class)serviceTagType;
+ (Class)trafficApiResponsesType;
+ (Class)trafficSnapshotIdsType;

- (id)init;
- (id)initWithDictionary:(id)a0;
- (id)serviceTagAtIndex:(unsigned long long)a0;
- (void)readAll:(BOOL)a0;
- (void)mergeFrom:(id)a0;
- (void)clearSensitiveFields:(unsigned long long)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (Class)responseClass;
- (id)deviceHistoricalLocationAtIndex:(unsigned long long)a0;
- (unsigned int)requestTypeCode;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (unsigned long long)deviceHistoricalLocationsCount;
- (unsigned long long)serviceTagsCount;
- (void)clearUnknownFields:(BOOL)a0;
- (BOOL)hasGreenTeaWithValue:(BOOL)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (void)addDeviceHistoricalLocation:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)clearDeviceHistoricalLocations;
- (id)initWithData:(id)a0;
- (int)StringAsTransportType:(id)a0;
- (void)addServiceTag:(id)a0;
- (void)clearServiceTags;
- (id)jsonRepresentation;
- (id)transportTypeAsString:(int)a0;
- (void)addDestination:(id)a0;
- (void)clearIntermediateWaypointTypeds;
- (unsigned long long)intermediateWaypointTypedsCount;
- (void)addDestinationWaypointTyped:(id)a0;
- (void)addIntermediateWaypointTyped:(id)a0;
- (void)addOriginalRouteZilchPoints:(id)a0;
- (void)addTrafficApiResponses:(id)a0;
- (void)addTrafficSnapshotIds:(id)a0;
- (void)clearDestinationWaypointTypeds;
- (void)clearDestinations;
- (void)clearOriginalRouteZilchPoints;
- (void)clearTrafficApiResponses;
- (void)clearTrafficSnapshotIds;
- (id)destinationAtIndex:(unsigned long long)a0;
- (id)destinationWaypointTypedAtIndex:(unsigned long long)a0;
- (unsigned long long)destinationWaypointTypedsCount;
- (unsigned long long)destinationsCount;
- (id)initWithQuickETARequest:(id)a0;
- (id)intermediateWaypointTypedAtIndex:(unsigned long long)a0;
- (id)originalRouteZilchPointsAtIndex:(unsigned long long)a0;
- (unsigned long long)originalRouteZilchPointsCount;
- (id)trafficApiResponsesAtIndex:(unsigned long long)a0;
- (unsigned long long)trafficApiResponsesCount;
- (id)trafficSnapshotIdsAtIndex:(unsigned long long)a0;
- (unsigned long long)trafficSnapshotIdsCount;

@end