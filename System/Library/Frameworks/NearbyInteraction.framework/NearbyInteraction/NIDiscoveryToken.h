@class NSData, NSNumber;

@interface NIDiscoveryToken : NSObject <NSCopying, NSSecureCoding> {
    NSNumber *_shortDeviceAddress;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSData *rawToken;

- (id)initWithCoder:(id)a0;
- (id)descriptionInternal;
- (id)initWithBytes:(id)a0;
- (unsigned long long)hash;
- (id)shortDeviceAddress;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)initWithDeviceAddress:(unsigned short)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
