@class NSMutableArray;

@interface NTPBEnvelopeBatch : PBCodable <NSCopying> {
    struct { unsigned char envelopeDroppedCountDueToSizeLimit : 1; unsigned char majorVersion : 1; unsigned char minorVersion : 1; unsigned char patchVersion : 1; } _has;
}

@property (retain, nonatomic) NSMutableArray *envelopes;
@property (nonatomic) BOOL hasMajorVersion;
@property (nonatomic) int majorVersion;
@property (nonatomic) BOOL hasMinorVersion;
@property (nonatomic) int minorVersion;
@property (nonatomic) BOOL hasPatchVersion;
@property (nonatomic) int patchVersion;
@property (nonatomic) BOOL hasEnvelopeDroppedCountDueToSizeLimit;
@property (nonatomic) int envelopeDroppedCountDueToSizeLimit;

+ (Class)envelopeType;

- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addEnvelope:(id)a0;
- (void)clearEnvelopes;
- (id)envelopeAtIndex:(unsigned long long)a0;
- (unsigned long long)envelopesCount;

@end
