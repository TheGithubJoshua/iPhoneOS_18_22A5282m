@class IMChat, IMHandle;

@interface IMStewieStoppedSharingChatItem : IMTranscriptChatItem {
    IMHandle *_handle;
}

@property (weak, nonatomic) IMChat *chat;

- (id)handle;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithItem:(id)a0 emergencyUserHandle:(id)a1 chat:(id)a2;

@end
