@interface PKGroupsControllerSnapshotFetchOptions : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL limitResults;
@property (nonatomic) BOOL includeAnnotations;
@property (nonatomic) unsigned long long allowedPassType;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
