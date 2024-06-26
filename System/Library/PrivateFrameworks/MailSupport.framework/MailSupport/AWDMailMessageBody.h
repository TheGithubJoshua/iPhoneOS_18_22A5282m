@class NSString;

@interface AWDMailMessageBody : PBCodable <NSCopying> {
    struct { unsigned char totalTextSize : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasMimeType;
@property (retain, nonatomic) NSString *mimeType;
@property (readonly, nonatomic) BOOL hasMimeSubtype;
@property (retain, nonatomic) NSString *mimeSubtype;
@property (nonatomic) BOOL hasTotalTextSize;
@property (nonatomic) unsigned long long totalTextSize;

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
- (id)initWithMIMEBody:(id)a0;

@end
