@class GEOTransitOptions, GEOAddStopRouteInfo, GEOMapRegion, GEOPDViewportInfo, GEOPrivacyMetadata, PBUnknownFields, GEOLocation, GEOPDResultRefinementQuery, NSMutableArray, GEOTraitsTransitScheduleFilter, NSString, GEOCyclingOptions, GEOAutomobileOptions, GEOWalkingOptions, PBDataReader, GEOPDVenueIdentifier, GEOLatLng;

@interface GEOMapServiceTraits : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    struct { int *list; unsigned long long count; unsigned long long size; } _engineTypes;
    struct { int *list; unsigned long long count; unsigned long long size; } _knownClientResolvedTypes;
    struct { int *list; unsigned long long count; unsigned long long size; } _knownRefinementTypes;
    struct { int *list; unsigned long long count; unsigned long long size; } _supportedAutocompleteListTypes;
    struct { int *list; unsigned long long count; unsigned long long size; } _supportedAutocompleteResultCellTypes;
    struct { int *list; unsigned long long count; unsigned long long size; } _supportedChildActions;
    struct { int *list; unsigned long long count; unsigned long long size; } _supportedPlaceSummaryFormatTypes;
    struct { int *list; unsigned long long count; unsigned long long size; } _supportedSearchTierTypes;
    struct { int *list; unsigned long long count; unsigned long long size; } _transportTypes;
    struct GEOSessionID { unsigned long long _high; unsigned long long _low; } _sessionId;
    GEOAddStopRouteInfo *_addStopRouteInfo;
    NSString *_analyticsAppIdentifier;
    NSString *_appIdentifier;
    NSString *_appMajorVersion;
    NSString *_appMinorVersion;
    GEOLatLng *_autocompleteOriginationPreviousLatlng;
    GEOAutomobileOptions *_automobileOptions;
    NSString *_carHeadunitManufacturer;
    NSString *_carHeadunitModel;
    double _carHeadunitPixelHeight;
    double _carHeadunitPixelWidth;
    NSString *_currentLocaleCurrencySymbol;
    GEOCyclingOptions *_cyclingOptions;
    GEOLocation *_deviceLocation;
    NSMutableArray *_deviceDisplayLanguages;
    NSString *_deviceKeyboardLocale;
    NSString *_deviceSpokenLocale;
    NSString *_displayRegion;
    NSMutableArray *_evChargingPorts;
    NSMutableArray *_historicalLocations;
    double _isTourist;
    GEOMapRegion *_mapRegion;
    double _mapZoomLevel;
    NSMutableArray *_photoSizes;
    GEOPDViewportInfo *_previousSearchViewport;
    GEOPrivacyMetadata *_privacyMetadata;
    NSString *_providerID;
    GEOPDResultRefinementQuery *_resultRefinementQuery;
    NSMutableArray *_reviewUserPhotoSizes;
    GEOLatLng *_searchOriginationPreviousLatlng;
    double _sessionRelativeTimestamp;
    GEOTransitOptions *_transitOptions;
    GEOTraitsTransitScheduleFilter *_transitScheduleFilter;
    GEOTraitsTransitScheduleFilter *_transitTripStopTimeFilter;
    GEOPDVenueIdentifier *_venueIdentifier;
    GEOWalkingOptions *_walkingOptions;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _autocompleteOriginationType;
    unsigned int _auxiliaryTierNumResults;
    int _carHeadunitConnectionType;
    int _carHeadunitInteractionModel;
    int _deviceBatteryState;
    int _deviceInterfaceOrientation;
    unsigned int _httpRequestPriority;
    int _mode;
    int _navigationTransportType;
    unsigned int _photoAlbumCount;
    unsigned int _photosCount;
    unsigned int _placeSummaryRevision;
    unsigned int _ratingsCount;
    unsigned int _relatedPlaceItemCount;
    int _requestPurpose;
    unsigned int _reviewUserPhotosCount;
    unsigned int _routeStopCount;
    int _searchRequestType;
    int _searchOriginationType;
    unsigned int _sequenceNumber;
    int _source;
    unsigned int _timeSinceMapEnteredForeground;
    unsigned int _timeSinceMapViewportChanged;
    BOOL _appDarkMode;
    BOOL _autocompleteOriginationEditingServerWaypoints;
    BOOL _autocompleteRequestSupportsSectionHeader;
    BOOL _deviceDarkMode;
    BOOL _deviceInVehicle;
    BOOL _isAPICall;
    BOOL _isRefund;
    BOOL _isRoutePlanningEditStopFillRequest;
    BOOL _isSettlement;
    BOOL _isWidgetRequest;
    BOOL _navigating;
    BOOL _searchOriginationEditingServerWaypoints;
    BOOL _supportAutocompleteGuideResults;
    BOOL _supportAutocompletePublisherResults;
    BOOL _supportAutocompleteRapAffordance;
    BOOL _supportChildItems;
    BOOL _supportClientRankingCompositeFeatures;
    BOOL _supportClientRankingFeatureMetadata;
    BOOL _supportDirectionIntentAutocomplete;
    BOOL _supportDirectionIntentSearch;
    BOOL _supportDymSuggestion;
    BOOL _supportStructuredRapAffordance;
    BOOL _supportUnresolvedDirectionIntent;
    BOOL _supportsBrandFallback;
    BOOL _useBackgroundUrl;
    BOOL _wantsBrandIcon;
    struct { unsigned char has_sessionId : 1; unsigned char has_carHeadunitPixelHeight : 1; unsigned char has_carHeadunitPixelWidth : 1; unsigned char has_isTourist : 1; unsigned char has_mapZoomLevel : 1; unsigned char has_sessionRelativeTimestamp : 1; unsigned char has_autocompleteOriginationType : 1; unsigned char has_auxiliaryTierNumResults : 1; unsigned char has_carHeadunitConnectionType : 1; unsigned char has_carHeadunitInteractionModel : 1; unsigned char has_deviceBatteryState : 1; unsigned char has_deviceInterfaceOrientation : 1; unsigned char has_httpRequestPriority : 1; unsigned char has_mode : 1; unsigned char has_navigationTransportType : 1; unsigned char has_photoAlbumCount : 1; unsigned char has_photosCount : 1; unsigned char has_placeSummaryRevision : 1; unsigned char has_ratingsCount : 1; unsigned char has_relatedPlaceItemCount : 1; unsigned char has_requestPurpose : 1; unsigned char has_reviewUserPhotosCount : 1; unsigned char has_routeStopCount : 1; unsigned char has_searchRequestType : 1; unsigned char has_searchOriginationType : 1; unsigned char has_sequenceNumber : 1; unsigned char has_source : 1; unsigned char has_timeSinceMapEnteredForeground : 1; unsigned char has_timeSinceMapViewportChanged : 1; unsigned char has_appDarkMode : 1; unsigned char has_autocompleteOriginationEditingServerWaypoints : 1; unsigned char has_autocompleteRequestSupportsSectionHeader : 1; unsigned char has_deviceDarkMode : 1; unsigned char has_deviceInVehicle : 1; unsigned char has_isAPICall : 1; unsigned char has_isRefund : 1; unsigned char has_isRoutePlanningEditStopFillRequest : 1; unsigned char has_isSettlement : 1; unsigned char has_isWidgetRequest : 1; unsigned char has_navigating : 1; unsigned char has_searchOriginationEditingServerWaypoints : 1; unsigned char has_supportAutocompleteGuideResults : 1; unsigned char has_supportAutocompletePublisherResults : 1; unsigned char has_supportAutocompleteRapAffordance : 1; unsigned char has_supportChildItems : 1; unsigned char has_supportClientRankingCompositeFeatures : 1; unsigned char has_supportClientRankingFeatureMetadata : 1; unsigned char has_supportDirectionIntentAutocomplete : 1; unsigned char has_supportDirectionIntentSearch : 1; unsigned char has_supportDymSuggestion : 1; unsigned char has_supportStructuredRapAffordance : 1; unsigned char has_supportUnresolvedDirectionIntent : 1; unsigned char has_supportsBrandFallback : 1; unsigned char has_useBackgroundUrl : 1; unsigned char has_wantsBrandIcon : 1; unsigned char read_unknownFields : 1; unsigned char read_engineTypes : 1; unsigned char read_knownClientResolvedTypes : 1; unsigned char read_knownRefinementTypes : 1; unsigned char read_supportedAutocompleteListTypes : 1; unsigned char read_supportedAutocompleteResultCellTypes : 1; unsigned char read_supportedChildActions : 1; unsigned char read_supportedPlaceSummaryFormatTypes : 1; unsigned char read_supportedSearchTierTypes : 1; unsigned char read_transportTypes : 1; unsigned char read_addStopRouteInfo : 1; unsigned char read_analyticsAppIdentifier : 1; unsigned char read_appIdentifier : 1; unsigned char read_appMajorVersion : 1; unsigned char read_appMinorVersion : 1; unsigned char read_autocompleteOriginationPreviousLatlng : 1; unsigned char read_automobileOptions : 1; unsigned char read_carHeadunitManufacturer : 1; unsigned char read_carHeadunitModel : 1; unsigned char read_currentLocaleCurrencySymbol : 1; unsigned char read_cyclingOptions : 1; unsigned char read_deviceLocation : 1; unsigned char read_deviceDisplayLanguages : 1; unsigned char read_deviceKeyboardLocale : 1; unsigned char read_deviceSpokenLocale : 1; unsigned char read_displayRegion : 1; unsigned char read_evChargingPorts : 1; unsigned char read_historicalLocations : 1; unsigned char read_mapRegion : 1; unsigned char read_photoSizes : 1; unsigned char read_previousSearchViewport : 1; unsigned char read_privacyMetadata : 1; unsigned char read_providerID : 1; unsigned char read_resultRefinementQuery : 1; unsigned char read_reviewUserPhotoSizes : 1; unsigned char read_searchOriginationPreviousLatlng : 1; unsigned char read_transitOptions : 1; unsigned char read_transitScheduleFilter : 1; unsigned char read_transitTripStopTimeFilter : 1; unsigned char read_venueIdentifier : 1; unsigned char read_walkingOptions : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) BOOL hasSessionId;
