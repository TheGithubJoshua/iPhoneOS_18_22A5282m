@class MFLibraryMessage;

@interface MFOutgoingLibraryMessageContent : MFOutgoingMessageContent

@property (retain, nonatomic) MFLibraryMessage *libraryMessage;

- (id)copy;
- (void)dealloc;
- (id)headers;
- (id)libraryContent;

@end
