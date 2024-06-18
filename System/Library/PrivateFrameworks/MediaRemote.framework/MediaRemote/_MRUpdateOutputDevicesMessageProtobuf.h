@class NSString, NSMutableArray;

@interface _MRUpdateOutputDevicesMessageProtobuf : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *outputDevices;
@property (readonly, nonatomic) BOOL hasEndpointUID;
@property (retain, nonatomic) NSString *endpointUID;
@property (retain, nonatomic) NSMutableArray *clusterAwareOutputDevices;

+ (Class)outputDevicesType;
+ (Class)clusterAwareOutputDevicesType;

- (void)clearOutputDevices;
- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)outputDevicesAtIndex:(unsigned long long)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)outputDevicesCount;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addOutputDevices:(id)a0;
- (void)addClusterAwareOutputDevices:(id)a0;
- (void)clearClusterAwareOutputDevices;
- (id)clusterAwareOutputDevicesAtIndex:(unsigned long long)a0;
- (unsigned long long)clusterAwareOutputDevicesCount;

@end
