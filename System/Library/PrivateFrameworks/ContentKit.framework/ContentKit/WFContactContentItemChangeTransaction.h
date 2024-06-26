@class NSArray, CNMutableContact;

@interface WFContactContentItemChangeTransaction : WFContentItemChangeTransaction

@property (readonly, nonatomic) CNMutableContact *mutableContact;
@property (retain, nonatomic) NSArray *groupChangeRequest;

- (void).cxx_destruct;
- (id)initWithContentItem:(id)a0;
- (void)saveWithCompletionHandler:(id /* block */)a0 isNew:(BOOL)a1;
- (void)updateEmailAddresses:(id)a0;
- (void)updatePhoneNumbers:(id)a0;
- (void)updateStreetAddresses:(id)a0;
- (void)updateURLs:(id)a0;

@end
