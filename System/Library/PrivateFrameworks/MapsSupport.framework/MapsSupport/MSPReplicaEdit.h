@class NSUUID;

@interface MSPReplicaEdit : NSObject <NSCopying>

@property (readonly, nonatomic) NSUUID *identifierOfAffectedRecord;

- (id)init;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithIdentifierOfAffectedRecord:(id)a0;

@end
