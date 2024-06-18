@class _MRDiscoverySessionConfigurationProtobuf, NSMutableArray;

@interface _MRDiscoveryUpdateEndpointsProtobufMessage : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *endpoints;
@property (readonly, nonatomic) BOOL hasConfiguration;
@property (retain, nonatomic) _MRDiscoverySessionConfigurationProtobuf *configuration;

+ (Class)endpointsType;

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
- (void)addEndpoints:(id)a0;
- (void)clearEndpoints;
- (id)endpointsAtIndex:(unsigned long long)a0;
- (unsigned long long)endpointsCount;

@end
