@class NSDictionary, NSArray;

@interface CKFetchShareParticipantKeyOperationInfo : CKDatabaseOperationInfo <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSDictionary *baseTokensByShareID;
@property (retain, nonatomic) NSDictionary *childRecordIDsByShareID;
@property (retain, nonatomic) NSArray *shareIDs;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
