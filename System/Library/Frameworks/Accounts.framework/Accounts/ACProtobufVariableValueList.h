@class NSArray, NSSet, NSMutableArray;

@interface ACProtobufVariableValueList : PBCodable <NSCopying>

@property (copy, nonatomic) NSArray *array;
@property (copy, nonatomic) NSSet *set;
@property (retain, nonatomic) NSMutableArray *values;

+ (Class)valueType;

- (void)addValue:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)valueAtIndex:(unsigned long long)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (id)initWithArray:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)initWithSet:(id)a0;
- (unsigned long long)valuesCount;
- (void)clearValues;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_convertArray:(id)a0;

@end
