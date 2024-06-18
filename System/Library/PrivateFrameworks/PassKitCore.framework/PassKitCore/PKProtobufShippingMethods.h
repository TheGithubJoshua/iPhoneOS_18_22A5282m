@class NSMutableArray, PKProtobufShippingMethod;

@interface PKProtobufShippingMethods : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *methods;
@property (readonly, nonatomic) BOOL hasDefaultMethod;
@property (retain, nonatomic) PKProtobufShippingMethod *defaultMethod;

+ (Class)methodsType;

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
- (id)methodsAtIndex:(unsigned long long)a0;
- (void)addMethods:(id)a0;
- (void)clearMethods;
- (unsigned long long)methodsCount;

@end
