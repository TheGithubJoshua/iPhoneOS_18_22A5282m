@class NSString, NSSet;

@interface PKPaymentTransactionArchive : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *transactionIdentifier;
@property (copy, nonatomic) NSSet *locations;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)allArchiveLocationsWithType:(unsigned long long)a0 areArchived:(BOOL)a1;
- (id)archiveLocationMatchingLocation:(id)a0;
- (id)archiveLocationsWithCloudStoreZone:(id)a0 isArchived:(BOOL)a1;
- (id)archiveLocationsWithType:(unsigned long long)a0 isArchived:(BOOL)a1;
- (void)insertOrUpdateArchiveLocationWithCloudStoreZone:(id)a0 isArchived:(BOOL)a1 insertionMode:(unsigned long long)a2;
- (BOOL)isEqualToArchive:(id)a0;
- (void)updateArchiveLocationsWithType:(unsigned long long)a0 isArchived:(BOOL)a1;
- (void)updateTransactionArchiveLocationsWithArchive:(id)a0 type:(unsigned long long)a1 archived:(BOOL)a2;

@end
