@class PBUnknownFields, GEOETATrafficUpdateWaypointRoute, GEOClientCapabilities, GEOLocation, GEOPrivacyMetadata, NSMutableArray, GEOPDABClientDatasetMetadata, NSString, PBDataReader, GEOCommonOptions, NSData, GEOAdditionalEnabledMarkets, GEORouteAttributes, GEORecentLocationHistory;

@interface GEOETATrafficUpdateRequest : PBRequest <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    struct GEOSessionID { unsigned long long _high; unsigned long long _low; } _sessionID;
    GEOPDABClientDatasetMetadata *_abClientMetadata;
    GEOAdditionalEnabledMarkets *_additionalEnabledMarkets;
    GEOClientCapabilities *_clientCapabilities;
    GEOCommonOptions *_commonOptions;
    GEOLocation *_currentUserLocation;
    NSMutableArray *_destinationWaypointTypeds;
    NSData *_directionsResponseID;
    NSString *_displayedBannerId;
    NSData *_etauResponseID;
    GEOPrivacyMetadata *_privacyMetadata;
    GEORecentLocationHistory *_recentLocationHistory;
    NSString *_requestingAppId;
    GEORouteAttributes *_routeAttributes;
    NSMutableArray *_routes;
    NSMutableArray *_serviceTags;
    double _sessionRelativeTimestamp;
    NSData *_sessionState;
    NSMutableArray *_trafficApiResponses;
    NSMutableArray *_trafficSnapshotIds;
    NSData *_tripID;
    GEOLocation *_tripOrigin;
    GEOETATrafficUpdateWaypointRoute *_waypointRoute;
    NSMutableArray *_waypointTypeds;
    NSString *_xpcUuid;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    unsigned int _displayedEta;
    unsigned int _maxAlternateRouteCount;
    unsigned int _previouslyRejectedRerouteSavings;
    int _rerouteStatus;
    BOOL _includeBetterRouteSuggestion;
    struct { unsigned char has_sessionID : 1; unsigned char has_sessionRelativeTimestamp : 1; unsigned char has_displayedEta : 1; unsigned char has_maxAlternateRouteCount : 1; unsigned char has_previouslyRejectedRerouteSavings : 1; unsigned char has_rerouteStatus : 1; unsigned char has_includeBetterRouteSuggestion : 1; unsigned char read_unknownFields : 1; unsigned char read_abClientMetadata : 1; unsigned char read_additionalEnabledMarkets : 1; unsigned char read_clientCapabilities : 1; unsigned char read_commonOptions : 1; unsigned char read_currentUserLocation : 1; unsigned char read_destinationWaypointTypeds : 1; unsigned char read_directionsResponseID : 1; unsigned char read_displayedBannerId : 1; unsigned char read_etauResponseID : 1; unsigned char read_privacyMetadata : 1; unsigned char read_recentLocationHistory : 1; unsigned char read_requestingAppId : 1; unsigned char read_routeAttributes : 1; unsigned char read_routes : 1; unsigned char read_serviceTags : 1; unsigned char read_sessionState : 1; unsigned char read_trafficApiResponses : 1; unsigned char read_trafficSnapshotIds : 1; unsigned char read_tripID : 1; unsigned char read_tripOrigin : 1; unsigned char read_waypointRoute : 1; unsigned char read_waypointTypeds : 1; unsigned char read_xpcUuid : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasXpcUuid;
@property (retain, nonatomic) NSString *xpcUuid;
@property (readonly, nonatomic) BOOL hasCurrentUserLocation;
@property (retain, nonatomic) GEOLocation *currentUserLocation;
@property (readonly, nonatomic) BOOL hasRouteAttributes;
@property (retain, nonatomic) GEORouteAttributes *routeAttributes;
@property (nonatomic) BOOL hasIncludeBetterRouteSuggestion;
@property (nonatomic) BOOL includeBetterRouteSuggestion;
@property (retain, nonatomic) NSMutableArray *routes;
@property (readonly, nonatomic) BOOL hasWaypointRoute;
@property (retain, nonatomic) GEOETATrafficUpdateWaypointRoute *waypointRoute;
@property (readonly, nonatomic) BOOL hasClientCapabilities;
@property (retain, nonatomic) GEOClientCapabilities *clientCapabilities;
@property (readonly, nonatomic) BOOL hasDirectionsResponseID;
@property (retain, nonatomic) NSData *directionsResponseID;
@property (readonly, nonatomic) BOOL hasEtauResponseID;
@property (retain, nonatomic) NSData *etauResponseID;
@property (nonatomic) BOOL hasSessionID;
@property (nonatomic) struct GEOSessionID { unsigned long long x0; unsigned long long x1; } sessionID;
@property (nonatomic) BOOL hasSessionRelativeTimestamp;
@property (nonatomic) double sessionRelativeTimestamp;
@property (readonly, nonatomic) BOOL hasAdditionalEnabledMarkets;
@property (retain, nonatomic) GEOAdditionalEnabledMarkets *additionalEnabledMarkets;
@property (retain, nonatomic) NSMutableArray *destinationWaypointTypeds;
@property (retain, nonatomic) NSMutableArray *waypointTypeds;
@property (nonatomic) BOOL hasPreviouslyRejectedRerouteSavings;
@property (nonatomic) unsigned int previouslyRejectedRerouteSavings;
@property (readonly, nonatomic) BOOL hasSessionState;
@property (retain, nonatomic) NSData *sessionState;
@property (nonatomic) BOOL hasRerouteStatus;
@property (nonatomic) int rerouteStatus;
@property (readonly, nonatomic) BOOL hasCommonOptions;
@property (retain, nonatomic) GEOCommonOptions *commonOptions;
@property (readonly, nonatomic) BOOL hasAbClientMetadata;
@property (retain, nonatomic) GEOPDABClientDatasetMetadata *abClientMetadata;
@property (nonatomic) BOOL hasMaxAlternateRouteCount;
@property (nonatomic) unsigned int maxAlternateRouteCount;
@property (readonly, nonatomic) BOOL hasTripID;
@property (retain, nonatomic) NSData *tripID;
@property (readonly, nonatomic) BOOL hasRequestingAppId;
@property (retain, nonatomic) NSString *requestingAppId;
@property (readonly, nonatomic) BOOL hasTripOrigin;
@property (retain, nonatomic) GEOLocation *tripOrigin;
@property (readonly, nonatomic) BOOL hasDisplayedBannerId;
@property (retain, nonatomic) NSString *displayedBannerId;
@property (readonly, nonatomic) BOOL hasRecentLocationHistory;
@property (retain, nonatomic) GEORecentLocationHistory *recentLocationHistory;
@property (readonly, nonatomic) BOOL hasPrivacyMetadata;
@property (retain, nonatomic) GEOPrivacyMetadata *privacyMetadata;
@property (nonatomic) BOOL hasDisplayedEta;
@property (nonatomic) unsigned int displayedEta;
@property (retain, nonatomic) NSMutableArray *serviceTags;
@property (retain, nonatomic) NSMutableArray *trafficApiResponses;
@property (retain, nonatomic) NSMutableArray *trafficSnapshotIds;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;
+ (Class)routeType;
+ (Class)destinationWaypointTypedType;
+ (Class)serviceTagType;
+ (Class)trafficApiResponsesType;
+ (Class)trafficSnapshotIdsType;
+ (Class)waypointTypedType;

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
- (unsigned int)requestTypeCode;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (unsigned long long)serviceTagsCount;
- (void)clearUnknownFields:(BOOL)a0;
- (BOOL)hasGreenTeaWithValue:(BOOL)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithData:(id)a0;
- (void)addServiceTag:(id)a0;
- (void)clearServiceTags;
- (id)jsonRepresentation;
- (int)StringAsRerouteStatus:(id)a0;
- (void)addDestinationWaypointTyped:(id)a0;
- (void)addRoute:(id)a0;
- (void)addTrafficApiResponses:(id)a0;
- (void)addTrafficSnapshotIds:(id)a0;
- (void)addWaypointTyped:(id)a0;
- (void)clearDestinationWaypointTypeds;
- (void)clearRoutes;
- (void)clearTrafficApiResponses;
- (void)clearTrafficSnapshotIds;
- (void)clearWaypointTypeds;
- (id)destinationWaypointTypedAtIndex:(unsigned long long)a0;
- (unsigned long long)destinationWaypointTypedsCount;
- (id)rerouteStatusAsString:(int)a0;
- (id)routeAtIndex:(unsigned long long)a0;
- (unsigned long long)routesCount;
- (id)trafficApiResponsesAtIndex:(unsigned long long)a0;
- (unsigned long long)trafficApiResponsesCount;
- (id)trafficSnapshotIdsAtIndex:(unsigned long long)a0;
- (unsigned long long)trafficSnapshotIdsCount;
- (id)waypointTypedAtIndex:(unsigned long long)a0;
- (unsigned long long)waypointTypedsCount;

@end