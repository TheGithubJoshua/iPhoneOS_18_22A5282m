@class SYPeer;

@interface SYClock : PBCodable <NSCopying>

@property (retain, nonatomic) SYPeer *peer;
@property (nonatomic) unsigned long long version;

+ (void)initialize;

- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (unsigned long long)increment;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_myDescription;
- (unsigned long long)increaseBy:(unsigned long long)a0;

@end
