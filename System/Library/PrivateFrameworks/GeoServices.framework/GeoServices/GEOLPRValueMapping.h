@class NSMutableArray, PBDataReader;

@interface GEOLPRValueMapping : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSMutableArray *_mappedValues;
    NSMutableArray *_timeConditions;
    NSMutableArray *_values;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_mappedValues : 1; unsigned char read_timeConditions : 1; unsigned char read_values : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (retain, nonatomic) NSMutableArray *values;
@property (retain, nonatomic) NSMutableArray *mappedValues;
@property (retain, nonatomic) NSMutableArray *timeConditions;

+ (BOOL)isValid:(id)a0;
+ (Class)valueType;
+ (Class)mappedValueType;
+ (Class)timeConditionsType;

- (id)init;
- (id)initWithDictionary:(id)a0;
- (void)addValue:(id)a0;
- (void)readAll:(BOOL)a0;
- (void)mergeFrom:(id)a0;
- (id)valueAtIndex:(unsigned long long)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (unsigned long long)valuesCount;
- (void)clearValues;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithData:(id)a0;
- (id)jsonRepresentation;
- (void)addMappedValue:(id)a0;
- (void)addTimeConditions:(id)a0;
- (void)clearMappedValues;
- (void)clearTimeConditions;
- (id)mappedValueAtIndex:(unsigned long long)a0;
- (unsigned long long)mappedValuesCount;
- (id)timeConditionsAtIndex:(unsigned long long)a0;
- (unsigned long long)timeConditionsCount;

@end
