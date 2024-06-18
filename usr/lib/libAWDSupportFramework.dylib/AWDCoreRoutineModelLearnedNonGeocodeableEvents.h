@interface AWDCoreRoutineModelLearnedNonGeocodeableEvents : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char learnedNongeocodableEvents : 1; unsigned char nongeocodableEvents : 1; unsigned char unlearnedNongeocodableEvents : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasUnlearnedNongeocodableEvents;
@property (nonatomic) int unlearnedNongeocodableEvents;
@property (nonatomic) BOOL hasLearnedNongeocodableEvents;
@property (nonatomic) int learnedNongeocodableEvents;
@property (nonatomic) BOOL hasNongeocodableEvents;
@property (nonatomic) int nongeocodableEvents;

- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end