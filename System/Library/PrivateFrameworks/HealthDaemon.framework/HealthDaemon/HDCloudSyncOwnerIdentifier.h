@class NSString, NSUUID;

@interface HDCloudSyncOwnerIdentifier : NSObject <NSCopying> {
    NSString *_deviceIdentifier;
    NSUUID *_databaseIdentifier;
    NSString *_ownerDifferentiator;
    NSString *_ownerIdentifierString;
}

@property (readonly, nonatomic) NSString *string;
@property (readonly, nonatomic) NSString *cloudKitIdentifier;

+ (id)unitTest_ownerIdentifierWithDatabaseIdentifer:(id)a0 deviceIdentifier:(id)a1 ownerDifferentiator:(id)a2;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithDatabaseIdentifer:(id)a0 deviceIdentifier:(id)a1 ownerDifferentiator:(id)a2;

@end
