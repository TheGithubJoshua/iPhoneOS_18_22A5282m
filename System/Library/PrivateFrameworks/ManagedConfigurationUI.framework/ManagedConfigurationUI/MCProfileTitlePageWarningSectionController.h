@class NSString, MCProfileWarning, UITableView;

@interface MCProfileTitlePageWarningSectionController : NSObject <MCProfileTitlePageSectionController>

@property (weak, nonatomic) UITableView *tableView;
@property (retain, nonatomic) MCProfileWarning *warning;
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
- (id)initWithWarning:(id)a0;

@end
