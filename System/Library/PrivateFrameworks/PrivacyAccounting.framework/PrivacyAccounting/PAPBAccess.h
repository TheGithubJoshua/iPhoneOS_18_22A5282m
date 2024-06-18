@class NSData, NSMutableArray, PAPBApplication;

@interface PAPBAccess : PBCodable <NSCopying> {
    struct { unsigned char timestampAdjustment : 1; unsigned char kind : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasAccessor;
@property (retain, nonatomic) PAPBApplication *accessor;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (retain, nonatomic) NSData *identifier;
@property (nonatomic) BOOL hasKind;
@property (nonatomic) int kind;
@property (nonatomic) BOOL hasTimestampAdjustment;
@property (nonatomic) double timestampAdjustment;
@property (retain, nonatomic) NSMutableArray *assetIdentifiers;

+ (Class)assetIdentifiersType;

- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addAssetIdentifiers:(id)a0;
- (id)assetIdentifiersAtIndex:(unsigned long long)a0;
- (unsigned long long)assetIdentifiersCount;
- (void)clearAssetIdentifiers;

@end
