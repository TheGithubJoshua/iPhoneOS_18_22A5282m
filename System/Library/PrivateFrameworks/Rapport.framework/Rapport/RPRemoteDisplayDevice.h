@class NSString, NSDictionary;

@interface RPRemoteDisplayDevice : RPEndpoint <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *persistentIdentifier;
@property (copy) NSDictionary *cameraCapabilities;
@property (readonly, nonatomic) unsigned int flags;

- (id)descriptionWithLevel:(int)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (unsigned int)updateWithEndpoint:(id)a0;

@end
