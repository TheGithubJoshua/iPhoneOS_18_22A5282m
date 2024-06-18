@interface NTPBAppSessionEndWatch : PBCodable <NSCopying> {
    struct { unsigned char watchAppSessionDuration : 1; } _has;
}

@property (nonatomic) BOOL hasWatchAppSessionDuration;
@property (nonatomic) long long watchAppSessionDuration;

- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
