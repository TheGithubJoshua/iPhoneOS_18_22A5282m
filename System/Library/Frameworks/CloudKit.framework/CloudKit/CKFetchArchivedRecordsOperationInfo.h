@class NSArray, NSDictionary;

@interface CKFetchArchivedRecordsOperationInfo : CKDatabaseOperationInfo <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *recordZoneIDs;
@property (retain, nonatomic) NSDictionary *configurationsByRecordZoneID;
@property (nonatomic) BOOL shouldFetchAssetContents;
@property (nonatomic) BOOL fetchAllChanges;
@property (retain, nonatomic) NSDictionary *assetTransferOptionsByRecordTypeAndKey;

- (id)initWithCoder:(id)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
