@class NSString, NSMutableArray;

@interface NTPBTrendingConfig : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasFallbackLanguageTag;
@property (retain, nonatomic) NSString *fallbackLanguageTag;
@property (retain, nonatomic) NSMutableArray *languageConfigs;

+ (Class)languageConfigsType;

- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addLanguageConfigs:(id)a0;
- (void)clearLanguageConfigs;
- (id)languageConfigsAtIndex:(unsigned long long)a0;
- (unsigned long long)languageConfigsCount;

@end
