@class CKDAssetTokenRequest, NSArray, NSDictionary, NSData, NSMutableArray, CKDAssetZone;

@interface CKDAssetBatch : NSObject

@property (retain, nonatomic) NSMutableArray *assetRecords;
@property (retain, nonatomic) CKDAssetZone *assetZone;
@property (retain, nonatomic) NSData *authPutRequest;
@property (retain, nonatomic) NSData *authPutResponse;
@property (retain, nonatomic) NSDictionary *authPutResponseHeaders;
@property (nonatomic) BOOL isFailed;
@property (weak, nonatomic) CKDAssetTokenRequest *assetTokenRequest;
@property (readonly) unsigned int sizeUpperBound;
@property (readonly) unsigned int size;
@property (readonly, nonatomic) NSArray *allMMCSItems;
@property (readonly, nonatomic) NSArray *allMMCSSectionItems;
@property (readonly, nonatomic) NSArray *allRereferenceMMCSItems;
@property (nonatomic) BOOL useMMCSEncryptionV2;
@property (readonly, nonatomic) NSArray *allRegularAndSectionAndRereferenceItems;

- (BOOL)isRereferenceAssetBatch;
- (BOOL)isPackageSectionBatch;
- (BOOL)isEmptyOfAssets;
- (id)CKPropertiesDescription;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEmptyOfRereferencesAssets;
- (id)initWithAssetZone:(id)a0;
- (id)firstMMCSItemError;
- (id)allMMCSAndSectionItems;
- (void)failIfNotDoneAllRegularAndSectionAndRereferenceItemsWithError:(id)a0;
- (void)addAssetRecord:(id)a0;

@end
