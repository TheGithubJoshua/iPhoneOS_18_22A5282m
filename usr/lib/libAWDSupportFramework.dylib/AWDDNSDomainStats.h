@class NSString;

@interface AWDDNSDomainStats : PBCodable <NSCopying> {
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _answeredQuerySendCounts;
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _dnsOverTCPStates;
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _expiredAnswerStates;
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _negAnsweredQuerySendCounts;
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _negResponseLatencyMs;
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _responseLatencyMs;
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _unansweredQueryDurationMs;
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _unansweredQuerySendCounts;
    struct { unsigned char networkType : 1; unsigned char recordType : 1; } _has;
}

@property (nonatomic) BOOL hasNetworkType;
@property (nonatomic) int networkType;
@property (readonly, nonatomic) BOOL hasDomain;
@property (retain, nonatomic) NSString *domain;
@property (readonly, nonatomic) unsigned long long answeredQuerySendCountsCount;
@property (readonly, nonatomic) unsigned int *answeredQuerySendCounts;
@property (readonly, nonatomic) unsigned long long unansweredQuerySendCountsCount;
@property (readonly, nonatomic) unsigned int *unansweredQuerySendCounts;
@property (readonly, nonatomic) unsigned long long responseLatencyMsCount;
@property (readonly, nonatomic) unsigned int *responseLatencyMs;
@property (nonatomic) BOOL hasRecordType;
@property (nonatomic) int recordType;
@property (readonly, nonatomic) unsigned long long negAnsweredQuerySendCountsCount;
@property (readonly, nonatomic) unsigned int *negAnsweredQuerySendCounts;
@property (readonly, nonatomic) unsigned long long negResponseLatencyMsCount;
@property (readonly, nonatomic) unsigned int *negResponseLatencyMs;
@property (readonly, nonatomic) unsigned long long unansweredQueryDurationMsCount;
@property (readonly, nonatomic) unsigned int *unansweredQueryDurationMs;
@property (readonly, nonatomic) unsigned long long expiredAnswerStatesCount;
@property (readonly, nonatomic) unsigned int *expiredAnswerStates;
@property (readonly, nonatomic) unsigned long long dnsOverTCPStatesCount;
@property (readonly, nonatomic) unsigned int *dnsOverTCPStates;

- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (int)StringAsNetworkType:(id)a0;
- (id)networkTypeAsString:(int)a0;
- (int)StringAsRecordType:(id)a0;
- (void)clearNegAnsweredQuerySendCounts;
- (void)addAnsweredQuerySendCount:(unsigned int)a0;
- (void)addDnsOverTCPState:(unsigned int)a0;
- (void)addExpiredAnswerState:(unsigned int)a0;
- (void)addNegAnsweredQuerySendCount:(unsigned int)a0;
- (void)addNegResponseLatencyMs:(unsigned int)a0;
- (void)addResponseLatencyMs:(unsigned int)a0;
- (void)addUnansweredQueryDurationMs:(unsigned int)a0;
- (void)addUnansweredQuerySendCount:(unsigned int)a0;
- (unsigned int)answeredQuerySendCountAtIndex:(unsigned long long)a0;
- (void)clearAnsweredQuerySendCounts;
- (void)clearDnsOverTCPStates;
- (void)clearExpiredAnswerStates;
- (void)clearNegResponseLatencyMs;
- (void)clearResponseLatencyMs;
- (void)clearUnansweredQueryDurationMs;
- (void)clearUnansweredQuerySendCounts;
- (unsigned int)dnsOverTCPStateAtIndex:(unsigned long long)a0;
- (unsigned int)expiredAnswerStateAtIndex:(unsigned long long)a0;
- (unsigned int)negAnsweredQuerySendCountAtIndex:(unsigned long long)a0;
- (unsigned int)negResponseLatencyMsAtIndex:(unsigned long long)a0;
- (id)recordTypeAsString:(int)a0;
- (unsigned int)responseLatencyMsAtIndex:(unsigned long long)a0;
- (void)setAnsweredQuerySendCounts:(unsigned int *)a0 count:(unsigned long long)a1;
- (void)setDnsOverTCPStates:(unsigned int *)a0 count:(unsigned long long)a1;
- (void)setExpiredAnswerStates:(unsigned int *)a0 count:(unsigned long long)a1;
- (void)setNegAnsweredQuerySendCounts:(unsigned int *)a0 count:(unsigned long long)a1;
- (void)setNegResponseLatencyMs:(unsigned int *)a0 count:(unsigned long long)a1;
- (void)setResponseLatencyMs:(unsigned int *)a0 count:(unsigned long long)a1;
- (void)setUnansweredQueryDurationMs:(unsigned int *)a0 count:(unsigned long long)a1;
- (void)setUnansweredQuerySendCounts:(unsigned int *)a0 count:(unsigned long long)a1;
- (unsigned int)unansweredQueryDurationMsAtIndex:(unsigned long long)a0;
- (unsigned int)unansweredQuerySendCountAtIndex:(unsigned long long)a0;

@end