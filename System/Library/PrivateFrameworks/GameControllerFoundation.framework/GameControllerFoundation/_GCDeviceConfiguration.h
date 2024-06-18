@class NSDictionary, NSArray;
@protocol NSObject, NSSecureCoding, NSCopying;

@interface _GCDeviceConfiguration : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDictionary *attributes;
@property (readonly, copy) id<NSObject, NSCopying, NSSecureCoding> identifier;
@property (readonly) unsigned long long priority;
@property (readonly, getter=isTransient) BOOL transient;
@property (readonly, copy) id<NSObject, NSCopying, NSSecureCoding> deviceIdentifier;
@property (readonly, copy) NSArray *deviceDependencies;
@property (readonly, copy) id<NSObject, NSCopying, NSSecureCoding> deviceBuilderIdentifier;

+ (id)configurationWithIdentifier:(id)a0 priority:(unsigned long long)a1 deviceIdentifier:(id)a2 deviceDependencies:(id)a3 deviceBuilder:(id)a4;

- (id)initWithCoder:(id)a0;
- (id)init;
- (id)redactedDescription;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToConfiguration:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)valueForAttribute:(id)a0;
- (id)_initWithIdentifier:(id)a0 attributes:(id)a1;

@end
