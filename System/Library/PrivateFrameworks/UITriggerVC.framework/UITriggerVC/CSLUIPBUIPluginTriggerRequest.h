@class NSString, NSMutableArray;

@interface CSLUIPBUIPluginTriggerRequest : PBRequest <NSCopying> {
    struct { unsigned char reason : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasName;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSMutableArray *dictionarys;
@property (nonatomic) BOOL hasReason;
@property (nonatomic) int reason;

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
- (id)dictionaryAtIndex:(unsigned long long)a0;
- (void)addDictionary:(id)a0;
- (void)clearDictionarys;
- (unsigned long long)dictionarysCount;

@end
