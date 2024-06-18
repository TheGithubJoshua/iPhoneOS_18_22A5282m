@interface NTPBGroupingFlags : PBCodable <NSCopying> {
    struct { unsigned char isEligibleForGrouping : 1; unsigned char isEligibleForGroupingIfFavorited : 1; unsigned char isHidden : 1; } _has;
}

@property (nonatomic) BOOL hasIsHidden;
@property (nonatomic) BOOL isHidden;
@property (nonatomic) BOOL hasIsEligibleForGrouping;
@property (nonatomic) BOOL isEligibleForGrouping;
@property (nonatomic) BOOL hasIsEligibleForGroupingIfFavorited;
@property (nonatomic) BOOL isEligibleForGroupingIfFavorited;

- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
