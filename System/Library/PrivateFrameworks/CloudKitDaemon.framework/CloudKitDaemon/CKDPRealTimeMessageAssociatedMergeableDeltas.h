@class CKDPRecordIdentifier, CKDPRecordFieldIdentifier, NSMutableArray, CKDPMergeableValueIdentifier;

@interface CKDPRealTimeMessageAssociatedMergeableDeltas : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasRecordIdentifier;
@property (retain, nonatomic) CKDPRecordIdentifier *recordIdentifier;
@property (readonly, nonatomic) BOOL hasFieldIdentifier;
@property (retain, nonatomic) CKDPRecordFieldIdentifier *fieldIdentifier;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (retain, nonatomic) CKDPMergeableValueIdentifier *identifier;
@property (retain, nonatomic) NSMutableArray *mergeableDeltas;

+ (Class)mergeableDeltasType;

- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addMergeableDeltas:(id)a0;
- (void)clearMergeableDeltas;
- (id)mergeableDeltasAtIndex:(unsigned long long)a0;
- (unsigned long long)mergeableDeltasCount;

@end
