@class NSMutableArray;

@interface NTPBCacheCoordinatorHints : PBCodable <NSCopying> {
    struct { unsigned char version : 1; } _has;
}

@property (nonatomic) BOOL hasVersion;
@property (nonatomic) long long version;
@property (retain, nonatomic) NSMutableArray *cacheHints;

+ (Class)cacheHintsType;

- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (unsigned long long)cacheHintsCount;
- (void)clearCacheHints;
- (void)addCacheHints:(id)a0;
- (id)cacheHintsAtIndex:(unsigned long long)a0;

@end
