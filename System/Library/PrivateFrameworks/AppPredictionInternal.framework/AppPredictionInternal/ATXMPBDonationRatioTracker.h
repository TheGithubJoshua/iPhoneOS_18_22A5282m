@class NSString;

@interface ATXMPBDonationRatioTracker : PBCodable <NSCopying> {
    struct { unsigned char ratio : 1; unsigned char actionType : 1; } _has;
}

@property (nonatomic) BOOL hasActionType;
@property (nonatomic) int actionType;
@property (nonatomic) BOOL hasRatio;
@property (nonatomic) double ratio;
@property (readonly, nonatomic) BOOL hasAbGroup;
@property (retain, nonatomic) NSString *abGroup;

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
- (id)actionTypeAsString:(int)a0;
- (int)StringAsActionType:(id)a0;

@end
