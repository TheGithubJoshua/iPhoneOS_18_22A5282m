@class MSPPosition, MSPVectorTimestamp;

@interface MSPOrderedReplicaEditUpdatePosition : MSPReplicaEdit

@property (readonly, nonatomic) MSPPosition *position;
@property (readonly, nonatomic) MSPVectorTimestamp *positionTimestamp;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)_initToMoveRecordWithIdentifier:(id)a0 toPosition:(id)a1 positionTimestamp:(id)a2;
- (id)_initWithIdentifierOfAffectedRecord:(id)a0;

@end
