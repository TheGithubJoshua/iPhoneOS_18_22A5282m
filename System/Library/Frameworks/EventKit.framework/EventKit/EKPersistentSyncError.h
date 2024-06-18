@interface EKPersistentSyncError : EKPersistentObject

+ (id)relations;
+ (Class)meltedClass;

- (int)entityType;
- (void)setErrorCode:(int)a0;
- (void)setUserInfoData:(id)a0;
- (int)errorCode;
- (id)userInfoData;
- (int)errorType;
- (void)setErrorType:(int)a0;

@end
