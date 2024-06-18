@class ICAttachment;

@interface ICMultipeerAttachmentRequest : ICMultipeerResourceRequest

@property (retain) ICAttachment *attachment;

- (void)startRequest;
- (id)note;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;

@end
