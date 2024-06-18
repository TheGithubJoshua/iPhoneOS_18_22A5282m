@class NSString, TPPBDictionaryMatchingRule;

@interface TPPBPolicyKeyViewMapping : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasMatchingRule;
@property (retain, nonatomic) TPPBDictionaryMatchingRule *matchingRule;
@property (readonly, nonatomic) BOOL hasView;
@property (retain, nonatomic) NSString *view;

+ (id)TPPBPolicyKeyViewMappingWithView:(id)a0 matchingRule:(id)a1;

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
