@class NSString;

@interface NTPBFeedEngagementMenuExposure : PBCodable <NSCopying> {
    struct { unsigned char feedMenuType : 1; unsigned char feedType : 1; } _has;
}

@property (nonatomic) BOOL hasFeedType;
@property (nonatomic) int feedType;
@property (readonly, nonatomic) BOOL hasFeedId;
@property (retain, nonatomic) NSString *feedId;
@property (readonly, nonatomic) BOOL hasArticleId;
@property (retain, nonatomic) NSString *articleId;
@property (readonly, nonatomic) BOOL hasReferencedArticleId;
@property (retain, nonatomic) NSString *referencedArticleId;
@property (nonatomic) BOOL hasFeedMenuType;
@property (nonatomic) int feedMenuType;

- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)StringAsFeedType:(id)a0;
- (id)feedTypeAsString:(int)a0;

@end
