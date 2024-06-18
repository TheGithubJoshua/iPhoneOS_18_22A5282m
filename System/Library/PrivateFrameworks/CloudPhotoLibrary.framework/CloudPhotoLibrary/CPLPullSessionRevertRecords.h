@class CPLChangeBatch;

@interface CPLPullSessionRevertRecords : CPLChangeSessionUpdate

@property (readonly, nonatomic) CPLChangeBatch *revertedChangesBatch;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (id)storageForStatusInStore:(id)a0;
- (BOOL)applyToStore:(id)a0 error:(id *)a1;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)discardFromStore:(id)a0 error:(id *)a1;
- (id)statusDescription;
- (id)initWithStore:(id)a0 revertedChangesBatch:(id)a1;

@end
