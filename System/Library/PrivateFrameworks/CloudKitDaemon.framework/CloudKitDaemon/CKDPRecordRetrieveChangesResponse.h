@class NSData, NSMutableArray;

@interface CKDPRecordRetrieveChangesResponse : PBCodable <NSCopying> {
    struct { unsigned char status : 1; unsigned char pendingArchivedRecords : 1; } _has;
}

@property (retain, nonatomic) NSMutableArray *changedRecords;
@property (readonly, nonatomic) BOOL hasSyncContinuationToken;
@property (retain, nonatomic) NSData *syncContinuationToken;
@property (readonly, nonatomic) BOOL hasClientChangeToken;
@property (retain, nonatomic) NSData *clientChangeToken;
@property (nonatomic) BOOL hasStatus;
@property (nonatomic) int status;
@property (retain, nonatomic) NSMutableArray *changedShares;
@property (nonatomic) BOOL hasPendingArchivedRecords;
@property (nonatomic) BOOL pendingArchivedRecords;
@property (retain, nonatomic) NSMutableArray *changedDeltas;
@property (retain, nonatomic) NSMutableArray *syncObligations;

+ (Class)changedDeltasType;
+ (Class)changedRecordType;
+ (Class)changedShareType;
+ (Class)syncObligationsType;

- (void)addChangedShare:(id)a0;
- (id)syncObligationsAtIndex:(unsigned long long)a0;
- (id)changedDeltasAtIndex:(unsigned long long)a0;
- (int)StringAsStatus:(id)a0;
- (void)mergeFrom:(id)a0;
- (void)clearChangedDeltas;
- (void)addChangedRecord:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (unsigned long long)changedSharesCount;
- (id)statusAsString:(int)a0;
- (unsigned long long)hash;
- (void)clearChangedShares;
- (void)writeTo:(id)a0;
- (unsigned long long)changedDeltasCount;
- (void)addChangedDeltas:(id)a0;
- (void)addSyncObligations:(id)a0;
- (id)changedShareAtIndex:(unsigned long long)a0;
- (unsigned long long)changedRecordsCount;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)syncObligationsCount;
- (id)changedRecordAtIndex:(unsigned long long)a0;
- (void)clearSyncObligations;
- (void)clearChangedRecords;

@end
