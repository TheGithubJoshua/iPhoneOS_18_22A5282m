@class MFLock, NSMutableDictionary;

@interface MFWebAttachmentSource : NSObject {
    MFLock *_attachmentsLock;
    NSMutableDictionary *_attachmentsByURL;
}

+ (id)_setOfAllSources;
+ (id)allSources;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (void)dealloc;
- (id)attachmentForURL:(id)a0;
- (void)removeAttachmentForURL:(id)a0;
- (BOOL)setAttachment:(id)a0 forURL:(id)a1;

@end
