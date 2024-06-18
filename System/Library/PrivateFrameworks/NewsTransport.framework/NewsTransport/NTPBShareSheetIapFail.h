@class NSString;

@interface NTPBShareSheetIapFail : PBCodable <NSCopying> {
    struct { unsigned char failureReason : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasFailedIapId;
@property (retain, nonatomic) NSString *failedIapId;
@property (nonatomic) BOOL hasFailureReason;
@property (nonatomic) int failureReason;
@property (readonly, nonatomic) BOOL hasArticleId;
@property (retain, nonatomic) NSString *articleId;
@property (readonly, nonatomic) BOOL hasSourceChannelId;
@property (retain, nonatomic) NSString *sourceChannelId;

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
