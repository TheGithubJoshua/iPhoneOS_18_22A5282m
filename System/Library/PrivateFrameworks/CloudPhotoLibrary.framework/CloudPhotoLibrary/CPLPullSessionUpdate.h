@class CPLChangeBatch;

@interface CPLPullSessionUpdate : CPLChangeSessionUpdate

@property (readonly, nonatomic) CPLChangeBatch *clientBatch;
@property (readonly, nonatomic) CPLChangeBatch *cloudBatch;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (id)storageForStatusInStore:(id)a0;
- (BOOL)applyToStore:(id)a0 error:(id *)a1;
- (void)encodeWithCoder:(id)a0;
- (id)pendingRecordChangeForClientCacheWithLocalScopedIdentifier:(id)a0;
- (void).cxx_destruct;
- (BOOL)discardFromStore:(id)a0 error:(id *)a1;
- (id)statusDescription;
- (id)initWithStore:(id)a0 expandedClientBatch:(id)a1 expandedCloudBatch:(id)a2;

@end
