@class ICQCommerceRemoteUIDelegate;

@interface ICQCommerceRemoteUIDataProvider : ISPropertyListProvider

@property (nonatomic, getter=isPlist) BOOL plist;
@property (weak, nonatomic) ICQCommerceRemoteUIDelegate *parent;

- (BOOL)parseData:(id)a0 returningError:(id *)a1;
- (void).cxx_destruct;
- (void)_setFailureType:(id)a0;

@end
