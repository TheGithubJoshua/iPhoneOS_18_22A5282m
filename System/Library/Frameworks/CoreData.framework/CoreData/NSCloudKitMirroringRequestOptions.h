@class CKOperationConfiguration;

@interface NSCloudKitMirroringRequestOptions : NSObject <NSCopying>

@property (retain, nonatomic) CKOperationConfiguration *operationConfiguration;
@property (nonatomic) long long qualityOfService;
@property (nonatomic) BOOL allowsCellularAccess;

- (id)init;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;

@end
