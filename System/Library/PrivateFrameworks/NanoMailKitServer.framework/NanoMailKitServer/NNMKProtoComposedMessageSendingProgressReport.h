@class NSString;

@interface NNMKProtoComposedMessageSendingProgressReport : PBCodable <NSCopying> {
    struct { unsigned char progress : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasComposedMessageId;
@property (retain, nonatomic) NSString *composedMessageId;
@property (nonatomic) BOOL hasProgress;
@property (nonatomic) int progress;

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