@property (nonatomic) struct GEOSessionID { unsigned long long x0; unsigned long long x1; } sessionId;
@property (nonatomic) BOOL hasSequenceNumber;
@property (nonatomic) unsigned int sequenceNumber;
@property (readonly, nonatomic) BOOL hasAppIdentifier;
@property (retain, nonatomic) NSString *appIdentifier;
@property (readonly, nonatomic) BOOL hasAppMajorVersion;
@property (retain, nonatomic) NSString *appMajorVersion;
@property (readonly, nonatomic) BOOL hasAppMinorVersion;
@property (retain, nonatomic) NSString *appMinorVersion;
@property (readonly, nonatomic) BOOL hasDeviceLocation;
@property (retain, nonatomic) GEOLocation *deviceLocation;
@property (readonly, nonatomic) unsigned long long transportTypesCount;
@property (readonly, nonatomic) int *transportTypes;
@property (readonly, nonatomic) BOOL hasMapRegion;
@property (retain, nonatomic) GEOMapRegion *mapRegion;
@property (retain, nonatomic) NSMutableArray *deviceDisplayLanguages;
@property (readonly, nonatomic) BOOL hasDeviceKeyboardLocale;
@property (retain, nonatomic) NSString *deviceKeyboardLocale;
@property (readonly, nonatomic) BOOL hasDeviceSpokenLocale;
@property (retain, nonatomic) NSString *deviceSpokenLocale;
@property (nonatomic) BOOL hasIsAPICall;
@property (nonatomic) BOOL isAPICall;
@property (nonatomic) BOOL hasSource;
@property (nonatomic) int source;
@property (retain, nonatomic) NSMutableArray *photoSizes;
@property (nonatomic) BOOL hasPhotosCount;
@property (nonatomic) unsigned int photosCount;
@property (retain, nonatomic) NSMutableArray *reviewUserPhotoSizes;
@property (nonatomic) BOOL hasReviewUserPhotosCount;
@property (nonatomic) unsigned int reviewUserPhotosCount;
@property (nonatomic) BOOL hasTimeSinceMapEnteredForeground;
@property (nonatomic) unsigned int timeSinceMapEnteredForeground;
@property (nonatomic) BOOL hasTimeSinceMapViewportChanged;
@property (nonatomic) unsigned int timeSinceMapViewportChanged;
@property (nonatomic) BOOL hasCarHeadunitInteractionModel;
@property (nonatomic) int carHeadunitInteractionModel;
@property (readonly, nonatomic) BOOL hasCarHeadunitManufacturer;
@property (retain, nonatomic) NSString *carHeadunitManufacturer;
@property (readonly, nonatomic) BOOL hasCarHeadunitModel;
@property (retain, nonatomic) NSString *carHeadunitModel;
@property (nonatomic) BOOL hasCarHeadunitPixelWidth;
@property (nonatomic) double carHeadunitPixelWidth;
@property (nonatomic) BOOL hasCarHeadunitPixelHeight;
@property (nonatomic) double carHeadunitPixelHeight;
@property (readonly, nonatomic) BOOL hasTransitScheduleFilter;
@property (retain, nonatomic) GEOTraitsTransitScheduleFilter *transitScheduleFilter;
@property (nonatomic) BOOL hasMapZoomLevel;
@property (nonatomic) double mapZoomLevel;
@property (nonatomic) BOOL hasMode;
@property (nonatomic) int mode;
@property (readonly, nonatomic) BOOL hasDisplayRegion;
@property (retain, nonatomic) NSString *displayRegion;
@property (readonly, nonatomic) BOOL hasProviderID;
@property (retain, nonatomic) NSString *providerID;
@property (nonatomic) BOOL hasDeviceInterfaceOrientation;
@property (nonatomic) int deviceInterfaceOrientation;
@property (nonatomic) BOOL hasDeviceBatteryState;
@property (nonatomic) int deviceBatteryState;
@property (nonatomic) BOOL hasCarHeadunitConnectionType;
@property (nonatomic) int carHeadunitConnectionType;
@property (nonatomic) BOOL hasNavigating;
@property (nonatomic) BOOL navigating;
@property (retain, nonatomic) NSMutableArray *historicalLocations;
@property (readonly, nonatomic) BOOL hasAutomobileOptions;
@property (retain, nonatomic) GEOAutomobileOptions *automobileOptions;
@property (readonly, nonatomic) BOOL hasTransitOptions;
@property (retain, nonatomic) GEOTransitOptions *transitOptions;
@property (readonly, nonatomic) BOOL hasWalkingOptions;
@property (retain, nonatomic) GEOWalkingOptions *walkingOptions;
@property (readonly, nonatomic) unsigned long long engineTypesCount;
@property (readonly, nonatomic) int *engineTypes;
@property (nonatomic) BOOL hasSupportDirectionIntentSearch;
@property (nonatomic) BOOL supportDirectionIntentSearch;
@property (nonatomic) BOOL hasSupportDymSuggestion;
@property (nonatomic) BOOL supportDymSuggestion;
@property (readonly, nonatomic) unsigned long long knownClientResolvedTypesCount;
@property (readonly, nonatomic) int *knownClientResolvedTypes;
@property (nonatomic) BOOL hasWantsBrandIcon;
@property (nonatomic) BOOL wantsBrandIcon;
@property (readonly, nonatomic) BOOL hasVenueIdentifier;
@property (retain, nonatomic) GEOPDVenueIdentifier *venueIdentifier;
@property (nonatomic) BOOL hasDeviceInVehicle;
@property (nonatomic) BOOL deviceInVehicle;
@property (nonatomic) BOOL hasUseBackgroundUrl;
@property (nonatomic) BOOL useBackgroundUrl;
@property (nonatomic) BOOL hasHttpRequestPriority;
@property (nonatomic) unsigned int httpRequestPriority;
@property (readonly, nonatomic) BOOL hasAnalyticsAppIdentifier;
@property (retain, nonatomic) NSString *analyticsAppIdentifier;
@property (nonatomic) BOOL hasSessionRelativeTimestamp;
@property (nonatomic) double sessionRelativeTimestamp;
@property (nonatomic) BOOL hasSupportDirectionIntentAutocomplete;
@property (nonatomic) BOOL supportDirectionIntentAutocomplete;
@property (nonatomic) BOOL hasSupportUnresolvedDirectionIntent;
@property (nonatomic) BOOL supportUnresolvedDirectionIntent;
@property (nonatomic) BOOL hasDeviceDarkMode;
@property (nonatomic) BOOL deviceDarkMode;
@property (nonatomic) BOOL hasAppDarkMode;
@property (nonatomic) BOOL appDarkMode;
@property (nonatomic) BOOL hasSupportsBrandFallback;
@property (nonatomic) BOOL supportsBrandFallback;
@property (nonatomic) BOOL hasRequestPurpose;
@property (nonatomic) int requestPurpose;
@property (readonly, nonatomic) unsigned long long supportedAutocompleteListTypesCount;
@property (readonly, nonatomic) int *supportedAutocompleteListTypes;
@property (nonatomic) BOOL hasIsSettlement;
@property (nonatomic) BOOL isSettlement;
@property (readonly, nonatomic) BOOL hasTransitTripStopTimeFilter;
@property (retain, nonatomic) GEOTraitsTransitScheduleFilter *transitTripStopTimeFilter;
@property (nonatomic) BOOL hasSupportClientRankingFeatureMetadata;
@property (nonatomic) BOOL supportClientRankingFeatureMetadata;
@property (readonly, nonatomic) unsigned long long supportedChildActionsCount;
@property (readonly, nonatomic) int *supportedChildActions;
@property (nonatomic) BOOL hasSupportChildItems;
@property (nonatomic) BOOL supportChildItems;
@property (nonatomic) BOOL hasIsRefund;
@property (nonatomic) BOOL isRefund;
@property (nonatomic) BOOL hasAutocompleteRequestSupportsSectionHeader;
@property (nonatomic) BOOL autocompleteRequestSupportsSectionHeader;
@property (readonly, nonatomic) unsigned long long supportedAutocompleteResultCellTypesCount;
@property (readonly, nonatomic) int *supportedAutocompleteResultCellTypes;
@property (nonatomic) BOOL hasSupportAutocompleteRapAffordance;
@property (nonatomic) BOOL supportAutocompleteRapAffordance;
@property (nonatomic) BOOL hasNavigationTransportType;
@property (nonatomic) int navigationTransportType;
@property (readonly, nonatomic) BOOL hasCyclingOptions;
@property (retain, nonatomic) GEOCyclingOptions *cyclingOptions;
@property (nonatomic) BOOL hasRatingsCount;
@property (nonatomic) unsigned int ratingsCount;
@property (retain, nonatomic) NSMutableArray *evChargingPorts;
@property (nonatomic) BOOL hasIsWidgetRequest;
@property (nonatomic) BOOL isWidgetRequest;
@property (readonly, nonatomic) unsigned long long supportedSearchTierTypesCount;
@property (readonly, nonatomic) int *supportedSearchTierTypes;
@property (nonatomic) BOOL hasAuxiliaryTierNumResults;
@property (nonatomic) unsigned int auxiliaryTierNumResults;
@property (nonatomic) BOOL hasPlaceSummaryRevision;
@property (nonatomic) unsigned int placeSummaryRevision;
@property (nonatomic) BOOL hasIsTourist;
@property (nonatomic) double isTourist;
@property (readonly, nonatomic) unsigned long long knownRefinementTypesCount;
@property (readonly, nonatomic) int *knownRefinementTypes;
@property (nonatomic) BOOL hasSupportAutocompletePublisherResults;
@property (nonatomic) BOOL supportAutocompletePublisherResults;
@property (nonatomic) BOOL hasSupportAutocompleteGuideResults;
@property (nonatomic) BOOL supportAutocompleteGuideResults;
@property (readonly, nonatomic) BOOL hasPreviousSearchViewport;
@property (retain, nonatomic) GEOPDViewportInfo *previousSearchViewport;
@property (nonatomic) BOOL hasPhotoAlbumCount;
@property (nonatomic) unsigned int photoAlbumCount;
@property (readonly, nonatomic) BOOL hasResultRefinementQuery;
@property (retain, nonatomic) GEOPDResultRefinementQuery *resultRefinementQuery;
@property (nonatomic) BOOL hasRelatedPlaceItemCount;
@property (nonatomic) unsigned int relatedPlaceItemCount;
@property (nonatomic) BOOL hasSearchRequestType;
@property (nonatomic) int searchRequestType;
@property (readonly, nonatomic) BOOL hasCurrentLocaleCurrencySymbol;
@property (retain, nonatomic) NSString *currentLocaleCurrencySymbol;
@property (readonly, nonatomic) unsigned long long supportedPlaceSummaryFormatTypesCount;
@property (readonly, nonatomic) int *supportedPlaceSummaryFormatTypes;
@property (nonatomic) BOOL hasAutocompleteOriginationType;
@property (nonatomic) int autocompleteOriginationType;
@property (readonly, nonatomic) BOOL hasAutocompleteOriginationPreviousLatlng;
@property (retain, nonatomic) GEOLatLng *autocompleteOriginationPreviousLatlng;
@property (nonatomic) BOOL hasSearchOriginationType;
@property (nonatomic) int searchOriginationType;
@property (readonly, nonatomic) BOOL hasSearchOriginationPreviousLatlng;
@property (retain, nonatomic) GEOLatLng *searchOriginationPreviousLatlng;
@property (readonly, nonatomic) BOOL hasAddStopRouteInfo;
@property (retain, nonatomic) GEOAddStopRouteInfo *addStopRouteInfo;
@property (nonatomic) BOOL hasAutocompleteOriginationEditingServerWaypoints;
@property (nonatomic) BOOL autocompleteOriginationEditingServerWaypoints;
@property (nonatomic) BOOL hasSearchOriginationEditingServerWaypoints;
@property (nonatomic) BOOL searchOriginationEditingServerWaypoints;
@property (nonatomic) BOOL hasSupportClientRankingCompositeFeatures;
@property (nonatomic) BOOL supportClientRankingCompositeFeatures;
@property (readonly, nonatomic) BOOL hasPrivacyMetadata;
@property (retain, nonatomic) GEOPrivacyMetadata *privacyMetadata;
@property (nonatomic) BOOL hasRouteStopCount;
@property (nonatomic) unsigned int routeStopCount;
@property (nonatomic) BOOL hasSupportStructuredRapAffordance;
@property (nonatomic) BOOL supportStructuredRapAffordance;
@property (nonatomic) BOOL hasIsRoutePlanningEditStopFillRequest;
@property (nonatomic) BOOL isRoutePlanningEditStopFillRequest;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;
+ (Class)photoSizesType;
+ (Class)reviewUserPhotoSizesType;
+ (Class)deviceDisplayLanguageType;
+ (Class)historicalLocationsType;
+ (Class)evChargingPortType;

