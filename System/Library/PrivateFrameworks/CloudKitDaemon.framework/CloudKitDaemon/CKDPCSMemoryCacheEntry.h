@class CKDPCSData;

@interface CKDPCSMemoryCacheEntry : NSObject

@property (retain, nonatomic) CKDPCSData *pcsData;
@property double lastAccess;

- (id)init;
- (id)CKPropertiesDescription;
- (void).cxx_destruct;
- (id)description;

@end
