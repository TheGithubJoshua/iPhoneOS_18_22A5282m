@class NSURL, CKLocationMediaObject;

@interface CKTranscriptLocationChatItem : CKAttachmentMessagePartChatItem

@property (retain, nonatomic) CKLocationMediaObject *locationMediaObject;
@property (retain, nonatomic) NSURL *locationURL;

- (id)dragItemProvider;
- (void).cxx_destruct;
- (BOOL)canCopy;
- (Class)balloonViewClass;
- (struct CGSize { double x0; double x1; })loadSizeThatFits:(struct CGSize { double x0; double x1; })a0 textAlignmentInsets:(out struct UIEdgeInsets { double x0; double x1; double x2; double x3; } *)a1;
- (id)mediaObject;
- (id)transferGUID;

@end
