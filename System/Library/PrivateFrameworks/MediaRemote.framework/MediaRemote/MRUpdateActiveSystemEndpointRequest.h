@class NSString, _MRUpdateActiveSystemEndpointRequestProtobuf;

@interface MRUpdateActiveSystemEndpointRequest : NSObject <NSCopying>

@property (copy, nonatomic) NSString *clientBundleIdentifier;
@property (nonatomic, getter=isPairedDeviceSync) BOOL pairedDeviceSync;
@property (readonly, nonatomic) _MRUpdateActiveSystemEndpointRequestProtobuf *protobuf;
@property (copy, nonatomic) NSString *outputDeviceUID;
@property (copy, nonatomic) NSString *reason;
@property (nonatomic) long long changeType;

- (id)initWithProtobuf:(id)a0;
- (void)perform:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)description;
- (id)initWithOutputDeviceUID:(id)a0 reason:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
