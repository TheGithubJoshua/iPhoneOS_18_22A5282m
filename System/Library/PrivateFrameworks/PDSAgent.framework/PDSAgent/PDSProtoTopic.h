@class NSString, NSMutableArray;

@interface PDSProtoTopic : PBCodable <NSCopying>

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *qualifier;
@property (retain, nonatomic) NSMutableArray *appInfos;

+ (Class)appInfoType;

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
- (id)appInfoAtIndex:(unsigned long long)a0;
- (void)addAppInfo:(id)a0;
- (unsigned long long)appInfosCount;
- (void)clearAppInfos;

@end
