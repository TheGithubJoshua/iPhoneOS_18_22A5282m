@class NSString, NSDate;

@interface MUILocationSuggestion : MUIResultSuggestion

@property (readonly, nonatomic) NSString *address;
@property (readonly, nonatomic) NSDate *date;

+ (id)suggestionWithAddress:(id)a0 date:(id)a1 authors:(id)a2 authorEmailAddresses:(id)a3 objectID:(id)a4 messageList:(id)a5;

- (void).cxx_destruct;
- (id)description;
- (id)category;
- (id)initWithAddress:(id)a0 date:(id)a1 authors:(id)a2 authorEmailAddresses:(id)a3 objectID:(id)a4 messageList:(id)a5;

@end
