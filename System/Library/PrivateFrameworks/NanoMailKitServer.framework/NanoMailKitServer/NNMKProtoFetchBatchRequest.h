@class NSMutableArray;

@interface NNMKProtoFetchBatchRequest : PBRequest <NSCopying> {
    struct { unsigned char fullSyncVersion : 1; unsigned char wantsBatchedResponse : 1; } _has;
}

@property (nonatomic) BOOL hasFullSyncVersion;
@property (nonatomic) unsigned int fullSyncVersion;
@property (retain, nonatomic) NSMutableArray *fetchRequests;
@property (nonatomic) BOOL hasWantsBatchedResponse;
@property (nonatomic) BOOL wantsBatchedResponse;

+ (Class)fetchRequestType;

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
- (void)addFetchRequest:(id)a0;
- (void)clearFetchRequests;
- (id)fetchRequestAtIndex:(unsigned long long)a0;
- (unsigned long long)fetchRequestsCount;

@end
