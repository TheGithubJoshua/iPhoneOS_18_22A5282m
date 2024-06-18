@interface AWDWiFiMetricRssiHistory : PBCodable <NSCopying> {
    struct { int *list; unsigned long long count; unsigned long long size; } _bcnFrmsHistorys;
    struct { int *list; unsigned long long count; unsigned long long size; } _bcnPerHistorys;
    struct { int *list; unsigned long long count; unsigned long long size; } _fwTxFrmsHistorys;
    struct { int *list; unsigned long long count; unsigned long long size; } _fwTxPerHistorys;
    struct { int *list; unsigned long long count; unsigned long long size; } _rssiHistorys;
    struct { int *list; unsigned long long count; unsigned long long size; } _txFrmsHistorys;
    struct { int *list; unsigned long long count; unsigned long long size; } _txPerHistorys;
    struct { unsigned char timestamp : 1; unsigned char gatewayARPHistory : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) unsigned long long rssiHistorysCount;
@property (readonly, nonatomic) int *rssiHistorys;
@property (readonly, nonatomic) unsigned long long txPerHistorysCount;
@property (readonly, nonatomic) int *txPerHistorys;
@property (readonly, nonatomic) unsigned long long txFrmsHistorysCount;
@property (readonly, nonatomic) int *txFrmsHistorys;
@property (readonly, nonatomic) unsigned long long fwTxPerHistorysCount;
@property (readonly, nonatomic) int *fwTxPerHistorys;
@property (readonly, nonatomic) unsigned long long fwTxFrmsHistorysCount;
@property (readonly, nonatomic) int *fwTxFrmsHistorys;
@property (readonly, nonatomic) unsigned long long bcnPerHistorysCount;
@property (readonly, nonatomic) int *bcnPerHistorys;
@property (readonly, nonatomic) unsigned long long bcnFrmsHistorysCount;
@property (readonly, nonatomic) int *bcnFrmsHistorys;
@property (nonatomic) BOOL hasGatewayARPHistory;
@property (nonatomic) unsigned int gatewayARPHistory;

- (int)fwTxFrmsHistoryAtIndex:(unsigned long long)a0;
- (int)txPerHistoryAtIndex:(unsigned long long)a0;
- (int)txFrmsHistoryAtIndex:(unsigned long long)a0;
- (void)setBcnPerHistorys:(int *)a0 count:(unsigned long long)a1;
- (void)clearFwTxFrmsHistorys;
- (void)addFwTxFrmsHistory:(int)a0;
- (void)clearBcnFrmsHistorys;
- (void)setRssiHistorys:(int *)a0 count:(unsigned long long)a1;
- (void)addTxFrmsHistory:(int)a0;
- (void)clearTxFrmsHistorys;
- (void)addFwTxPerHistory:(int)a0;
- (void)setTxFrmsHistorys:(int *)a0 count:(unsigned long long)a1;
- (void)setBcnFrmsHistorys:(int *)a0 count:(unsigned long long)a1;
- (void)clearTxPerHistorys;
- (void)setFwTxPerHistorys:(int *)a0 count:(unsigned long long)a1;
- (int)bcnFrmsHistoryAtIndex:(unsigned long long)a0;
- (void)addRssiHistory:(int)a0;
- (void)addTxPerHistory:(int)a0;
- (void)addBcnFrmsHistory:(int)a0;
- (int)fwTxPerHistoryAtIndex:(unsigned long long)a0;
- (int)rssiHistoryAtIndex:(unsigned long long)a0;
- (void)setFwTxFrmsHistorys:(int *)a0 count:(unsigned long long)a1;
- (void)clearRssiHistorys;
- (void)clearFwTxPerHistorys;
- (void)setTxPerHistorys:(int *)a0 count:(unsigned long long)a1;
- (void)addBcnPerHistory:(int)a0;
- (void)clearBcnPerHistorys;
- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (int)bcnPerHistoryAtIndex:(unsigned long long)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;

@end