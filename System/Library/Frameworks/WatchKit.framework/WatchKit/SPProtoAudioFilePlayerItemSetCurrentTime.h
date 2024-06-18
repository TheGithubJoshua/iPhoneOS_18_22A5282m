@class NSString;

@interface SPProtoAudioFilePlayerItemSetCurrentTime : PBCodable <NSCopying> {
    struct { unsigned char currentTime : 1; } _has;
}

@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) BOOL hasCurrentTime;
@property (nonatomic) double currentTime;

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
- (id)sockPuppetMessage;

@end
