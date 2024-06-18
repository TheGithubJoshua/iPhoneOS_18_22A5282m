@class NSString, NSArray;

@interface HKCloudSyncDatabaseDescription : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *scope;
@property (readonly, copy, nonatomic) NSArray *zoneDescriptions;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithScope:(id)a0 zoneDescriptions:(id)a1;

@end
