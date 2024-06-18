@class CKDMarkAssetBrokenURLRequest;

@interface CKDMarkAssetBrokenURLRequestWrapperOperation : CKDOperation

@property (retain, nonatomic) CKDMarkAssetBrokenURLRequest *urlRequest;

- (void)main;
- (int)operationType;
- (id)activityCreate;
- (BOOL)shouldCheckAppVersion;
- (void).cxx_destruct;

@end
