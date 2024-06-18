@class NSString, NSURL;

@interface SUCompletionItem : NSObject

@property (readonly, nonatomic) NSString *alternateTitle;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSURL *URL;

- (id)init;
- (id)initWithPropertyList:(id)a0;
- (void)dealloc;

@end
