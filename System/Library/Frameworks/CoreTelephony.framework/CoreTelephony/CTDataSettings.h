@interface CTDataSettings : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic, getter=isCellularDataEnabled) BOOL cellularDataEnabled;
@property (nonatomic, getter=isAirplaneModeEnabled) BOOL airplaneModeEnabled;
@property (nonatomic, getter=isCellularDataCapable) BOOL cellularDataCapable;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
