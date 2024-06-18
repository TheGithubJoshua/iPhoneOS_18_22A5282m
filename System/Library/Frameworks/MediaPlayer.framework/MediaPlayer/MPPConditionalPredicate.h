@class MPPMediaPredicate;

@interface MPPConditionalPredicate : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasConditionalPredicate;
@property (retain, nonatomic) MPPMediaPredicate *conditionalPredicate;
@property (readonly, nonatomic) BOOL hasThenPredicate;
@property (retain, nonatomic) MPPMediaPredicate *thenPredicate;
@property (readonly, nonatomic) BOOL hasElsePredicate;
@property (retain, nonatomic) MPPMediaPredicate *elsePredicate;

- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;

@end
