@class NSString;

@interface NTPBArticleFeedback : PBCodable <NSCopying> {
    struct { unsigned char feedback : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasSourceChannelId;
@property (retain, nonatomic) NSString *sourceChannelId;
@property (readonly, nonatomic) BOOL hasArticleId;
@property (retain, nonatomic) NSString *articleId;
@property (readonly, nonatomic) BOOL hasTopicId;
@property (retain, nonatomic) NSString *topicId;
@property (readonly, nonatomic) BOOL hasLanguage;
@property (retain, nonatomic) NSString *language;
@property (nonatomic) BOOL hasFeedback;
@property (nonatomic) int feedback;

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
