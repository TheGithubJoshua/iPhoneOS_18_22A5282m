@class NSArray, NSDictionary;

@interface CKFetchRecordZoneChangesOperationInfo : CKDatabaseOperationInfo <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *recordZoneIDs;
@property (retain, nonatomic) NSDictionary *configurationsByRecordZoneID;
@property (nonatomic) BOOL shouldFetchAssetContents;
@property (nonatomic) long long changeTypes;
@property (nonatomic) BOOL fetchAllChanges;
@property (retain, nonatomic) NSDictionary *assetTransferOptionsByRecordTypeAndKey;
@property (retain, nonatomic) NSDictionary *supplementalChangeTokenByZoneID;
@property (nonatomic) long long errorReportingStyle;
@property (nonatomic) BOOL forcePCSDecryptionAttempt;

- (id)initWithCoder:(id)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
