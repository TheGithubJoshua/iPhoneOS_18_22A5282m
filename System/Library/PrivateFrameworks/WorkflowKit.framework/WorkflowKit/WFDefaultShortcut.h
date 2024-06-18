@class NSString;

@interface WFDefaultShortcut : NSObject

@property (readonly, nonatomic, getter=isAlwaysVisibleOnWatch) BOOL alwaysVisibleOnWatch;
@property (readonly, nonatomic) NSString *identifier;

+ (id)allDefaultShortcuts;

- (id)initWithIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)workflowRecordWithError:(id *)a0;
- (long long)relevanceWithContext:(id)a0;

@end
