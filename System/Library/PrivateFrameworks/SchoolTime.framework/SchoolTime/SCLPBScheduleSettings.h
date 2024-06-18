@class NSMutableArray;

@interface SCLPBScheduleSettings : PBCodable <NSCopying> {
    struct { unsigned char version : 1; unsigned char isEnabled : 1; } _has;
}

@property (nonatomic) BOOL hasVersion;
@property (nonatomic) unsigned int version;
@property (nonatomic) BOOL hasIsEnabled;
@property (nonatomic) BOOL isEnabled;
@property (retain, nonatomic) NSMutableArray *recurrences;

+ (Class)recurrencesType;

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
- (void)addRecurrences:(id)a0;
- (void)clearRecurrences;
- (id)recurrencesAtIndex:(unsigned long long)a0;
- (unsigned long long)recurrencesCount;

@end