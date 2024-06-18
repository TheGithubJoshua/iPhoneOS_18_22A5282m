@class NSArray;

@interface WDAppSourcesListTableViewSection : WDSourcesListTableViewSection

@property (copy, nonatomic) NSArray *installedSources;
@property (nonatomic) BOOL uninstalledSourcesExist;

- (void).cxx_destruct;
- (unsigned long long)numberOfRows;
- (id)titleForHeader;
- (id)cellForRow:(unsigned long long)a0 table:(id)a1;
- (void)didSelectRow:(unsigned long long)a0 representedByCell:(id)a1 withCompletion:(id /* block */)a2;
- (id)titleForFooter;
- (id)noneString;
- (id)_sourceCellForRow:(unsigned long long)a0 tableView:(id)a1;
- (id)_uninstalledSourcesCellWithTableView:(id)a0;
- (void)dataSourceDidUpdate;

@end
