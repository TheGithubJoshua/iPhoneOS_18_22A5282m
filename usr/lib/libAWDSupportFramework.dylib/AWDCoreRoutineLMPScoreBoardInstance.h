@class NSString;

@interface AWDCoreRoutineLMPScoreBoardInstance : PBCodable <NSCopying> {
    struct { unsigned char corrects : 1; unsigned char incorrects : 1; unsigned char invalids : 1; unsigned char unknowns : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasKeyword;
@property (retain, nonatomic) NSString *keyword;
@property (nonatomic) BOOL hasCorrects;
@property (nonatomic) int corrects;
@property (nonatomic) BOOL hasIncorrects;
@property (nonatomic) int incorrects;
@property (nonatomic) BOOL hasUnknowns;
@property (nonatomic) int unknowns;
@property (nonatomic) BOOL hasInvalids;
@property (nonatomic) int invalids;

- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;

@end
