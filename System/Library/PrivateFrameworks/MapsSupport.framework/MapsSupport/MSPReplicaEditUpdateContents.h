@class NSData, MSPVectorTimestamp;

@interface MSPReplicaEditUpdateContents : MSPReplicaEdit

@property (readonly, nonatomic) NSData *contents;
@property (readonly, nonatomic) MSPVectorTimestamp *contentsTimestamp;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)_initToMoveRecordWithIdentifier:(id)a0 toContents:(id)a1 contentsTimestamp:(id)a2;
- (id)_initToTurnIntoTombstoneRecordWithIdentifier:(id)a0;
- (id)_initWithIdentifierOfAffectedRecord:(id)a0;

@end
