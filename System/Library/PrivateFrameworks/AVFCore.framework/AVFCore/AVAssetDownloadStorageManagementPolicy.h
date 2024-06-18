@class NSString, AVAssetDownloadStorageManagementPolicyInternal, NSDate;

@interface AVAssetDownloadStorageManagementPolicy : NSObject <NSCopying, NSMutableCopying> {
    AVAssetDownloadStorageManagementPolicyInternal *_storageManagementPolicy;
}

@property (readonly, copy, nonatomic) NSString *priority;
@property (readonly, copy, nonatomic) NSDate *expirationDate;

- (void)setPriority:(id)a0;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (void)setExpirationDate:(id)a0;
- (id)_policyDictionary;
- (void)_setPolicyDictionary:(id)a0;

@end
