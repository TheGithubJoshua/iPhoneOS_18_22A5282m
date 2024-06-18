@class NSMutableArray;

@interface GEOPDPlaceSummaryLayoutLine : PBCodable <NSCopying> {
    NSMutableArray *_units;
    BOOL _isDynamicContextLine;
    BOOL _shouldOmitSpacingDelimiter;
    struct { unsigned char has_isDynamicContextLine : 1; unsigned char has_shouldOmitSpacingDelimiter : 1; } _flags;
}

@property (retain, nonatomic) NSMutableArray *units;
@property (nonatomic) BOOL hasIsDynamicContextLine;
@property (nonatomic) BOOL isDynamicContextLine;
@property (nonatomic) BOOL hasShouldOmitSpacingDelimiter;
@property (nonatomic) BOOL shouldOmitSpacingDelimiter;

+ (BOOL)isValid:(id)a0;
+ (Class)unitType;

- (id)initWithDictionary:(id)a0;
- (void)readAll:(BOOL)a0;
- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)hasGreenTeaWithValue:(BOOL)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)jsonRepresentation;
- (void)addUnit:(id)a0;
- (void)clearUnits;
- (id)unitAtIndex:(unsigned long long)a0;
- (unsigned long long)unitsCount;

@end
