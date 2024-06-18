@class NSMutableArray;

@interface ADOdmlResponseV2 : PBCodable <NSCopying> {
    struct { unsigned char odmlEnabled : 1; } _has;
}

@property (nonatomic) BOOL hasOdmlEnabled;
@property (nonatomic) BOOL odmlEnabled;
@property (retain, nonatomic) NSMutableArray *features;

+ (Class)featuresType;

- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)clearFeatures;
- (unsigned long long)featuresCount;
- (id)featuresAtIndex:(unsigned long long)a0;
- (void)addFeatures:(id)a0;

@end
