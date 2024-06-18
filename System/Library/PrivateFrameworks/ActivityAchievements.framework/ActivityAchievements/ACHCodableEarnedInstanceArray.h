@class NSMutableArray;

@interface ACHCodableEarnedInstanceArray : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *earnedInstances;

+ (Class)earnedInstancesType;

- (void)clearEarnedInstances;
- (void)addEarnedInstances:(id)a0;
- (unsigned long long)earnedInstancesCount;
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
- (id)earnedInstancesAtIndex:(unsigned long long)a0;
- (id)initWithSerializedData:(id)a0 error:(id *)a1;
- (id)initWithCodableEarnedInstances:(id)a0;

@end
