@class NSString;

@interface SVDCapability : NSObject <SVDCapabilityMatching, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCoder:(id)a0;
- (id)key;
- (id)_swiftBacking;
- (void)encodeWithCoder:(id)a0;
- (BOOL)matchesCapabilityDescriptions:(id)a0;

@end
