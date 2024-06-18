@class CKDPMergeableValueIdentifier, NSMutableArray;

@interface CKDPMergeableDeltaReplaceRequest : PBRequest <NSCopying> {
    struct { unsigned char containsNewData : 1; unsigned char ignoreMissingDeltas : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasIdentifier;
@property (retain, nonatomic) CKDPMergeableValueIdentifier *identifier;
@property (retain, nonatomic) NSMutableArray *deltaIdentifiers;
@property (retain, nonatomic) NSMutableArray *deltas;
@property (nonatomic) BOOL hasIgnoreMissingDeltas;
@property (nonatomic) BOOL ignoreMissingDeltas;
@property (nonatomic) BOOL hasContainsNewData;
@property (nonatomic) BOOL containsNewData;

+ (id)options;
+ (Class)deltaIdentifiersType;
+ (Class)deltasType;

- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (Class)responseClass;
- (unsigned int)requestTypeCode;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addDeltaIdentifiers:(id)a0;
- (void)addDeltas:(id)a0;
- (void)clearDeltaIdentifiers;
- (void)clearDeltas;
- (id)deltaIdentifiersAtIndex:(unsigned long long)a0;
- (unsigned long long)deltaIdentifiersCount;
- (id)deltasAtIndex:(unsigned long long)a0;
- (unsigned long long)deltasCount;

@end
