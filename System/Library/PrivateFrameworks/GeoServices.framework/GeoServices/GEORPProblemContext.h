@class GEORPTransitLineTileInfo, GEORPCurrentEnvironmentManifestURLs, GEORPNavigationSettings, NSMutableArray, GEOServicesState, GEOABAssignmentResponse, NSString, GEORPPlaceInfo, GEORPMapLocation, GEOPlace, PBDataReader, GEOPDPlace, GEORPMerchantLookupContext, GEORPPersonalizedMaps;

@interface GEORPProblemContext : PBCodable <NSCopying> {
    PBDataReader *_reader;
    struct GEOSessionID { unsigned long long _high; unsigned long long _low; } _sessionId;
    NSMutableArray *_autocompleteSuggestionLists;
    NSMutableArray *_auxiliaryControls;
    double _creationDate;
    GEOABAssignmentResponse *_currentAbAssignmentResponse;
    GEORPCurrentEnvironmentManifestURLs *_currentEnvironmentManifestUrls;
    NSMutableArray *_directionsRequests;
    NSMutableArray *_directionsResponses;
    NSMutableArray *_directionsWaypointPlaceInfos;
    NSString *_lastSearchString;
    NSString *_lastUserTypedSearchString;
    GEORPMapLocation *_mapLocation;
    GEORPMerchantLookupContext *_merchantLookupContext;
    GEORPNavigationSettings *_navigationSettings;
    GEOPlace *_originalPlace;
    unsigned long long _originatingAuxiliaryControlIndex;
    GEORPPersonalizedMaps *_personalizedMaps;
    GEORPPlaceInfo *_placeInfo;
    GEOPDPlace *_place;
    GEOServicesState *_servicesState;
    NSString *_tileStateLog;
    GEORPTransitLineTileInfo *_transitLineTileInfo;
    NSMutableArray *_visibleTileSets;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _deviceGmtOffset;
    int _pinType;
    struct { unsigned char has_sessionId : 1; unsigned char has_creationDate : 1; unsigned char has_originatingAuxiliaryControlIndex : 1; unsigned char has_deviceGmtOffset : 1; unsigned char has_pinType : 1; unsigned char read_autocompleteSuggestionLists : 1; unsigned char read_auxiliaryControls : 1; unsigned char read_currentAbAssignmentResponse : 1; unsigned char read_currentEnvironmentManifestUrls : 1; unsigned char read_directionsRequests : 1; unsigned char read_directionsResponses : 1; unsigned char read_directionsWaypointPlaceInfos : 1; unsigned char read_lastSearchString : 1; unsigned char read_lastUserTypedSearchString : 1; unsigned char read_mapLocation : 1; unsigned char read_merchantLookupContext : 1; unsigned char read_navigationSettings : 1; unsigned char read_originalPlace : 1; unsigned char read_personalizedMaps : 1; unsigned char read_placeInfo : 1; unsigned char read_place : 1; unsigned char read_servicesState : 1; unsigned char read_tileStateLog : 1; unsigned char read_transitLineTileInfo : 1; unsigned char read_visibleTileSets : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) BOOL hasSessionId;
@property (nonatomic) struct GEOSessionID { unsigned long long x0; unsigned long long x1; } sessionId;
@property (nonatomic) BOOL hasPinType;
@property (nonatomic) int pinType;
@property (readonly, nonatomic) BOOL hasOriginalPlace;
@property (retain, nonatomic) GEOPlace *originalPlace;
@property (readonly, nonatomic) BOOL hasMapLocation;
@property (retain, nonatomic) GEORPMapLocation *mapLocation;
@property (retain, nonatomic) NSMutableArray *visibleTileSets;
@property (readonly, nonatomic) BOOL hasTileStateLog;
@property (retain, nonatomic) NSString *tileStateLog;
@property (readonly, nonatomic) BOOL hasPlace;
@property (retain, nonatomic) GEOPDPlace *place;
@property (retain, nonatomic) NSMutableArray *directionsRequests;
@property (retain, nonatomic) NSMutableArray *directionsResponses;
@property (readonly, nonatomic) BOOL hasLastSearchString;
@property (retain, nonatomic) NSString *lastSearchString;
@property (nonatomic) BOOL hasCreationDate;
@property (nonatomic) double creationDate;
@property (retain, nonatomic) NSMutableArray *auxiliaryControls;
@property (nonatomic) BOOL hasOriginatingAuxiliaryControlIndex;
@property (nonatomic) unsigned long long originatingAuxiliaryControlIndex;
@property (readonly, nonatomic) BOOL hasTransitLineTileInfo;
@property (retain, nonatomic) GEORPTransitLineTileInfo *transitLineTileInfo;
@property (readonly, nonatomic) BOOL hasPlaceInfo;
@property (retain, nonatomic) GEORPPlaceInfo *placeInfo;
@property (readonly, nonatomic) BOOL hasLastUserTypedSearchString;
@property (retain, nonatomic) NSString *lastUserTypedSearchString;
@property (nonatomic) BOOL hasDeviceGmtOffset;
@property (nonatomic) int deviceGmtOffset;
@property (readonly, nonatomic) BOOL hasCurrentAbAssignmentResponse;
@property (retain, nonatomic) GEOABAssignmentResponse *currentAbAssignmentResponse;
@property (retain, nonatomic) NSMutableArray *autocompleteSuggestionLists;
@property (readonly, nonatomic) BOOL hasCurrentEnvironmentManifestUrls;
@property (retain, nonatomic) GEORPCurrentEnvironmentManifestURLs *currentEnvironmentManifestUrls;
@property (retain, nonatomic) NSMutableArray *directionsWaypointPlaceInfos;
@property (readonly, nonatomic) BOOL hasServicesState;
@property (retain, nonatomic) GEOServicesState *servicesState;
@property (readonly, nonatomic) BOOL hasPersonalizedMaps;
@property (retain, nonatomic) GEORPPersonalizedMaps *personalizedMaps;
@property (readonly, nonatomic) BOOL hasNavigationSettings;
@property (retain, nonatomic) GEORPNavigationSettings *navigationSettings;
@property (readonly, nonatomic) BOOL hasMerchantLookupContext;
@property (retain, nonatomic) GEORPMerchantLookupContext *merchantLookupContext;

+ (BOOL)isValid:(id)a0;
+ (Class)directionsWaypointPlaceInfoType;
+ (Class)autocompleteSuggestionListType;
+ (Class)auxiliaryControlType;
+ (Class)directionsRequestType;
+ (Class)directionsResponseType;
+ (Class)visibleTileSetType;

- (id)init;
- (id)initWithDictionary:(id)a0;
- (void)readAll:(BOOL)a0;
- (void)mergeFrom:(id)a0;
- (void)clearSensitiveFields:(unsigned long long)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)hasGreenTeaWithValue:(BOOL)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithData:(id)a0;
- (id)jsonRepresentation;
- (int)StringAsPinType:(id)a0;
- (void)addDirectionsWaypointPlaceInfo:(id)a0;
- (void)addAutocompleteSuggestionList:(id)a0;
- (void)addAuxiliaryControl:(id)a0;
- (void)addDirectionsRequest:(id)a0;
- (void)addDirectionsResponse:(id)a0;
- (void)addVisibleTileSet:(id)a0;
- (id)autocompleteSuggestionListAtIndex:(unsigned long long)a0;
- (unsigned long long)autocompleteSuggestionListsCount;
- (id)auxiliaryControlAtIndex:(unsigned long long)a0;
- (unsigned long long)auxiliaryControlsCount;
- (void)clearAutocompleteSuggestionLists;
- (void)clearAuxiliaryControls;
- (void)clearDirectionsRequests;
- (void)clearDirectionsResponses;
- (void)clearDirectionsWaypointPlaceInfos;
- (void)clearVisibleTileSets;
- (id)directionsRequestAtIndex:(unsigned long long)a0;
- (unsigned long long)directionsRequestsCount;
- (id)directionsResponseAtIndex:(unsigned long long)a0;
- (unsigned long long)directionsResponsesCount;
- (id)directionsWaypointPlaceInfoAtIndex:(unsigned long long)a0;
- (unsigned long long)directionsWaypointPlaceInfosCount;
- (id)pinTypeAsString:(int)a0;
- (id)visibleTileSetAtIndex:(unsigned long long)a0;
- (unsigned long long)visibleTileSetsCount;

@end