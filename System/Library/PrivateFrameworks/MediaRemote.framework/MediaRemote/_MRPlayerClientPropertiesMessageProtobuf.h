@class _MRNowPlayingPlayerPathProtobuf;

@interface _MRPlayerClientPropertiesMessageProtobuf : PBCodable <NSCopying> {
    struct { unsigned char lastPlayingTimestamp : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasPlayerPath;
@property (retain, nonatomic) _MRNowPlayingPlayerPathProtobuf *playerPath;
@property (nonatomic) BOOL hasLastPlayingTimestamp;
@property (nonatomic) double lastPlayingTimestamp;

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

@end
