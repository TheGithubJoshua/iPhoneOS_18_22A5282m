@class NSString, NSMutableArray, _ICLLRadioSource;

@interface _ICLLAddQueueItemsCommand : PBCodable <NSCopying> {
    int _insertPositionType;
    NSMutableArray *_items;
    int _position;
    NSString *_queueContext;
    _ICLLRadioSource *_radioSource;
    int _revision;
    struct { unsigned char insertPositionType : 1; unsigned char position : 1; unsigned char revision : 1; } _has;
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
