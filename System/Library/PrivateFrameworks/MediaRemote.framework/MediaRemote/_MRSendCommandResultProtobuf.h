@class NSString, _MRNowPlayingPlayerPathProtobuf, NSMutableArray;

@interface _MRSendCommandResultProtobuf : PBCodable <NSCopying> {
    struct { unsigned char sendError : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasPlayerPath;
@property (retain, nonatomic) _MRNowPlayingPlayerPathProtobuf *playerPath;
@property (nonatomic) BOOL hasSendError;
@property (nonatomic) int sendError;
@property (retain, nonatomic) NSMutableArray *statuses;
@property (readonly, nonatomic) BOOL hasSendErrorDescription;
@property (retain, nonatomic) NSString *sendErrorDescription;

+ (Class)statusesType;

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
- (int)StringAsSendError:(id)a0;
- (void)addStatuses:(id)a0;
- (void)clearStatuses;
- (id)sendErrorAsString:(int)a0;
- (id)statusesAtIndex:(unsigned long long)a0;
- (unsigned long long)statusesCount;

@end
