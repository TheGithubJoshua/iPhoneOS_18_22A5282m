@class NSMutableDictionary;

@interface PKCloudRecordArray : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSMutableDictionary *cloudRecordByDatabase;
@property (retain, nonatomic) NSMutableDictionary *reportItemsByAccountIdentifier;

- (id)initWithCoder:(id)a0;
- (id)init;
- (id)allItems;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)allRecordIDs;
- (id)allObjects;
- (long long)count;
- (id)_descriptionWithDetailedOutput:(BOOL)a0 includeItem:(BOOL)a1;
- (void)addCloudRecord:(id)a0 forContainerDatabaseIdentifier:(id)a1;
- (void)addTransactionSyncReportItem:(id)a0 forAccountIdentifier:(id)a1;
- (void)addTransactionSyncReportItems:(id)a0 forAccountIdentifier:(id)a1;
- (id)allObjectsByDatabaseIdentifier;
- (id)allRecordNames;
- (id)allRecordsWithRecordType:(id)a0;
- (void)applyCloudRecordArray:(id)a0;
- (id)descriptionWithItem:(BOOL)a0;
- (id)transactionSyncReportItemsByAccountIdentifier;

@end
