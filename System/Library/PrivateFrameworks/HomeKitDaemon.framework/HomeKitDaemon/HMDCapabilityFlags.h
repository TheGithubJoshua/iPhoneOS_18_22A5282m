@class NSData;

@interface HMDCapabilityFlags : HMFObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSData *bytesData;

+ (id)shortDescription;

- (BOOL)hasCapabilities:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCapabilities:(id)a0;
- (id)initWithData:(id)a0;
- (id)initWithCapabilityOptions:(unsigned long long)a0;

@end
