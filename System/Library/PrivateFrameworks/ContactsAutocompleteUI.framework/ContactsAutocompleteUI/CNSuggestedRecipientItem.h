@class CNComposeRecipient, NSString, NSMutableSet;

@interface CNSuggestedRecipientItem : NSObject

@property (retain, nonatomic) CNComposeRecipient *recipient;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) NSMutableSet *handles;
@property (nonatomic) BOOL isSelected;

+ (id)os_log;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void)loadHandles;
- (id)initWithRecipient:(id)a0;
- (BOOL)isSelectedForHandles:(id)a0;
- (BOOL)shouldDeselectForHandles:(id)a0;

@end
