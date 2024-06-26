@class NSString, NSMutableArray;

@interface FLGroupViewModelImpl : NSObject <FLGroupViewModel> {
    NSMutableArray *_mutableItems;
}

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *rowTitle;
@property (copy, nonatomic) NSString *groupTitle;
@property (copy, nonatomic) NSString *accountID;
@property (nonatomic) BOOL needsAccountID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)items;
- (void)addItem:(id)a0;
- (id)subtitleText;
- (id)initWithIdentifier:(id)a0;
- (id)_expirationOrInformativeText;
- (void).cxx_destruct;
- (id)footerText;
- (BOOL)restrictionEnabled;
- (BOOL)shouldCoalesceItems;

@end
