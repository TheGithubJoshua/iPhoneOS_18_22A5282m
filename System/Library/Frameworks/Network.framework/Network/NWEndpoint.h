@class NSString, NWInterface, NSData, NSObject;
@protocol OS_nw_endpoint;

@interface NWEndpoint : NSObject <NWPrettyDescription, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSObject<OS_nw_endpoint> *internalEndpoint;
@property (retain, nonatomic) NWInterface *interface;
@property (readonly, nonatomic) NSString *parentEndpointDomain;
@property (readonly, copy, nonatomic) NSString *privateDescription;
@property (nonatomic) unsigned short alternatePort;
@property (nonatomic) long long remoteInterfaceType;
@property (retain, nonatomic) NSData *txtRecord;

+ (unsigned int)endpointType;
+ (BOOL)supportsResolverCallback;
+ (id)endpointWithProtocolBufferData:(id)a0;
+ (Class)copyClassForEndpointType:(int)a0;
+ (id)endpointWithCEndpoint:(id)a0;
+ (id)endpointWithInternalEndpoint:(id)a0;

- (id)descriptionWithIndent:(int)a0 showFullContent:(BOOL)a1;
- (id)initWithCoder:(id)a0;
- (id)encodedData;
- (id)createProtocolBufferObject;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithEndpoint:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copyCEndpoint;
- (id)initWithEncodedData:(id)a0;
- (void)resolveEndpointWithCompletionHandler:(id /* block */)a0;

@end
