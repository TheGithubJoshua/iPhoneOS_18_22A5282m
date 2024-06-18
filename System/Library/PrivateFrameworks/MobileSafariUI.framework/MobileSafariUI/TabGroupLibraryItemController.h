@class WBTab, WBTabGroup;

@interface TabGroupLibraryItemController : LibraryItemController

@property (readonly, nonatomic) WBTabGroup *tabGroup;
@property (readonly, nonatomic) WBTab *tab;
@property (readonly, nonatomic, getter=isTabGroupSynced) BOOL tabGroupSynced;

- (id)dragItems;
- (BOOL)isExpanded;
- (id)accessibilityIdentifier;
- (BOOL)isSelected;
- (id)accessories;
- (id)tabGroupProvider;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)isSpringLoaded;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)subitems;
- (BOOL)allowsMoveOperation;
- (void)updateListContentConfiguration:(id)a0;
- (BOOL)_sessionContainsLocalTabs:(id)a0;
- (BOOL)_sessionContainsTabDocuments:(id)a0;
- (BOOL)_sessionContainsTabGroup:(id)a0;
- (void)didSelectItem;
- (long long)dropIntentForSession:(id)a0;
- (unsigned long long)dropOperationForSession:(id)a0;
- (BOOL)hasSubitems;
- (id)initWithConfiguration:(id)a0 sectionController:(id)a1 tabGroup:(id)a2 tab:(id)a3;
- (void)performDropWithProposal:(id)a0 session:(id)a1;
- (BOOL)shouldPersistSelection;
- (id)swipeActionsConfiguration;
- (void)willToggleExpansionState;

@end
