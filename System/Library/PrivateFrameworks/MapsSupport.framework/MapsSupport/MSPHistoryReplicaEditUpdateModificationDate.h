@class NSDate;

@interface MSPHistoryReplicaEditUpdateModificationDate : MSPReplicaEditRemoveTombstone

@property (readonly, nonatomic) NSDate *modificationDate;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)_initToMoveRecordWithIdentifier:(id)a0 toModificationDate:(id)a1;
- (id)_initWithIdentifierOfAffectedRecord:(id)a0;

@end
