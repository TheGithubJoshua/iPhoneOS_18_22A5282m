@class GEOMapItemStorage, NSString, PBDataReader, PBUnknownFields, GEOSharedNavRouteInfo, NSMutableArray, GEOSharedNavSenderInfo, GEOSharedNavLocationInfo;

@interface GEOSharedNavState : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOMapItemStorage *_destinationInfo;
    NSMutableArray *_etaInfos;
    NSString *_groupIdentifier;
    GEOSharedNavLocationInfo *_lastLocation;
    double _localUpdatedTimestamp;
    GEOSharedNavRouteInfo *_routeInfo;
    GEOSharedNavSenderInfo *_senderInfo;
    double _updatedTimestamp;
    NSMutableArray *_waypointInfos;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    unsigned int _currentWaypointIndex;
    unsigned int _protocolVersion;
    int _referenceFrame;
    unsigned int _transportType;
    BOOL _arrived;
    BOOL _closed;
    BOOL _muted;
    BOOL _resumed;
    struct { unsigned char has_localUpdatedTimestamp : 1; unsigned char has_updatedTimestamp : 1; unsigned char has_currentWaypointIndex : 1; unsigned char has_protocolVersion : 1; unsigned char has_referenceFrame : 1; unsigned char has_transportType : 1; unsigned char has_arrived : 1; unsigned char has_closed : 1; unsigned char has_muted : 1; unsigned char has_resumed : 1; unsigned char read_unknownFields : 1; unsigned char read_destinationInfo : 1; unsigned char read_etaInfos : 1; unsigned char read_groupIdentifier : 1; unsigned char read_lastLocation : 1; unsigned char read_routeInfo : 1; unsigned char read_senderInfo : 1; unsigned char read_waypointInfos : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasDestinationInfo;
@property (retain, nonatomic) GEOMapItemStorage *destinationInfo;
@property (retain, nonatomic) NSMutableArray *etaInfos;
@property (readonly, nonatomic) BOOL hasRouteInfo;
@property (retain, nonatomic) GEOSharedNavRouteInfo *routeInfo;
@property (readonly, nonatomic) BOOL hasSenderInfo;
@property (retain, nonatomic) GEOSharedNavSenderInfo *senderInfo;
@property (readonly, nonatomic) BOOL hasGroupIdentifier;
@property (retain, nonatomic) NSString *groupIdentifier;
@property (nonatomic) BOOL hasArrived;
@property (nonatomic) BOOL arrived;
@property (nonatomic) BOOL hasClosed;
@property (nonatomic) BOOL closed;
@property (nonatomic) BOOL hasReferenceFrame;
@property (nonatomic) int referenceFrame;
@property (nonatomic) BOOL hasMuted;
@property (nonatomic) BOOL muted;
@property (nonatomic) BOOL hasUpdatedTimestamp;
@property (nonatomic) double updatedTimestamp;
@property (nonatomic) BOOL hasTransportType;
@property (nonatomic) unsigned int transportType;
@property (nonatomic) BOOL hasProtocolVersion;
@property (nonatomic) unsigned int protocolVersion;
@property (nonatomic) BOOL hasLocalUpdatedTimestamp;
@property (nonatomic) double localUpdatedTimestamp;
@property (retain, nonatomic) NSMutableArray *waypointInfos;
@property (nonatomic) BOOL hasCurrentWaypointIndex;
@property (nonatomic) unsigned int currentWaypointIndex;
@property (readonly, nonatomic) BOOL hasLastLocation;
@property (retain, nonatomic) GEOSharedNavLocationInfo *lastLocation;
@property (nonatomic) BOOL hasResumed;
@property (nonatomic) BOOL resumed;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;
+ (Class)etaInfoType;
+ (Class)waypointInfoType;

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
- (void)clearUnknownFields:(BOOL)a0;
- (int)StringAsReferenceFrame:(id)a0;
- (BOOL)hasGreenTeaWithValue:(BOOL)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)referenceFrameAsString:(int)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithData:(id)a0;
- (id)jsonRepresentation;
- (id)etaInfoAtIndex:(unsigned long long)a0;
- (void)addEtaInfo:(id)a0;
- (void)addWaypointInfo:(id)a0;
- (void)clearEtaInfos;
- (void)clearWaypointInfos;
- (unsigned long long)etaInfosCount;
- (id)waypointInfoAtIndex:(unsigned long long)a0;
- (unsigned long long)waypointInfosCount;

@end