@protocol MSPReplicaRecord;

@interface MSPReplicaEditInsertRecord : MSPReplicaEdit

@property (readonly, nonatomic) id<MSPReplicaRecord> recordWithInformationToInsert;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)_initWithIdentifierOfAffectedRecord:(id)a0;
- (id)_initWithRecordToInsert:(id)a0 identifier:(id)a1;

@end
