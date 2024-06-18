@class _MRCommandOptionsProtobuf, _MRNowPlayingPlayerPathProtobuf;

@interface _MRSendCommandMessageProtobuf : PBCodable <NSCopying> {
    struct { unsigned char command : 1; } _has;
}

@property (nonatomic) BOOL hasCommand;
@property (nonatomic) int command;
@property (readonly, nonatomic) BOOL hasOptions;
@property (retain, nonatomic) _MRCommandOptionsProtobuf *options;
@property (readonly, nonatomic) BOOL hasPlayerPath;
@property (retain, nonatomic) _MRNowPlayingPlayerPathProtobuf *playerPath;

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
- (int)StringAsCommand:(id)a0;
- (id)commandAsString:(int)a0;

@end
