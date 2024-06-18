@class NSString;

@interface IMAssociatedStickerChatItem : IMAssociatedMessageChatItem

@property (readonly, copy, nonatomic) NSString *transferGUID;

- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)canDelete;
- (id)_initWithItem:(id)a0 sender:(id)a1 transferGUID:(id)a2;

@end
