@class NSString;

@interface WBSAnalyticsSafariVersioningEvent : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char variant : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) BOOL hasVersion;
@property (copy, nonatomic) NSString *version;
@property (nonatomic) BOOL hasVariant;
@property (nonatomic) int variant;

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
- (int)StringAsVariant:(id)a0;
- (id)variantAsString:(int)a0;

@end
