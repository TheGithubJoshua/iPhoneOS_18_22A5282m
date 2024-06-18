@interface HKCodableSummaryCategoryValue : PBCodable <NSCopying> {
    struct APPLE_112 { unsigned char categoryValue : 1; unsigned char dateData : 1; } _has;
}

@property (nonatomic) BOOL hasCategoryValue;
@property (nonatomic) long long categoryValue;
@property (nonatomic) BOOL hasDateData;
@property (nonatomic) double dateData;

- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
