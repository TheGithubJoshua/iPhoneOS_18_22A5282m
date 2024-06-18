@class NSString, NSMutableArray;

@interface NACAudioRoutesMessage : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasCategory;
@property (retain, nonatomic) NSString *category;
@property (retain, nonatomic) NSMutableArray *audioRoutes;

+ (Class)audioRoutesType;

- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)clearAudioRoutes;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addAudioRoutes:(id)a0;
- (id)audioRoutesAtIndex:(unsigned long long)a0;
- (unsigned long long)audioRoutesCount;

@end