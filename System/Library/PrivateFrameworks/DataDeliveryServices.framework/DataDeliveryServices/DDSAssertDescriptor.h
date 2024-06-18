@class NSString, DDSAssetPolicy;

@interface DDSAssertDescriptor : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *clientIdentifier;
@property (retain, nonatomic) NSString *assertionIdentifier;
@property (retain, nonatomic) DDSAssetPolicy *policy;

- (id)initWithCoder:(id)a0;
- (id)init;
- (id)dumpDescription;
- (BOOL)isEqualToDescriptor:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)initWithPolicy:(id)a0 assertionID:(id)a1 clientID:(id)a2;

@end
