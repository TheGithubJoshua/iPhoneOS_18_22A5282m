@class NSMutableSet;

@interface _BRCUploadInfo : _BRCTransferInfo

@property (readonly, nonatomic) NSMutableSet *outOfQuotaObjIDs;
@property (readonly, nonatomic) BOOL allUploadsPendingQuota;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (void)copyProgressInfoToProgress:(id)a0 options:(char)a1;
- (void)updateLocalizedDescriptionWithOptions:(char)a0;

@end
