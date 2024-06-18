@class NSString;

@interface MessageServiceSessionSendBlockWrapper : NSObject

@property (copy, nonatomic) NSString *GUID;
@property (copy, nonatomic) id /* block */ block;
@property (nonatomic) BOOL isDelayedRichLinkBlock;

- (id)init;
- (id)description;
- (void)dealloc;

@end
