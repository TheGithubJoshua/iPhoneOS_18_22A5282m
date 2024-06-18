@class NSString, NSSet;

@interface HRSSupportedFHIRRelease : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *FHIRRelease;
@property (readonly, copy, nonatomic) NSSet *resourceTypes;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithFHIRRelease:(id)a0 resourceTypes:(id)a1;

@end
