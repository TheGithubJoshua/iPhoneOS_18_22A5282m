@class NSSet, MBCellularAccess;

@interface MBStartRestoreOptions : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSSet *excludedAppBundleIDs;
@property (copy, nonatomic) MBCellularAccess *cellularAccess;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
