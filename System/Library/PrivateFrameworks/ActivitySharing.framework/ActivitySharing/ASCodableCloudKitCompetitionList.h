@class NSData, NSMutableArray;

@interface ASCodableCloudKitCompetitionList : PBCodable <NSCopying> {
    struct { unsigned char type : 1; } _has;
}

@property (retain, nonatomic) NSMutableArray *competitions;
@property (readonly, nonatomic) BOOL hasFriendUUID;
@property (retain, nonatomic) NSData *friendUUID;
@property (nonatomic) BOOL hasType;
@property (nonatomic) long long type;

+ (Class)competitionsType;

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
- (void)addCompetitions:(id)a0;
- (void)clearCompetitions;
- (id)competitionsAtIndex:(unsigned long long)a0;
- (unsigned long long)competitionsCount;

@end
