@class NSString, NSMutableArray, _ICLLRadioSource;

@interface _ICLLPlayNowQueueItemsCommand : PBCodable <NSCopying> {
    NSMutableArray *_items;
    int _position;
    NSString *_preferredPlayItemId;
    NSString *_queueContext;
    _ICLLRadioSource *_radioSource;
    int _revision;
    struct { unsigned char position : 1; unsigned char revision : 1; } _has;
}

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
