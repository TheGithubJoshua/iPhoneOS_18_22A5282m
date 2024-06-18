@class SIRINLUEXTERNALRRBoundingBox, NSMutableArray;

@interface SIRINLUEXTERNALRRMetadata : PBCodable <NSCopying> {
    struct { unsigned char dataSource : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasBoundingBox;
@property (retain, nonatomic) SIRINLUEXTERNALRRBoundingBox *boundingBox;
@property (retain, nonatomic) NSMutableArray *surroundingTexts;
@property (nonatomic) BOOL hasDataSource;
@property (nonatomic) int dataSource;

+ (Class)surroundingTextsType;

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
- (int)StringAsDataSource:(id)a0;
- (void)addSurroundingTexts:(id)a0;
- (void)clearSurroundingTexts;
- (id)dataSourceAsString:(int)a0;
- (id)surroundingTextsAtIndex:(unsigned long long)a0;
- (unsigned long long)surroundingTextsCount;

@end
