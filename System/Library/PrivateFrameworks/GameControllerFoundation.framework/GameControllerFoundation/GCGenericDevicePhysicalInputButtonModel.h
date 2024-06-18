@interface GCGenericDevicePhysicalInputButtonModel : GCGenericDevicePhysicalInputElementModel

@property (readonly) long long sourceExtendedEventFieldIndex;

+ (BOOL)supportsSecureCoding;
+ (id)description;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;

@end
