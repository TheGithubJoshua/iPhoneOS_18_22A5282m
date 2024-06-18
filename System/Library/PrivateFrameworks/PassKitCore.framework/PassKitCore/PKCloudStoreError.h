@interface PKCloudStoreError : NSError

+ (id)errorWithDomain:(id)a0 code:(long long)a1 userInfo:(id)a2;
+ (BOOL)_isCloudKitErrorDomain:(id)a0;

- (id)allZoneIDs;
- (id)initWithError:(id)a0;
- (id)initWithDomain:(id)a0 code:(long long)a1 userInfo:(id)a2;
- (long long)_code;
- (id)errorForPartialErrorWithObject:(id)a0;
- (id)_allPartialErrors;
- (id)_objectsOfClassTypeFromPartialErrors:(Class)a0;
- (id)_partialErrorsDictionary;
- (BOOL)isAccountUnavailable;
- (BOOL)isAuthenticationOrQuotaError;
- (BOOL)isChangeTokenExpired;
- (BOOL)isInitializationTimeOutError;
- (BOOL)isKeychainSyncingInProgress;
- (BOOL)isManateeNotAvailableError;
- (BOOL)isNetworkUnavailable;
- (BOOL)isPCSError;
- (BOOL)isPartialError;
- (BOOL)isParticipantMayNeedVerificationError;
- (BOOL)isUnknownItemError;
- (BOOL)isUnrecoverableDecryptionError;
- (BOOL)isZoneNotFoundError;

@end