- (int)StringAsSupportedPlaceSummaryFormatTypes:(id)a0;
- (id)reviewUserPhotoSizesAtIndex:(unsigned long long)a0;
- (void)clearLocations;
- (void)clearSupportedAutocompleteResultCellTypes;
- (id)knownClientResolvedTypesAsString:(int)a0;
- (int)StringAsSource:(id)a0;
- (unsigned long long)evChargingPortsCount;
- (id)init;
- (void)addSupportedSearchTierType:(int)a0;
- (int)StringAsEngineTypes:(id)a0;
- (id)supportedAutocompleteResultCellTypesAsString:(int)a0;
- (id)initWithDictionary:(id)a0;
- (id)engineTypesAsString:(int)a0;
- (id)sourceAsString:(int)a0;
- (void)addReviewUserPhotoSizes:(id)a0;
- (void)readAll:(BOOL)a0;
- (int)StringAsSearchOriginationType:(id)a0;
- (int)knownClientResolvedTypeAtIndex:(unsigned long long)a0;
- (id)copyByIncrementingSessionCounters;
- (void)addHistoricalLocations:(id)a0;
- (void)mergeFrom:(id)a0;
- (void)addSupportedChildAction:(int)a0;
- (int)StringAsTransportTypes:(id)a0;
- (int)engineTypeAtIndex:(unsigned long long)a0;
- (void)setKnownRefinementTypes:(int *)a0 count:(unsigned long long)a1;
- (void)clearReviewUserPhotoSizes;
- (int)StringAsSupportedSearchTierTypes:(id)a0;
- (void)clearSensitiveFields:(unsigned long long)a0;
- (id)supportedChildActionsAsString:(int)a0;
- (void)addKnownRefinementType:(int)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (int)StringAsDeviceInterfaceOrientation:(id)a0;
- (void)clearSupportedPlaceSummaryFormatTypes;
- (void)clearSupportedSearchTierTypes;
- (int)StringAsSupportedAutocompleteResultCellTypes:(id)a0;
- (unsigned long long)deviceDisplayLanguagesCount;
- (id)initWithJSON:(id)a0;
- (void)setSupportedChildActions:(int *)a0 count:(unsigned long long)a1;
- (int)StringAsKnownRefinementTypes:(id)a0;
- (void)addSupportedPlaceSummaryFormatType:(int)a0;
- (void)clearSupportedAutocompleteListTypes;
- (void)_internal_incrementSessionCounters;
- (unsigned long long)historicalLocationsCount;
- (unsigned long long)hash;
- (void)clearEngineTypes;
- (void)addSupportedAutocompleteListType:(int)a0;
- (void)writeTo:(id)a0;
- (id)carHeadunitConnectionTypeAsString:(int)a0;
- (id)transportTypesAsString:(int)a0;
- (id)evChargingPortAtIndex:(unsigned long long)a0;
- (int)StringAsSearchRequestType:(id)a0;
- (id)historicalLocationsAtIndex:(unsigned long long)a0;
- (id)supportedPlaceSummaryFormatTypesAsString:(int)a0;
- (int)knownRefinementTypeAtIndex:(unsigned long long)a0;
- (id)searchOriginationTypeAsString:(int)a0;
- (id)carHeadunitInteractionModelAsString:(int)a0;
- (void)clearUnknownFields:(BOOL)a0;
- (void)clearSessionId;
- (void)clearKnownRefinementTypes;
- (id)requestPurposeAsString:(int)a0;
- (void)clearTransportTypes;
- (int)StringAsMode:(id)a0;
- (BOOL)hasGreenTeaWithValue:(BOOL)a0;
- (void).cxx_destruct;
- (int)StringAsCarHeadunitInteractionModel:(id)a0;
- (void)clearSupportedChildActions;
- (BOOL)isEqual:(id)a0;
- (void)setEngineTypes:(int *)a0 count:(unsigned long long)a1;
- (id)description;
- (id)knownRefinementTypesAsString:(int)a0;
- (int)StringAsKnownClientResolvedTypes:(id)a0;
- (int)supportedSearchTierTypeAtIndex:(unsigned long long)a0;
- (void)addTransportType:(int)a0;
- (void)setSupportedAutocompleteListTypes:(int *)a0 count:(unsigned long long)a1;
- (BOOL)readFrom:(id)a0;
- (id)searchRequestTypeAsString:(int)a0;
- (void)clearHistoricalLocations;
- (id)supportedAutocompleteListTypesAsString:(int)a0;
- (void)clearKnownClientResolvedTypes;
- (int)supportedChildActionAtIndex:(unsigned long long)a0;
- (id)deviceInterfaceOrientationAsString:(int)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)StringAsDeviceBatteryState:(id)a0;
- (id)initWithData:(id)a0;
- (void)addDeviceDisplayLanguage:(id)a0;
- (void)setSupportedAutocompleteResultCellTypes:(int *)a0 count:(unsigned long long)a1;
- (void)addEngineType:(int)a0;
- (id)deviceBatteryStateAsString:(int)a0;
- (void)setSupportedSearchTierTypes:(int *)a0 count:(unsigned long long)a1;
- (int)StringAsSupportedAutocompleteListTypes:(id)a0;
- (void)clearPhotoSizes;
- (id)photoSizesAtIndex:(unsigned long long)a0;
- (void)dealloc;
- (id)autocompleteOriginationTypeAsString:(int)a0;
- (void)addPhotoSizes:(id)a0;
- (int)supportedAutocompleteResultCellTypeAtIndex:(unsigned long long)a0;
- (int)StringAsNavigationTransportType:(id)a0;
- (int)StringAsRequestPurpose:(id)a0;
- (int)transportTypeAtIndex:(unsigned long long)a0;
- (int)StringAsSupportedChildActions:(id)a0;
- (int)StringAsCarHeadunitConnectionType:(id)a0;
- (int)supportedPlaceSummaryFormatTypeAtIndex:(unsigned long long)a0;
- (unsigned long long)reviewUserPhotoSizesCount;
- (id)modeAsString:(int)a0;
- (id)navigationTransportTypeAsString:(int)a0;
- (int)supportedAutocompleteListTypeAtIndex:(unsigned long long)a0;
- (void)updateAnalyticsShortSession;
- (id)jsonRepresentation;
- (void)setTransportTypes:(int *)a0 count:(unsigned long long)a1;
- (void)setKnownClientResolvedTypes:(int *)a0 count:(unsigned long long)a1;
- (int)StringAsAutocompleteOriginationType:(id)a0;
- (id)supportedSearchTierTypesAsString:(int)a0;
- (void)clearDeviceDisplayLanguages;
- (unsigned long long)photoSizesCount;
- (void)setSupportedPlaceSummaryFormatTypes:(int *)a0 count:(unsigned long long)a1;
- (void)addEvChargingPort:(id)a0;
- (void)clearEvChargingPorts;
- (void)addSupportedAutocompleteResultCellType:(int)a0;
- (void)addKnownClientResolvedType:(int)a0;
- (id)deviceDisplayLanguageAtIndex:(unsigned long long)a0;

@end
