@class NSString, MCSignInPageAuthenticationCell, AKInlineSignInViewController;

@interface MCSignInPageAuthenticationSectionController : NSObject <MCProfileTitlePageSectionController>

@property (retain, nonatomic) MCSignInPageAuthenticationCell *cell;
@property (retain, nonatomic) AKInlineSignInViewController *inlineSignInViewController;
@property (nonatomic) double authSectionHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (unsigned long long)numberOfRows;
- (id)titleForHeader;
- (double)heightForHeader;
- (void)registerCellClassWithTableView:(id)a0;
- (id)cellForRowAtIndex:(unsigned long long)a0;
- (double)heightForRowAtIndex:(unsigned long long)a0;

@end
