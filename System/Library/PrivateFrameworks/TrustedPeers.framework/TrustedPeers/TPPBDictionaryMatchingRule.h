@class TPPBDictionaryMatchingRuleFieldExists, NSMutableArray, TPPBDictionaryMatchingRuleFieldRegexMatch;

@interface TPPBDictionaryMatchingRule : PBCodable <NSCopying> {
    struct { unsigned char type : 1; } _has;
}

@property (nonatomic) BOOL hasType;
@property (nonatomic) int type;
@property (retain, nonatomic) NSMutableArray *ands;
@property (retain, nonatomic) NSMutableArray *ors;
@property (readonly, nonatomic) BOOL hasNot;
@property (retain, nonatomic) TPPBDictionaryMatchingRule *not;
@property (readonly, nonatomic) BOOL hasMatch;
@property (retain, nonatomic) TPPBDictionaryMatchingRuleFieldRegexMatch *match;
@property (readonly, nonatomic) BOOL hasExists;
@property (retain, nonatomic) TPPBDictionaryMatchingRuleFieldExists *exists;

+ (Class)andType;
+ (Class)orType;

- (BOOL)performOrMatch:(id)a0 error:(id *)a1;
- (int)StringAsType:(id)a0;
- (void)mergeFrom:(id)a0;
- (unsigned long long)orsCount;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)andAtIndex:(unsigned long long)a0;
- (void)writeTo:(id)a0;
- (id)typeAsString:(int)a0;
- (void)clearOrs;
- (unsigned long long)andsCount;
- (BOOL)performAndMatch:(id)a0 error:(id *)a1;
- (BOOL)matches:(id)a0 error:(id *)a1;
- (void)addAnd:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)invertMatch:(id)a0 error:(id *)a1;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addOr:(id)a0;
- (void)clearAnds;
- (id)orAtIndex:(unsigned long long)a0;

@end
