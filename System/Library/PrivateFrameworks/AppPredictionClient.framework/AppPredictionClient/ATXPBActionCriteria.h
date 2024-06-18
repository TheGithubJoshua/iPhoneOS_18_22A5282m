@class NSData;

@interface ATXPBActionCriteria : PBCodable <NSCopying> {
    struct { unsigned char endDate : 1; unsigned char startDate : 1; unsigned char isLockScreenEligible : 1; } _has;
}

@property (nonatomic) BOOL hasStartDate;
@property (nonatomic) double startDate;
@property (nonatomic) BOOL hasEndDate;
@property (nonatomic) double endDate;
@property (nonatomic) BOOL hasIsLockScreenEligible;
@property (nonatomic) BOOL isLockScreenEligible;
@property (readonly, nonatomic) BOOL hasPredicate;
@property (retain, nonatomic) NSData *predicate;

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