@class NSString;

@interface BMPBSiriQueryResult : PBCodable <NSCopying> {
    struct { unsigned char confidence : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasQid;
@property (retain, nonatomic) NSString *qid;
@property (readonly, nonatomic) BOOL hasDomain;
@property (retain, nonatomic) NSString *domain;
@property (nonatomic) BOOL hasConfidence;
@property (nonatomic) double confidence;

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
