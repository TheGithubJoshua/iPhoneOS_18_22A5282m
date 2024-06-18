@interface ADAnalyticsEvent : PBCodable <NSCopying>

@property (nonatomic) int event;
@property (nonatomic) double timestamp;

+ (id)options;

- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)StringAsEvent:(id)a0;
- (id)eventAsString:(int)a0;

@end
