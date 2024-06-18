@class NSString, AWDMailMessageBody;

@interface AWDMailMessage : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasMessageId;
@property (retain, nonatomic) NSString *messageId;
@property (readonly, nonatomic) BOOL hasBody;
@property (retain, nonatomic) AWDMailMessageBody *body;

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
- (id)initWithMailMessage:(id)a0;

@end
