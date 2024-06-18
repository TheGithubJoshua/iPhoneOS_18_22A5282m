@class HDSyncIdentityEntity, HDSyncIdentity;

@interface HDConcreteSyncIdentity : NSObject <NSCopying>

@property (readonly, copy, nonatomic) HDSyncIdentity *identity;
@property (readonly, copy, nonatomic) HDSyncIdentityEntity *entity;

+ (id)new;

- (id)init;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
