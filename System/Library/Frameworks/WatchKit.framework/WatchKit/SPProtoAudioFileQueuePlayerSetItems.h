@class NSString, NSMutableArray;

@interface SPProtoAudioFileQueuePlayerSetItems : PBCodable <NSCopying>

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSMutableArray *playerItemIdentifiers;

+ (Class)playerItemIdentifiersType;

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
- (void)addPlayerItemIdentifiers:(id)a0;
- (void)clearPlayerItemIdentifiers;
- (id)playerItemIdentifiersAtIndex:(unsigned long long)a0;
- (unsigned long long)playerItemIdentifiersCount;
- (id)sockPuppetMessage;

@end
