@interface FCCPercentageOfDayRuleProtobuf : PBCodable <NSCopying> {
    struct { unsigned char minimumDayDuration : 1; unsigned char percentOfDay : 1; } _has;
}

@property (nonatomic) BOOL hasMinimumDayDuration;
@property (nonatomic) double minimumDayDuration;
@property (nonatomic) BOOL hasPercentOfDay;
@property (nonatomic) double percentOfDay;

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
