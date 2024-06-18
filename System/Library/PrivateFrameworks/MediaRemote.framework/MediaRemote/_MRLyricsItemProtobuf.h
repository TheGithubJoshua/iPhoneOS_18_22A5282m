@class NSString, _MRLyricsTokenProtobuf;

@interface _MRLyricsItemProtobuf : PBCodable <NSCopying> {
    struct { unsigned char userProvided : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasLyrics;
@property (retain, nonatomic) NSString *lyrics;
@property (nonatomic) BOOL hasUserProvided;
@property (nonatomic) BOOL userProvided;
@property (readonly, nonatomic) BOOL hasToken;
@property (retain, nonatomic) _MRLyricsTokenProtobuf *token;

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
