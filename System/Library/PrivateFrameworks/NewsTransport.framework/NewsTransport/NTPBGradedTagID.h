@class NSString;

@interface NTPBGradedTagID : PBCodable <NSCopying> {
    struct { unsigned char grade : 1; unsigned char source : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasTagId;
@property (retain, nonatomic) NSString *tagId;
@property (nonatomic) BOOL hasGrade;
@property (nonatomic) int grade;
@property (nonatomic) BOOL hasSource;
@property (nonatomic) int source;

- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
