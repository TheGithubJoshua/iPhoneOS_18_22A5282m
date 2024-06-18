@class NSData, NSMutableArray;

@interface CKDPZoneRetrieveResponse : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *zoneSummarys;
@property (readonly, nonatomic) BOOL hasContinuationMarker;
@property (retain, nonatomic) NSData *continuationMarker;
@property (retain, nonatomic) NSMutableArray *anonymousZoneInfos;

+ (Class)zoneSummaryType;
+ (Class)anonymousZoneInfoType;

- (void)mergeFrom:(id)a0;
- (id)zoneSummaryAtIndex:(unsigned long long)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (id)anonymousZoneInfoAtIndex:(unsigned long long)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void)addAnonymousZoneInfo:(id)a0;
- (void)clearZoneSummarys;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (void)addZoneSummary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)anonymousZoneInfosCount;
- (void)clearAnonymousZoneInfos;
- (unsigned long long)zoneSummarysCount;

@end
