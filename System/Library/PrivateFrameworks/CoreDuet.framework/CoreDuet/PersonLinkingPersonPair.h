@class PersonLinkingPerson;

@interface PersonLinkingPersonPair : PBCodable <NSCopying> {
    struct { unsigned char grade : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasGraphPerson;
@property (retain, nonatomic) PersonLinkingPerson *graphPerson;
@property (readonly, nonatomic) BOOL hasSourcePerson;
@property (retain, nonatomic) PersonLinkingPerson *sourcePerson;
@property (nonatomic) BOOL hasGrade;
@property (nonatomic) BOOL grade;

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
