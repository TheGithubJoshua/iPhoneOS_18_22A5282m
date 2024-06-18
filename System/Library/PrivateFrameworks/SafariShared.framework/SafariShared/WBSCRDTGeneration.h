@class NSString;

@interface WBSCRDTGeneration : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *deviceIdentifier;
@property (readonly, nonatomic) unsigned long long generation;
@property (readonly, nonatomic) BOOL isValid;

- (id)initWithCoder:(id)a0;
- (id)init;
- (long long)compare:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDeviceIdentifier:(id)a0 generation:(unsigned long long)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)incrementedGenerationWithDeviceIdentifier:(id)a0;

@end
