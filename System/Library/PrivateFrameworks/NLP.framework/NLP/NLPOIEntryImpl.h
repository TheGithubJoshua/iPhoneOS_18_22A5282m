@class NSString;

@interface NLPOIEntryImpl : PBCodable <NSCopying> {
    struct { unsigned char score : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasName;
@property (retain, nonatomic) NSString *name;
@property (readonly, nonatomic) BOOL hasDomain;
@property (retain, nonatomic) NSString *domain;
@property (readonly, nonatomic) BOOL hasCategory;
@property (retain, nonatomic) NSString *category;
@property (nonatomic) BOOL hasScore;
@property (nonatomic) float score;

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
