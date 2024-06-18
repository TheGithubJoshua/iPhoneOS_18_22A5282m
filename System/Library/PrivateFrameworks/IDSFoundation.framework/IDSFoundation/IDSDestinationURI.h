@class IDSURI;

@interface IDSDestinationURI : IDSDestination

@property (readonly, nonatomic) IDSURI *uri;

+ (BOOL)supportsSecureCoding;

- (id)destinationURIs;
- (id)initWithCoder:(id)a0;
- (id)destinationLightweightStatus;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithURI:(id)a0;
- (id)initWithURIString:(id)a0;

@end
