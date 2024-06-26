@class NSString;

@interface BLTPBHandleDidPlayLightsAndSirensReplyRequest : PBRequest <NSCopying> {
    struct { unsigned char date : 1; unsigned char didPlayLightsAndSirens : 1; } _has;
}

@property (nonatomic) BOOL hasDidPlayLightsAndSirens;
@property (nonatomic) BOOL didPlayLightsAndSirens;
@property (readonly, nonatomic) BOOL hasPublisherMatchID;
@property (retain, nonatomic) NSString *publisherMatchID;
@property (readonly, nonatomic) BOOL hasPhoneSectionID;
@property (retain, nonatomic) NSString *phoneSectionID;
@property (nonatomic) BOOL hasDate;
@property (nonatomic) double date;
@property (readonly, nonatomic) BOOL hasReplyToken;
@property (retain, nonatomic) NSString *replyToken;

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
