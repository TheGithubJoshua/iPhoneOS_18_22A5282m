@class NSString;

@interface AWDHomeKitSignificantTimeEvent : PBCodable <NSCopying> {
    struct { unsigned char offsetPresent : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasSignificantEvent;
@property (retain, nonatomic) NSString *significantEvent;
@property (nonatomic) BOOL hasOffsetPresent;
@property (nonatomic) BOOL offsetPresent;

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