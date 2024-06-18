@class PBDataReader, NSArray, NSDictionary, NSMutableArray, PBUnknownFields;

@interface GEOAdditionalEnabledMarkets : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_offlineMarkets;
    NSMutableArray *_transitMarkets;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_offlineMarkets : 1; unsigned char read_transitMarkets : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (class, readonly, nonatomic) GEOAdditionalEnabledMarkets *additionalEnabledMarkets;

@property (readonly, nonatomic) NSArray *queryItems;
@property (readonly, nonatomic) NSDictionary *queryParameters;
@property (retain, nonatomic) NSMutableArray *transitMarkets;
@property (retain, nonatomic) NSMutableArray *offlineMarkets;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;
+ (id)_additionalEnabledTransitMarkets;
+ (Class)offlineMarketType;
+ (Class)transitMarketType;

- (void)reload;
- (id)init;
- (id)initWithDictionary:(id)a0;
- (void)readAll:(BOOL)a0;
- (void)mergeFrom:(id)a0;
- (id)offlineMarketAtIndex:(unsigned long long)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)addOfflineMarket:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)clearOfflineMarkets;
- (void)addTransitMarket:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)transitMarketAtIndex:(unsigned long long)a0;
- (void)clearUnknownFields:(BOOL)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)transitMarketsCount;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithData:(id)a0;
- (unsigned long long)offlineMarketsCount;
- (id)jsonRepresentation;
- (void)clearTransitMarkets;

@end
