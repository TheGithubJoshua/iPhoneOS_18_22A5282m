@class NSString;

@interface NTPBViewArticleRequest : PBRequest <NSCopying>

@property (readonly, nonatomic) BOOL hasWebPageUri;
@property (retain, nonatomic) NSString *webPageUri;
@property (readonly, nonatomic) BOOL hasFeedUri;
@property (retain, nonatomic) NSString *feedUri;
@property (readonly, nonatomic) BOOL hasStoreFrontId;
@property (retain, nonatomic) NSString *storeFrontId;

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
